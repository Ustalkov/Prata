#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "rus");
	float l, km, gl, mil;
	float result;
	cout << " ¬ведите сколько пройдено км :";
	cin >> km;
	cout << " ¬ведите сколько литров бензина израсходовано :";
	cin >> l;
	result = (km / 1.6) / (l / 3.75);
	cout << result << " литров на 100 км"<<endl;


	return 0;
}