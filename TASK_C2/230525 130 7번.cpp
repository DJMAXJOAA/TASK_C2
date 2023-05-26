#include <iostream>
using namespace std;

int main()
{
	double liter;	// 유럽 (킬로 퍼 리터)
	double b;	// 미국 (마일 퍼 갤런)

	cout << "liters/100km : ";
	cin >> liter;
	cout << endl;

	double gallon = liter / 3.875;
	double mpg = 62.14 / gallon;

	cout << liter << "liters/100km, ";
	cout << mpg << "mpg" << endl;
	
	
	return 0;
}