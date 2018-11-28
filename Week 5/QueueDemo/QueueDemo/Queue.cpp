#include "pch.h"
#include "Queue.h"
#include<iostream>

using namespace std;

Queue::Queue()
{
}

Queue::~Queue()
{
	frontNode = nullptr;
	backNode = nullptr;
}

bool Queue::enqueue(ItemType item)
{
	Node *newNode = new Node();
	newNode->item = item;
	newNode->next = NULL;
	if (isEmpty())
	{
		frontNode = newNode;
	}
	else
	{
		backNode->next = newNode;
	}
	backNode = newNode;
	return true;
}

bool Queue::dequeue()
{
	bool success = !isEmpty();
	if (success)
	{
		if (frontNode == backNode)
		{
			frontNode == NULL;
			backNode == NULL;
		}
		else
		{
			Node *tempNode = frontNode;
			frontNode = frontNode->next;
			tempNode->next = NULL;
			delete tempNode;
		}
	}
	return success;
}

bool Queue::dequeue(ItemType &item)
{
	getFront(item);
	return dequeue();
}

void Queue::getFront(ItemType &item)
{
	if (!isEmpty())
	{
		item = frontNode->item;
	}
}

bool Queue::isEmpty()
{
	return frontNode == NULL;
}

void Queue::displayItems()
{
	Node* tempNode = frontNode;
	while (tempNode != NULL)
	{
		cout << tempNode->item << endl;
		tempNode = tempNode->next;
	}
}

