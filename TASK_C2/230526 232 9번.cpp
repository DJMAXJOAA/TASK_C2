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
	CandyBar *snack = new CandyBar[3];
	if (snack)
	{
		snack[0] =
		{
			"Mocha Munch",
			2.3,
			350
		};
		snack[1] =
		{
			"Chocolate",
			2.1,
			250
		};
		snack[2] =
		{
			"Candy",
			1.3,
			100
		};
	}
	cout << snack[0].name << ", " << snack[0].weight
		<< ", " << snack[0].calorie << endl;
	cout << snack[1].name << ", " << snack[1].weight
		<< ", " << snack[1].calorie << endl;
	cout << snack[2].name << ", " << snack[2].weight
		<< ", " << snack[2].calorie << endl;
	
	if (snack)
	{
		delete[] snack;
		snack = nullptr;
	}
	return 0;
}