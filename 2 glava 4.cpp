#include <iostream>
using namespace std;

double Fahrenheit(double);

int main()
{
	double Celsium;
	cout << "Please enter a Celsius value: ";
	cin >> Celsium;
	cout << endl << Celsium << " degrees Celsisus is " << Fahrenheit(Celsium) << " degrees Fahrenheit " << endl;
	return 0;
}
double Fahrenheit(double c)
{
	return 1.8*c + 32;
}