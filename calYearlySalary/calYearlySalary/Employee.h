#pragma once
#include <string>

using namespace std;

class Employee
{
	private:
		string firstName;
		string lastName;
		int monthlySalary;

public:
	Employee();
	Employee(string, string, int);
	string getFirstName();
	void setFirstName(string);
	string getLastName();
	void setLastName(string);
	int getMonthlySalary();
	void setMonthlySalary(int);

	~Employee();
};

