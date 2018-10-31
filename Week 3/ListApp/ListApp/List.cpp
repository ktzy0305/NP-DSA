#include "pch.h"
#include "List.h"


List::List()
{
}

bool List::add(ItemType item)
{
	Node *newNode = new Node; //newNode pointer
	newNode->item = item; //item gets stored into newNode	
	newNode->next = NULL; //newNode is initialised points to NULL
	if (size == 0) 
	{
		firstNode = newNode; //firstNode directly points to newNode
	}
	else
	{
		Node *temp = new Node; //temporary node 
		temp = firstNode;  //temporary node variable is assigned to the firstnode
		for (int i = 1; i < size; i++)
		{
			temp = temp->next; 
		}
		temp->next = newNode;
	}
	size++;
	return true;
}

bool List::add(int index, ItemType item)
{
	bool success = (index >= 1 & index <= size);
	if (success)
	{
		Node * newNode = new Node;
		newNode->item = item;
		newNode->next = NULL;
		if (size == 0 || index == 1)
		{
			newNode->next = firstNode;
			firstNode = newNode;
		}
		else
		{
			Node *temp = firstNode;
			for (int i = 1; i < index - 1; i++)
			{
				temp = temp->next;
			}
			newNode->next = temp->next;
			temp->next = newNode;
		}
		size++;
		return true;
	}
	else
	{
		return false;
	}
}

void List::remove(int index)
{
	if (index == 1)
	{
		firstNode = firstNode->next;	//OR firstNode = NULL
	}
	else
	{
		Node *temp = firstNode;
		for (int i = 1; i < index - 1; i++)
		{
			temp = temp->next;
		}
		Node *deltemp = temp->next;
		temp->next = temp->next->next;
		deltemp->next = NULL;
		delete deltemp;
		size--;
	}
}

ItemType List::get(int index)
{
	Node *temp = firstNode;
	for (int i = 1; i < index; i++)
	{
		temp = temp->next;
	}
	return temp->item;
}

bool List::isEmpty()
{
	if (size == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int List::getLength()
{
	return size;
}

void List::print()
{
	Node * temp = firstNode;
	while (temp != NULL)
	{
		ItemType value = temp->item;
		cout << value << endl;
		temp = temp->next;
	}
}

List::~List()
{
}
