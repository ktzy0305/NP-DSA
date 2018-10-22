#include "pch.h"
#include "Account.h"
#include <iostream>

using namespace std;

Account::Account()
{
}

Account::Account(double balance)
{
	if (balance < 0)
	{
		accountBalance = 0;
	}
	else
	{
		accountBalance = balance;
	}
}

void Account::credit(double amount)
{
	accountBalance += amount;
}

void Account::debit(double amount)
{
	if (amount > accountBalance)
	{
		cout << "Debit amount exceeded account balance" << endl;
	}
	else
	{
		accountBalance -= amount;
	}
}

double Account::getBalance()
{
	return accountBalance;
}

void Account::setBalance(double balance)
{
	accountBalance = balance;
}

Account::~Account()
{
}
