#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <cmath> // sqrt 사용
#include <cstring>
#include <string>
#include <vector>

using namespace std;

int main()
{
	struct Pizza
	{
		string name;
		double diameter;
		double weight;
	}pizza;

	cout << "피자 회사의 이름 : ";
	getline(cin, pizza.name);
	cout << "피자 지름 : ";
	cin >> pizza.diameter;
	cout << "피자 무게 : ";
	cin >> pizza.weight;

	cout << "회사 이름 : " << pizza.name << endl;
	cout << "피자 지름 : " << pizza.diameter << "cm" << endl;
	cout << "피자 무게 : " << pizza.weight << "g ";

	cout << endl << endl;

	Pizza *piza = new Pizza;

	cout << "피자 지름 : ";
	cin >> piza->diameter;
	cout << "피자 회사의 이름 : ";
	cin.get();
	getline(cin, piza->name);
	cout << "피자 무게 : ";
	cin >> piza->weight;
	cout << "회사 이름 : " << piza->name << endl;
	cout << "피자 지름 : " << piza->diameter << "cm" << endl;
	cout << "피자 무게 : " << piza->weight << "g ";

	return 0;
}
