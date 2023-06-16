#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <functional>

using namespace std;

struct Point
{
	double x;
	double y;
};

struct Vector
{
	double x;
	double y;
	double z;
};

int main()
{
	Point p0, p1, p2;
	Vector v1, v2, v3, upv;
	cout << "p0 좌표 : ";
	cin >> p0.x >> p0.y;
	cout << "p1 좌표 : ";
	cin >> p1.x >> p1.y;
	cout << "p2 좌표 : ";
	cin >> p2.x >> p2.y;

	v1.x = p1.x - p0.x;
	v1.y = p1.y - p0.y;
	v1.z = 0;

	v2.x = p2.x - p0.x;
	v2.y = p2.y - p0.y;
	v2.z = 0;

	v3.x = 0;
	v3.y = 0;
	v3.z = v1.x * v2.y - v2.x * v1.y;

	upv.x = 0;
	upv.y = 0;
	upv.z = 1;

	if (upv.z * v3.z > 0)
		cout << "p2는 선의 왼쪽에 있다." << endl;
	else if (upv.z * v3.z < 0)
		cout << "p2는 선의 오른쪽에 있다." << endl;
	else
		cout << "p2는 선상에 있다." << endl;

	return 0;
}
