#include "pch.h"
#include "Product.h"
#include <string>

using namespace std;

Product::Product()
{
}

Product::Product(string name, int qty, double price)
{
	this->name = name;
	this->qty = qty;
	this->price = price;
}

Product::~Product()
{
}

void Product::calculateAmount()
{
	this->amount = qty * price;
}

string Product::getName() { return name; }
int Product::getQty() { return qty; }
double Product::getPrice() { return price; }
double Product::getAmount() { return amount; }