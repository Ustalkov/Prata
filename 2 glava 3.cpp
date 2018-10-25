#include <iostream>

using namespace std;

void functionA();
void functionB();

int main()
{
	functionA();
	functionA();
	functionB();
	functionB();
	return 0;
}

void functionA()
{
	cout << " Three blind mice\n";
}

void functionB()
{
	cout << " See how they run\n";
}