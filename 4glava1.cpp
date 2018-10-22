#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char Fname[ArSize];
	char Lname[ArSize];
	int age;
	char bit;
	//enum gradeW {A,B,C};
	cout << "what is your first name " << endl;
	cin.getline(Fname, ArSize);
	cout << "what is your last name " << endl;
	cin.getline(Lname, ArSize);
	cout << "what letter grade do you deserve(A,B,C) " << endl;
	cin >> bit;
	cout << "what is your age " << endl;
	cin >> age;
	cin.get();
	cout << "Name: " << Lname << " " << Fname << endl;
	cout << "Age: " << age << endl;
	switch (bit)
	{
	case 'A':
		cout << "Grade B " << endl;
		break;
	case 'B':
		cout << "Grade C" << endl;
		break;
	case 'C':
		cout << "Grade D" << endl;
		break;
	default: cout << "wrong" << endl;
	}
	cin.get();
	return 0;
}
