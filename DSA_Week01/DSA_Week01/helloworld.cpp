#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int helloworld()
{
	double n;
	cout << "Hello, World!" << endl;
	cout << "Please enter a number : ";
	cin >> n;
	cout << "Number = " << n << endl;

	string model;
	cout << "Please enter your moble phone model : "; // e.g. iPhone 7 Plus
	cin >> model;
	cout << "Model = " << model << endl; 
	cout << endl;
	system("PAUSE");

	return 0;
}