#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double x1, y1;
	double x2, y2;

	cout << "x1, y1ÀÇ ÁÂÇ¥ : ";
	cin >> x1 >> y1;

	cout << "x2, y2ÀÇ ÁÂÇ¥ : ";
	cin >> x2 >> y2;

	double distance;

	distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	cout << "distance : " << distance;

	return 0;
}