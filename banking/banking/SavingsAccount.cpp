#include "pch.h"
#include "SavingsAccount.h"


SavingsAccount::SavingsAccount()
{
}

SavingsAccount::SavingsAccount(double balance, double interestRate) : Account(balance)
{
	this->interestRate = interestRate;
}

double SavingsAccount::calculateInterest()
{
	return interestRate * getBalance();
}

SavingsAccount::~SavingsAccount()
{
}
