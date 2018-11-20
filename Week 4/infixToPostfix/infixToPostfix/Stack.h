#pragma once
#include <iostream>
#include <string>

using namespace std;

typedef char ItemType;

class Stack
{
private:
	struct Node
	{
		ItemType item;   // to store data
		Node*     next;  // to point to next node
	};

	Node *topNode;

public:
	Stack();		// constructor
	~Stack();		// destructor
	bool push(ItemType item);
	bool pop();
	bool pop(ItemType &item);
	char getTop();
	bool isEmpty();
	void displayInOrder();
	void displayInOrderOfInsertion();
};


