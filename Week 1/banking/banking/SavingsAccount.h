#pragma once
#include "Account.h"
class SavingsAccount : public Account
{
private:
	double interestRate;

public:
	SavingsAccount();
	SavingsAccount(double, double);
	double calculateInterest();
	~SavingsAccount();
};

