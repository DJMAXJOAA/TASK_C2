#include <iostream>
using namespace std;

struct CandyBar
{
	char name[20];
	double weight;
	int calorie;
};

int main()
{
	CandyBar snack =
	{
		"Mocha Munch",
		2.3,
		350
	};

	cout << snack.name << ", " << snack.weight
		<< ", " << snack.calorie;
	return 0;
}