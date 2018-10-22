#pragma once
#include "Account.h"
class CheckingAccount : public Account
{
private:
	double transactionFee;
public:
	CheckingAccount();
	CheckingAccount(double, double);
	virtual void credit(double);
	virtual void debit(double);
	~CheckingAccount();
};

