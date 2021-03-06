// DSA_Week01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

#define MAX_SIZE 10
#define min(x, y) ((x < y) ? x : y)

void addtest(int x) {
	x = x + 10;
	cout <<"Pass by value | Local function x : "  << x << endl;
}

void addtestreference(int &x) {
	x = x + 10;
	cout << "Pass by reference | Local function x : " << x << endl;
}

int main()
{
	//Example 1
    //cout << "Hello World!" << endl;
	//system("pause");
	
	//Example 2 
	//double x;
	//cout << "Please enter a number : ";
	//cin >> x;
	//cout << "x = " << x << endl;

	//Example 3
	/*
	double n;
	cout << "Hello, World" << endl;
	cout << "Please enter a number : ";
	cin >> n;
	cout << "Number = " << n << endl;

	string model;
	cout << "Please enter your phone model : ";
	cin >> model;
	cout << "Model = " << model << endl;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Please enter your phone model again : ";
	getline(cin, model);
	cout << "Model = " << model << endl;

	system("PAUSE");
	return 0;
	*/
	
	//Example 4
	/*
	double x, y, smallerNumber;
	cout << "Please enter a number for x: ";
	cin >> x;
	cout << "Please enter a number for y: ";
	cin >> y;
	cout << "x = " << x << ", y = " << y << endl;
	smallerNumber = min(x, y);
	cout << "The smaller number between x and y is: " << smallerNumber << endl;
	cout << "The smaller number divided by MAX_SIZE = " << smallerNumber / MAX_SIZE << endl;
	system("PAUSE");
	return 0;
	*/
	//Example 5
	/*
	int x = 20;
	addtest(x);
	cout << "Global x add through pass by value = " << x << endl;
	addtestreference(x);
	cout << "Global x add through pass by reference = " << x << endl;
	system("pause");
	*/
	/*
	//Practical 1 pointerDemo.cpp
	//(a) Declare an integer variable value1 and initialise to 200000
	int value1 = 200000;
	//(b) Declare an integer variable value2
	int value2;
	//(c) Declare a pointer variable called ptr
	int* ptr;
	//(d) Assign the address of value1 to ptr.
	//pointer variable ptr is assigned the memory address of value1
	ptr = &value1;
	//(e) Print the value pointed to by ptr.
	//print the value of ptr (Memory address of value1)
	cout << "ptr value : " << ptr << endl;
	//integer variable "value2" is assigned the value retrieved by dereferencing the pointer variable "ptr"
	value2 = *ptr;
	cout << "value2 = " << value2 << endl;
	//print address of value1 and address stored in ptr
	cout << "Address of value1 : " << &value1 << endl;
	cout << "Address of ptr : " << ptr << endl;
	//Assign address of value2 to ptr
	ptr = &value2;
	//Optional Step
	//cout << "Address of ptr after assigning address of value2 : " << ptr << endl;
	//Add 2000 to value pointed to by ptr.
	*ptr += 2000;
	//Print the value of value1 and value2. What do you observe? Can you explain the observation?
	cout << "Value of value1 : " << value1 << endl;
	cout << "Value of value2 : " << value2 << endl;
	*/

	/*int number;
	cout << "Please enter a 5 digit integer : ";
	cin >> number;
	cout << number / 10000
		<< "   "
		<< number % 10000 / 1000
		<< "   "
		<< number % 10000 % 1000 /100
		<< "   "
		<< number % 10000 % 1000 % 100 /10
		<< "   "
		<< number % 10000 % 1000 % 100 % 10
		<< endl;
	
	cout << number << endl;*/
	
	int numArray[5];    // array to store 5 integer numbers
	int* p;
	p = numArray;
	*p = 10;
	p++;
	*p = 20;
	p = &numArray[2];   // array starts at index 0
	*p = 30;
	p = numArray + 3;
	*p = 40;
	p = numArray;
	*(p + 4) = 50;
	for (int i = 0; i<5; i++)
		cout << numArray[i] << ", ";
	system("PAUSE");

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
