// Practical 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

long power(int a, int n);
int printBackward(const int array[], int n);
int maxArray(const int array[], int n);

int main()
{
	//Question 1 
	cout << power(2, 3) << endl;
	//Question 2
	int arr[] = {2,5,7,9,5,11};
	cout << printBackward(arr, 3) << endl;
	//Question 3
	cout << maxArray(arr, 6) << endl;

	return 0;
}

//Question 1
long power(int a, int n)
{
	if (a > 0 && n > 0)
		return a * power(a, n - 1);
	else
		return 1;
}

//Question 2
int printBackward(const int array[], int n)
{
	if (n > 1)
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
	int max = array[n - 1];
	if (n > 1)
	{
		if (array[n - 1] > max)
			max = array[n - 1];
		maxArray(array, n - 1);
	}
	if(n == 1)
	{
		max = array[0];
	}
	return max;
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
