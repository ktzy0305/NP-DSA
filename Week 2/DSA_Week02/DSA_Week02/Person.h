#pragma once

#include "string"
using namespace std;

class Person
{
private: 
	string name;
	string telNo;

public:
	Person();
	Person(string name, string telNo);
	string getName();
	void setName(string name);
	string getTelNo();
	void setTelNo(string telNo);
	~Person();
};

