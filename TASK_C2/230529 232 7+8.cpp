#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <cmath> // sqrt ���
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

	cout << "���� ȸ���� �̸� : ";
	getline(cin, pizza.name);
	cout << "���� ���� : ";
	cin >> pizza.diameter;
	cout << "���� ���� : ";
	cin >> pizza.weight;

	cout << "ȸ�� �̸� : " << pizza.name << endl;
	cout << "���� ���� : " << pizza.diameter << "cm" << endl;
	cout << "���� ���� : " << pizza.weight << "g ";

	cout << endl << endl;

	Pizza *piza = new Pizza;

	cout << "���� ���� : ";
	cin >> piza->diameter;
	cout << "���� ȸ���� �̸� : ";
	cin.get();
	getline(cin, piza->name);
	cout << "���� ���� : ";
	cin >> piza->weight;
	cout << "ȸ�� �̸� : " << piza->name << endl;
	cout << "���� ���� : " << piza->diameter << "cm" << endl;
	cout << "���� ���� : " << piza->weight << "g ";

	return 0;
}
