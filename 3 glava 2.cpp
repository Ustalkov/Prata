#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{

	int a, b, c;
	float d, e, imt;
	cout << "Enter your height : \n";
	cout << "Feet: ";
	cin >> a;
	cout << "\nInches: ";
	cin >> b;
	cout << "\nEnter your weight in feet: ";
	cin >> c;

	d = ((a * 12) + b)*0.0254;
	imt = (c / 2.2) / (((a * 12) + b)*0.0254);

	cout << "\nBMI = " << imt << "\n";

	system("Pause");
	return 0;
}