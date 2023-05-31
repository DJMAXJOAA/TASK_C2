#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	double v = 0;
	double a = 0;

	cout << "Speed and Accelation : ";
	cin >> v >> a;
	cout << "Minimum runway length : " << (v*v)/(2*a);

	return 0;
}