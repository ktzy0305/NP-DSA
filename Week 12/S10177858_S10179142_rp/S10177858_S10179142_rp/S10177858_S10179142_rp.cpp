// S10177858_S10179142_rp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "List.h"
#include "Product.h"

using namespace std;

void displayMenu();
void writeToFile1();
void readFromFile1();
void readWriteFile1();
void writeToFile2();
void readWriteFile2();
void writeToCSVFile1();
void readFromCSVFile1();
void readWriteCSVFile1();
void writeToCSVFile2();
void readWriteCSVFile2();
string getProductDetails(string delimiter);
List readFile(string delimiter, string fileName);

int main()
{
	int option = 1;

	while (option != 0)
	{
		displayMenu();
		cin >> option;
		if (option == 1)
			writeToFile1();
		else if (option == 2)
			readFromFile1();
		else if (option == 3)
			readWriteFile1();
		else if (option == 4)
			writeToFile2();
		else if (option == 5)
			readWriteFile2();
		else if (option == 6)
			writeToCSVFile1();
		else if (option == 7)
			readFromCSVFile1();
		else if (option == 8)
			readWriteCSVFile1();
		else if (option == 9)
			writeToCSVFile2();
		else if (option == 10)
			readWriteCSVFile2();
		else if (option == 0)
		{
			cout << "Goodbye!" << endl;
			return 0;
		}
		else
			cout << "Sorry. You have entered an invalid option. \n";						
	}
}

void displayMenu()
{
	cout << endl;
	cout << "File IO Research Project\n";
	cout << "--------------------------------\n";
	cout << "[1] Write data to product1.txt\n";
	cout << "[2] Read data from product1.txt\n";
	cout << "[3] Read data from product1.txt and write to transaction1.txt\n";
	cout << "[4] Write to product2.txt\n";
	cout << "[5] Read data from product2.txt and write to transaction2.txt\n";
	cout << "[6] Write data to product1.csv\n";
	cout << "[7] Read data from product1.csv\n";
	cout << "[8] Read data from product1.csv and write to transaction1.csv\n";
	cout << "[9] Write data to product2.csv and write to transaction1.csv\n";
	cout << "[10] Read data from product2.csv and write to transaction2.csv\n";
	cout << "[0] Exit \n";
	cout << "--------------------------------\n";
	cout << "Enter option : ";
}

string getProductDetails(string delimiter)
{
	string name;
	string qty;
	string price;
	cout << "Name of Phone: ";
	cin >> name;
	cout << "Quantity of phones: ";
	cin >> qty;
	cout << "Price of phone: ";
	cin >> price;
	string text = "\n" + name + delimiter + qty + delimiter + price;
	return text;
}

List readFile(string delimiter, string fileName)
{
	List data;
	string line;
	size_t pos = 0;
	ifstream myfile(fileName);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			vector<string> arr;
			while ((pos = line.find(delimiter)) != std::string::npos) {
				arr.push_back(line.substr(0, pos));
				line.erase(0, pos + delimiter.length());
			}
			arr.push_back(line);
			Product product = Product(arr[0], stoi(arr[1]), stod(arr[2]));
			product.calculateAmount();
			data.add(product);
		}
		myfile.close();
	}
	else
		cout << "Unable to open file";
	return data;
}

void writeToFile1()
{
	ofstream myfile;
	myfile.open("../../product1.txt", ios_base::app);
	string text = getProductDetails("\t");
	myfile << text;
	myfile.close();
}

void readFromFile1()
{
	List data = readFile("\t", "../../product1.txt");
	for (int i = 1; i <= data.getLength(); i++)
		cout << data.get(i).getName() << "\t" << data.get(i).getQty() << "\t" << data.get(i).getPrice() << "\t" << data.get(i).getAmount() << endl;
}

void readWriteFile1()
{
	List data = readFile("\t", "../../product1.txt");
	ofstream myfile;
	myfile.open("../../transaction1.txt");
	for (int i = 1; i <= data.getLength(); i++)
		myfile << data.get(i).getName() << "\t" << data.get(i).getQty() << "\t" << data.get(i).getPrice() << "\t" << data.get(i).getAmount() << endl;
	myfile.close();
}

void writeToFile2()
{
	ofstream myfile;
	myfile.open("../../product2.txt", ios_base::app);
	string text = getProductDetails(";");
	myfile << text;
	myfile.close();
}

void readWriteFile2()
{
	List data = readFile(";", "../../product2.txt");
	ofstream myfile;
	myfile.open("../../transaction2.txt");
	for (int i = 1; i <= data.getLength(); i++)
		myfile << data.get(i).getName() << ";" << data.get(i).getQty() << ";" << data.get(i).getPrice() << ";" << data.get(i).getAmount() << endl;
	myfile.close();
}

void readFromCSVFile1()
{
	List data = readFile(",", "../../product1.csv");
	for (int i = 1; i <= data.getLength(); i++)
		cout << data.get(i).getName() << "\t" << data.get(i).getQty() << "\t" << data.get(i).getPrice() << "\t" << data.get(i).getAmount() << endl;
}

void writeToCSVFile1()
{
	ofstream myfile;
	myfile.open("../../product1.csv", ios_base::app);
	string text = getProductDetails(",");
	myfile << text;
	myfile.close();
}

void readWriteCSVFile1()
{
	List data = readFile(",", "../../product1.csv");
	ofstream myfile;
	myfile.open("../../transaction1.csv");
	for (int i = 1; i <= data.getLength(); i++)
		myfile << data.get(i).getName() << "," << data.get(i).getQty() << "," << data.get(i).getPrice() << "," << data.get(i).getAmount() << endl;
	myfile.close();
}

void writeToCSVFile2()
{
	ofstream myfile;
	myfile.open("../../product2.csv", ios_base::app);
	string text = getProductDetails(",");
	myfile << text;
	myfile.close();
}

void readWriteCSVFile2()
{
	List data = readFile(",", "../../product2.csv");
	ofstream myfile;
	myfile.open("../../transaction2.csv");
	for (int i = 1; i <= data.getLength(); i++)
		myfile << data.get(i).getName() << "," << data.get(i).getQty() << "," << data.get(i).getPrice() << "," << data.get(i).getAmount() << endl;
	myfile.close();
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
