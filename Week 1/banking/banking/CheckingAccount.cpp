#include "pch.h"
#include "CheckingAccount.h"
#include <iostream>

using namespace std;

CheckingAccount::CheckingAccount()
{
}

CheckingAccount::CheckingAccount(double balance, double feeAmount) : Account(balance)
{
	transactionFee = feeAmount;
}

void CheckingAccount::credit(double amount)
{
	setBalance(getBalance() + amount - transactionFee);
}

void CheckingAccount::debit(double amount)
{
	if (amount + transactionFee > getBalance())
	{
		cout << "Debit amount exceeded account balance" << endl;
	}
	else
	{
		setBalance(getBalance() - amount - transactionFee);
	}
}

CheckingAccount::~CheckingAccount()
{
}
