#include <iostream>
#include <string>
using namespace std;

struct candyBar
{
	string name;
	double weight;
	int kilocalories;
};

int main()
{
	candyBar snack
	{
	   "Mocha Munch",
	   2.3,
	   350
	};

	cout << "The name of these chocolates: " << snack.name << endl;
	cout << endl;

	cout << "The weight of these chocolates: " << snack.weight << endl;
	cout << endl;

	cout << "The kilocalories of these chocolates: " << snack.kilocalories << endl;
	cout << endl;

	return 0;
}