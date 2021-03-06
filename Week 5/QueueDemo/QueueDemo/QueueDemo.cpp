// QueueDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Queue.h"
#include "Stack.h"
#include <string>
#include <iostream>

//Question 6
bool recognisePalindromes(string input)
{
	Queue queue;
	Stack stack;

	int length = input.length();
	for (int i = 0; i < length; i++)
	{
		queue.enqueue(input[i]);
		stack.push(input[i]);
	}

	bool charAreEquals = true;
	while (!queue.isEmpty() && charAreEquals)
	{
		char queueFront;
		char stackTop;

		queue.getFront(queueFront);
		stack.getTop(stackTop);

		if (queueFront == stackTop)
		{
			queue.dequeue();
			stack.pop();
		}
		else
			charAreEquals = false;
	}
	return charAreEquals;
}

int main()
{
	//Question 5
	Queue q;			
	q.enqueue('a');		
	q.enqueue('b');		

	char frontChar;
	q.getFront(frontChar);
	cout << "The front character of queue q is " << frontChar << endl;		//Get front of q and display

	q.displayItems();	
	q.dequeue();		
	q.displayItems();

	//Question 6
	while (true)
	{
		string input;
		cout << "Please input a string: ";
		cin >> input;
		if (recognisePalindromes(input))
			cout << "Your input is a palindrome." << endl;
		else
			cout << "Your input is not a palindrome." << endl;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
