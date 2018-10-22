#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct candyBar
{
	string name;
	double weight;
	int kcal;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	candyBar candyArray[3];

	cout << "Enter the name of the chocolate candy boxes: ";
	cin >> candyArray[0].name;
	cout << "Enter the weight of the chocolate candy boxes: ";
	cin >> candyArray[0].weight;
	cout << "Enter the calories in the chocolate candy boxes: ";
	cin >> candyArray[0].kcal;
	cout << endl;

	cout << "Enter the name of the red boxes of chocolate: ";
	cin >> candyArray[1].name;
	cout << "Enter the weight of the red boxes of chocolate: ";
	cin >> candyArray[1].weight;
	cout << "Enter the calories in the red boxes of chocolate: ";
	cin >> candyArray[1].kcal;
	cout << endl;

	cout << "Enter the name of the black boxes of chocolate: ";
	cin >> candyArray[2].name;
	cout << "Enter the weight of the black boxes of chocolate: ";
	cin >> candyArray[2].weight;
	cout << "Enter the calories in the black boxes of chocolate: ";
	cin >> candyArray[2].kcal;
	cout << endl;

	cout << "******************************************************" << endl;

	cout << "The name of the chocolate candy boxes: " << candyArray[0].name;
	cout << endl;
	cout << "The weight of the chocolate candy boxes: " << candyArray[0].weight;
	cout << endl;
	cout << "The calories in the chocolate candy boxes: " << candyArray[0].kcal;
	cout << endl;
	cout << endl;

	cout << "The name of the red boxes of chocolate: " << candyArray[1].name;
	cout << endl;
	cout << "The weight of the red boxes of chocolate: " << candyArray[1].weight;
	cout << endl;
	cout << "The calories in the red boxes of chocolate: " << candyArray[1].kcal;
	cout << endl;
	cout << endl;

	cout << "The name of the black boxes of chocolate: " << candyArray[2].name;
	cout << endl;
	cout << "The weight of the black boxes of chocolate: " << candyArray[2].weight;
	cout << endl;
	cout << "The calories in the black boxes of chocolate: " << candyArray[2].kcal;
	cout << endl;
	cout << endl;

	cout << "******************************************************" << endl;

	return 0;
}
