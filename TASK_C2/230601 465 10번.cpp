#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

double calculate(double, double, double(*p)(double, double));
double add(double, double);
double sub(double, double);

int main()
{
	int n;
	int m;

	cout << "�� �� �Է� : ";
	cin >> n >> m;

	int sum = calculate(n, m, add);
	cout << "1���� + 2���� : " << sum << endl;
	sum = calculate(sum, m, sub);
	cout << "�հ� - 2���� : " << sum << endl;

	return 0;
}

double calculate(double x, double y, double(*p)(double, double))
{
	return p(x,y);
}

double add(double x, double y)
{
	return x + y;
}

double sub(double x, double y)
{
	return x - y;
}

