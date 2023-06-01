#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double x1 = 1.5, x2 = 4.6, x3 = 9.5;
	double y1 = -3.4, y2 = 5, y3 = -3.4;

	double extent = 0.5 * abs((x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3));

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	cout << "삼각형의 면적 : " << extent;

	return 0;
}