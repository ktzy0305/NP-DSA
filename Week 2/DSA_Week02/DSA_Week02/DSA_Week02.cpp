// DSA_Week02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "List.h"
#include <iostream>

int main()
{
	//
	List numList;
	numList.add(20);
	numList.print();
	numList.add(1,30);
	numList.print();
	numList.add(10);
	numList.print();
	numList.add(2,50);
	numList.print();
	numList.add(4,40);
	numList.print();
	numList.remove(2);
	numList.print();
	numList.remove(2);
	numList.print();

	//Replace
	numList.replace(1, 200);
	numList.print();
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
