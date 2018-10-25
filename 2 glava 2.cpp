#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	int A;
	cout << " введите значение A в фарлонгах "<<endl;
	cin >> A;
	A = A * 220;
	cout << A;


	return 0;
}