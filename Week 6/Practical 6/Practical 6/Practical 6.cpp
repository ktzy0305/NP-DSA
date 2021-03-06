// Practical 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

#define max(x, y) ((x > y) ? x : y)

using namespace std;

long power(int a, int n);
int printBackward(const int array[], int n);
//3 Different implementations of max array for learning purposes
int maxArray(const int array[], int n);
int maxArrayTwo(const int array[], int start, int n);
int maxArrayThree(const int array[], int n);

int main()
{
	//Question 1 
	cout << power(2, 3) << endl;
	cout << endl;
	//Question 2
	int arr[] = {33,38,7,99,5,111,18,20,12,1,12,2,12};
	cout << printBackward(arr, 3) << " ";
	cout << endl;
	cout << endl;
	//Question 3
	cout << maxArray(arr, 13) << endl;
	cout << maxArrayTwo(arr, 0, 13) << endl;
	cout << maxArrayThree(arr, 13) << endl;
	return 0;
}

//Question 1
long power(int a, int n)
{
	if (a > 0 && n > 0) //Ensures that negative inputs of a and n won't result in an infinite recursion
		return a * power(a, n - 1);
	else
		return 1;
}

//Question 2
int printBackward(const int array[], int n)
{
	if (n > 1) //Ensures that the number prints backwards only if n has more than 1 elements
	{
		cout << array[n-1] << endl;
		return printBackward(array, n - 1);
	}
	else
		return array[0];	
}

//Question 3

int maxArray(const int array[], int n)
{
	if (n == 1)
		return array[0];
	else
	{
		if (maxArray(array, n - 1) > array[n - 1])
			return maxArray(array, n - 1);
		else
			return array[n - 1];
	}
}

int maxArrayTwo(const int array[], int start, int n)
{
	if (start == n)
	{
		return array[n];
	}
	else
	{
		int num = max(array[start], array[n]);
		if(num == array[start])
		{
			maxArrayTwo(array, start, n - 1);
		}
		else
		{
			maxArrayTwo(array, start + 1, n);
		}
	}
}

int maxArrayThree(const int array[], int n)
{
	if (n == 1)
		return array[0];
	else
	{
		if (array[n-1] < array[n%n])
			return maxArrayThree(array, n - 1);
		else
			return array[n - 1];
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
