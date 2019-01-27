#pragma once
#include <string>

using namespace std;

class Product
{
private:
	string name;
	int qty;
	double price;
	double amount;
public:
	Product();
	Product(string name, int qty, double price);
	string getName();
	int getQty();
	double getPrice();
	double getAmount();
	~Product();
	void calculateAmount();
};

