// Practical_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "BST.h"
#include <iostream>
using namespace std;

void displayMenu();

int main()
{
	BST bst;
	ItemType target;

	int dataArray[10] = { 55, 28, 87, 32, 90, 16, 45, 79, 66, 30 };
	//int dataArray[10] = { 55, 28, 87, 32, 90, 16, 45, 79, 66, 37 };
	//int dataArray[10] = { 16, 28, 30, 32, 45, 55, 66, 79, 87, 90 };

	for (int i = 0; i < 10; i++)
	{
		bst.insert(dataArray[i]);
	}

	int option = 1;

	while (option != 0)
	{
		displayMenu();
		cin >> option;

		if (option == 1)	// display items
			bst.inorder();
		else
			if (option == 2)	// search item
			{
				cout << "Enter a number to search : ";
				cin >> target;
				BinaryNode* p = bst.search(target);
				if (p != NULL)
					cout << "Found" << endl;
				else
					cout << "Not found" << endl;
			}
			else
				if (option == 3)	// add item
				{
					int n;
					cout << "Enter a number to add : ";
					cin >> n;
					bst.insert(n);
				}
				else
					if (option == 4)	// delete item
					{
						int n;
						cout << "Enter a number to delete : ";
						cin >> n;
						bst.remove(n);
					}
					else
						if (option == 5)	// display number of items
							cout << "Number of items : " << bst.countNodes() << endl;
						else
							if (option == 6)	// display height
								cout << "Height of BST : " << bst.getHeight() << endl;
							else
								if (option == 7)	// check if tree is balanced
									if (bst.isBalanced())
										cout << "BST is balanced." << endl;
									else
										cout << "BST is not balanced." << endl;
								else
									if (option == 0)
										cout << "Bye! \n";
									else
										cout << "Sorry. You have entered an invalid option. \n";
	}
}

void displayMenu()
{
	cout << endl;
	cout << "Binary Search Tree Demo \n";
	cout << "--------------------------------\n";
	cout << "1 Display all the items in order\n";
	cout << "2 Search for an item \n";
	cout << "3 Add a new item \n";
	cout << "4 Delete an item \n";
	cout << "5 Display total number of items \n";
	cout << "6 Display the height \n";
	cout << "7 Check if tree is balanced \n";
	cout << "0 Exit \n";
	cout << "--------------------------------\n";
	cout << "Enter option : ";
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
