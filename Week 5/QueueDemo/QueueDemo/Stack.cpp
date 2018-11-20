#include "pch.h"
#include "Stack.h"


Stack::Stack()
{
}

Stack::~Stack()
{
	while (!isEmpty())
	{
		pop();
	}
}

bool Stack::isEmpty()
{
	if (topNode == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::push(ItemType item)
{
	Node* newNode = new Node();
	newNode->item = item;
	newNode->next = topNode;
	topNode = newNode;
	return true;
}

bool Stack::pop()
{
	if (!isEmpty())
	{
		Node* tempPointer;
		tempPointer = topNode;
		topNode = topNode->next;
		delete tempPointer;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::pop(ItemType &item)
{
	if (!isEmpty())
	{
		Node* delTemp;
		delTemp = topNode;
		topNode = topNode->next;
		item = delTemp->item;
		delete delTemp;
		return true;
	}
	else
	{
		return false;
	}
}

void Stack::getTop(ItemType &item)
{
	if (!isEmpty())
	{
		item = topNode->item;
	}
}

void Stack::displayInOrder()
{
	if (!isEmpty())
	{
		Node* tempNode;
		tempNode = topNode;
		while (tempNode != NULL)
		{
			cout << tempNode->item << endl;
			tempNode = tempNode->next;
		}
	}
	else
	{
		cout << "Nothing to display." << endl;
	}
}

void Stack::displayInOrderOfInsertion()
{
	if (!isEmpty())
	{
		Stack reverseStack;
		Node* tempNode;
		tempNode = topNode;
		while (tempNode != NULL)
		{
			reverseStack.push(tempNode->item);
			tempNode = tempNode->next;
		}
		reverseStack.displayInOrder();
	}
	else
	{
		cout << "Nothing to display in order." << endl;
	}
}


