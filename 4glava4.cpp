#include <iostream>
#include <string>

struct pizza
{
	std::string name;
	double diameter;
	double weight;
};

int main()
{
	using namespace std;
	pizza forExample;
		
	cout << "Enter the company name: ";
	getline(cin, forExample.name);

	cout << "Enter the diameter of the pizza: ";
	cin >> forExample.diameter;

	cout << "Enter the weight of the pizza: ";
	cin >> forExample.weight;
	cout << endl << endl;

	cout << "******************************************************" << endl;
	cout << "The company name is: " << forExample.name << endl;
	cout << "The diameter of the pizza: " << forExample.diameter << endl;
	cout << "The weight of the pizza: " << forExample.weight << endl << endl;
	cout << "******************************************************" << endl;

	return 0;
}
