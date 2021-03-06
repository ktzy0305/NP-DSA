// Practical 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

static int comparisons;

//Question 1 (iterative sequential search function)
int search(int dataArray[], int arraySize, int target)
{
	//Question 5 (Modify methods to count the number of comparisons)
	comparisons = 0;
	for (int i = 0; i < arraySize; i++)
	{
		comparisons++;
		if (dataArray[i] == target) // if target is found       
			return i;
	}
	return -1; // if target is not found 
}

//Question 3 (Iterative binary search function)
int binarySearch(int dataArray[], int arraySize, int target)
{
	//Question 5 (Modify methods to count the number of comparisons)
	comparisons = 0;
	int first = 0;
	int last = arraySize - 1;
	while (first <= last)
	{
		comparisons++;
		int mid = (first + last) / 2;
		if (dataArray[mid] == target) //If target is found        
			return mid;
		else
		{
			if (target < dataArray[mid])
				last = mid - 1;  // Search first half of the array
			else
				first = mid + 1; // Search second half of the array
		}
	}
	return -1; // Target not found

}

//Question 8(Recursive sequential search function)
int recursiveSearch(int dataArray[], int arraySize, int start, int target)
{
	if (start < arraySize)
	{
		if (dataArray[start] == target)
			return start;
		else
		{
			if (dataArray[start] > target)
				return -1;
			else
				return recursiveSearch(dataArray, arraySize, start + 1, target);
		}
	}
	else
		return -1;
}

//Question 9(Recursive binary search function)
int recursiveBinarySearch(int dataArray[], int start, int last, int target)
{
	if (start > last)
		return -1;
	else
	{
		int mid = (start + last) / 2;
		if (dataArray[mid] == target)
				return mid;
		else
		{
			if (target < dataArray[mid])
				return recursiveBinarySearch(dataArray, start, mid - 1, target);
			else
				return recursiveBinarySearch(dataArray, mid + 1, last, target);
		}
	}
}


int main()
{
	//Question 2 (Sample Program)

	//Declare an integer array dataArray
	int dataArray[1000];
	//Initialise dataArray with even numbers
	for (int i = 0; i < 1000; i++)
	{
		dataArray[i] = ((i + 1) * 2);
	}
	while (true)
	{
		//declare target integer variable
		int target;
		//Question 6(Modify the sample program to invoke both the sequential seach and binary search to retrieve the comparison counts of each search method)
		//Sequential search comparisons count
		//int sequentialComparisons = 0;
		//Binary search comparions count
		//int binaryComparisons = 0;
		cout << "Enter a target number to search : ";
		cin >> target;
		if (search(dataArray, 1000, target) == -1) // If not found
			cout << "Not found" << endl;
		else
			cout << "Found" << endl;
		cout << "Sequential Search : " << comparisons << endl;

		//Question 4 (Modify sample program from question 2 to invoke the binarySearch() method)
		if (binarySearch(dataArray, 1000, target) == -1) // If not found
			cout << "Not found" << endl;
		else
			cout << "Found" << endl;
		cout << "Binary Search     : " << comparisons << endl;

		//Testing for questions 8 and 9
		if (recursiveSearch(dataArray, 1000, 0, target) == -1) // If not found
			cout << "Not found" << endl;
		else
			cout << "Found" << endl;

		if (recursiveBinarySearch(dataArray, 0, 999, target) == -1) // If not found
			cout << "Not found" << endl;
		else
			cout << "Found" << endl;
	}
	return 0;
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
