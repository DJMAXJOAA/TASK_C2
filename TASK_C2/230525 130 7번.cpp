#include <iostream>
using namespace std;

int main()
{
	double liter;	// ���� (ų�� �� ����)
	double b;	// �̱� (���� �� ����)

	cout << "liters/100km : ";
	cin >> liter;
	cout << endl;

	double gallon = liter / 3.875;
	double mpg = 62.14 / gallon;

	cout << liter << "liters/100km, ";
	cout << mpg << "mpg" << endl;
	
	
	return 0;
}