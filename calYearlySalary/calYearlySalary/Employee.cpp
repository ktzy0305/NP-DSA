#include "pch.h"
#include "Employee.h"
#include <string>

using namespace std;

Employee::Employee()
{
}

Employee::Employee(string firstName, string lastName, int monthlySalary)
{
	this->firstName = firstName;
	this->lastName = lastName;
	if (monthlySalary < 0)
	{
		this->monthlySalary = 0;
	}
	else
	{
		this->monthlySalary = monthlySalary;
	}
}

void Employee::setFirstName(string name) 
{
	firstName = name;
}
string Employee::getFirstName()
{
	return firstName;
}
void Employee::setLastName(string name)
{
	lastName = name;
}
string Employee::getLastName()
{
	return lastName;
}
void Employee::setMonthlySalary(int salary)
{
	monthlySalary = salary;
}
int Employee::getMonthlySalary()
{
	return monthlySalary;
}

Employee::~Employee()
{
}
