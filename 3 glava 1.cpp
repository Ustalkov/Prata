#include <iostream>  

using namespace std;

int main()
{
	cout << "Enter your growth in foot: ___\b\b\b";
	int growth;
	const char k = 100;
	cin >> growth;
	cout << "Your growth:" << endl << growth / k << " inches" << endl << growth % k << " foot" << endl;
	cout << k << endl;
	return 0;
}