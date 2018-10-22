#pragma once
class Account
{
private:
	double accountBalance;
public:
	Account();
	Account(double);
	virtual void credit(double);
	virtual void debit(double);
	double getBalance();
	void setBalance(double);
	~Account();
};

