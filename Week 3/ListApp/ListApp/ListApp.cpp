// ListApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "List.h"
#include <iostream>
#include "string"

using namespace std;

int main()
{
	List nameList;
	cout << "Adding Annie, Jackie and Wendy" << endl;
	nameList.add("Annie");
	nameList.add("Jackie");
	nameList.add("Wendy");
	cout << "Print nameList after adding Annie, Jackie and Wendy\n" << endl;
	nameList.print();
	cout << "\nAdding Brenda at position 2" << endl;
	nameList.add(2, "Brenda");
	//Print after adding Brenda at position 2
	cout << "Print nameList after adding Brenda at position 2\n" << endl;
	nameList.print();
	//Remove Jackie
	cout << "\nRemoving name from nameList at position 3" << endl;
	nameList.remove(3);
	cout << "Print nameList after removing name from nameList at position 3\n" << endl;
	nameList.print();
	//Remove Annie
	cout << "\nRemoving name from nameList at position 1" << endl;
	nameList.remove(1);
	cout << "Print nameList after removing name from nameList at position 1\n" << endl;
	nameList.print();
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
