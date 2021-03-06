// banking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"


using namespace std;

int main()
{
	//Balance / Interest Rate
	SavingsAccount a1(5000, 0.01);
	SavingsAccount a2(12320, 0.011);
	SavingsAccount a3(52000, 0.015);
	//Balance / Transfer Fee
	CheckingAccount a4(7600, 0.05);
	CheckingAccount a5(12800, 0.05);
	CheckingAccount a6(37200, 0.10);

	vector <Account*> accountVector(6);
	accountVector[0] = &a1;
	accountVector[1] = &a2;
	accountVector[2] = &a3;
	accountVector[3] = &a4;
	accountVector[4] = &a5;
	accountVector[5] = &a6;
	for (int i = 0; i < accountVector.size(); i++)
	{
		Account* acc = accountVector[i];
		cout << "Initial Account Balance for account " << i + 1 << " : $" << acc->getBalance() << endl;
	}
	for (int i = 0; i < accountVector.size(); i++)
	{
		double amount;
		Account* acc = accountVector[i];
		SavingsAccount* savingsPtr = dynamic_cast<SavingsAccount*>(acc);
		if (savingsPtr != 0)
		{
		
			cout << "Specify an amount to withdraw from account "<< i + 1 << " : ";
			cin >> amount;
			savingsPtr->debit(amount);
			cout << "Updated Savings Account Balance for account " << i + 1 << " : " << savingsPtr->getBalance() << endl;

			cout << "Specify an amount to deposit into account " << i + 1 << " : ";
			cin >> amount;
			savingsPtr->credit(amount + savingsPtr->calculateInterest());
			cout << "Updated Savings Account Balance for account " << i + 1 << " : " << savingsPtr->getBalance() << endl;

		}
		else {
			CheckingAccount* checkingPtr = dynamic_cast<CheckingAccount*>(acc);
			cout << "Specify an amount to withdraw: ";
			cin >> amount;
			checkingPtr->debit(amount);
			cout << "Updated Checking Account Balance for account " << i + 1 << " : " << checkingPtr->getBalance() << endl;

			cout << "Specify an amount to deposit: ";
			cin >> amount;
			checkingPtr->credit(amount);
			cout << "Updated Checking Account Balance for account " << i + 1 << " : " << checkingPtr->getBalance() << endl;
		}
	}
	for (int i = 0; i < accountVector.size(); i++)
	{
		Account* acc = accountVector[i];
		cout << "Updated Account Balance for account " << i + 1 << " : $" << acc->getBalance() << endl;
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
