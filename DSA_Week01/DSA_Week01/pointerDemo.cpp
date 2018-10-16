#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
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
