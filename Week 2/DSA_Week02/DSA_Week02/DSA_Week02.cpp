// DSA_Week02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "List.h"
#include "Person.h"
#include <iostream>
#include "string"

using namespace std;

int main()
{
	List personList;
	int choice; 
	while (true)
	{
		cout << "---------------- Main Menu -------------------" << endl;
		cout << "[1] List the phone numbers" << endl;
		cout << "[2] Add a new contact" << endl;
		cout << "[3] Remove a contact  " << endl;
		cout << "[4] Search for a phone number " << endl;
		cout << "[0] Exit " << endl;
		cout << "----------------------------------------------" << endl;
		cout << "Enter your option : ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "Displaying all contacts" << endl;
			personList.print();
			if (personList.getLength() == 0)
			{
				cout << "No contacts available\n" << endl;
			}
		}
		else if (choice == 2)
		{
			string name;
			string phoneNo;
			cout << "Add a new contact\n" << endl;
			cout << "Name : ";
			cin >> name;
			cout << "Phone Number : ";
			cin >> phoneNo;
			Person p(name, phoneNo);
			bool success = personList.add(p);
			if (!success)
			{
				cout << "Unable to add contact" << endl;
			}
		}
		else if (choice == 3)
		{
			int index;
			cout << "Remove a contact" << endl;
			personList.print();
			cout << "Choose a contact to remove : ";
			cin >> index;
			personList.remove(index);
		}
		else if (choice == 4)
		{
			string searchName;
			cout << "Search for a contact's phone number" << endl;
			cout << "\nEnter the name of the contact to search for their phone number : ";
			cin >> searchName;
			for (int i = 1; i <= personList.getLength(); i++)
			{
				if (personList.get(i).getName()._Equal(searchName))
				{
					cout << personList.get(i).getName() << " - " << personList.get(i).getTelNo() <<"\n"<< endl;
				}
				else
				{
					cout << "Name cannot be found in contacts.\n" << endl;
				}
			}
		}
		else if (choice == 0)
		{
			return 0;
		}
		else 
		{
			cout << "Invalid option" << endl;
		}
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
