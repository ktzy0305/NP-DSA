// calYearlySalary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee e1("Kevin", "Toh", 5000);
	Employee e2("Lorem", "Ipsum", 4230);
    cout << "I am " << e1.getFirstName() << " " << e1.getLastName() << " and I earn $" << e1.getMonthlySalary() << " a month." << endl; 
	cout << "I am " << e2.getFirstName() << " " << e2.getLastName() << " and I earn $" << e2.getMonthlySalary() << " a month." << endl;
	e1.setMonthlySalary(e1.getMonthlySalary() * 110 / 100);
	e2.setMonthlySalary(e2.getMonthlySalary() * 110 / 100);
	cout << "I am " << e1.getFirstName() << " " << e1.getLastName() << " and my new salary is $" << e1.getMonthlySalary() << " a month." << endl;
	cout << "I am " << e2.getFirstName() << " " << e2.getLastName() << " and my new salary is $" << e2.getMonthlySalary() << " a month." << endl;
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
