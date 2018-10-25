#include "pch.h"
#include "Person.h"
#include "string"
using namespace std;

Person::Person()
{
}

Person::Person(string name, string telNo)
{
	this->name = name;
	this->telNo = telNo;
}

string Person::getName()
{
	return name;
}

void Person::setName(string name)
{
	this->name = name;
}

string Person::getTelNo()
{
	return telNo;
}

void Person::setTelNo(string telNo)
{
	this->telNo = telNo;
}

Person::~Person()
{
}
