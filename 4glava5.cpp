#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct pizza
{
	double diameter;
	string name;
	double weight;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	pizza *forExample = new pizza;

	cout << "Enter the diameter of pizza: ";
	cin >> forExample->diameter;
	cin.ignore();

	cout << "Enter the name of the company: ";
	getline(cin, forExample->name);
	cout << "Enter the weight of pizza: ";
	cin >> forExample->weight;
	cout << endl;
	cout << endl;

	cout << "******************************************************" << endl;

	cout << "Company name: " << forExample->name;
	cout << endl;
	cout << "The diameter of the pizza: " << forExample->diameter;
	cout << endl;
	cout << "The weight of the pizza: " << forExample->weight;
	cout << endl;
	cout << endl;

	cout << "******************************************************" << endl;
	delete forExample;
	return 0;
}
