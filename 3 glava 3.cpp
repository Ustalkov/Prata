#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "rus");
	float l, km, gl, mil;
	float result;
	cout << " ������� ������� �������� �� :";
	cin >> km;
	cout << " ������� ������� ������ ������� ������������� :";
	cin >> l;
	result = (km / 1.6) / (l / 3.75);
	cout << result << " ������ �� 100 ��"<<endl;


	return 0;
}