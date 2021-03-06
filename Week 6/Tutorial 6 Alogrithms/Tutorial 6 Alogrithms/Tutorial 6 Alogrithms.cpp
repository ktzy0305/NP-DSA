// Tutorial 6 Alogrithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

//Question 1
int sumArray(int arr[], int index)
{
	if (index > 0)
	{
		return arr[index-1] + sumArray(arr, index-1);
	}
	else
		return 0;
}

//Question 3
int sum(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum(n - 1);
}

//Question 4a
void writeLine(char c, int numOfTimes)
{
	if (numOfTimes == 1)
		cout << c << endl;
	else
	{
		cout << c;
		writeLine(c, numOfTimes - 1);
	}
}

//Question 4b
void writeBlock(char c, int numOfRows, int numOfTimes)
{
	if (numOfRows == 1)
		writeLine(c, numOfTimes);
	else
	{
		writeLine(c, numOfTimes);
		writeBlock(c, numOfRows - 1, numOfTimes);
	}
}

//Question 5

int f(int n);

int f(int n)
{
	cout << "Function entered with n = " << n << endl;
	switch (n)
	{
	case 0:
	case 1:
	case 2: return  n + 1;

	default: return f(n - 2) * f(n - 4);
	}
}


int main()
{
	//Question 1
	cout << "Question 1" << endl;
	writeLine('-', sizeof("Question 1"));
	int anArr[] = {4,2,3,4,5};
	cout << sumArray(anArr, 3) << endl;
	
	//Question 3
	cout << "Question 3" << endl;
	writeLine('-', sizeof("Question 3"));
    cout << sum(5) << endl;

	//Question 4(a)
	cout << "Question 4(a)" << endl;
	writeLine('-', sizeof("Question 4(a)"));
	writeLine('*', 5);

	//Question 4(b)
	cout << "Question 4(b)" << endl;
	writeLine('-', sizeof("Question 4(b)"));
	writeBlock('*', 3, 5);

	//Question 5
	cout << "Question 5" << endl;
	writeLine('-', sizeof("Question 5"));
	cout << "The value of f(8) is " << f(8) << endl;
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
