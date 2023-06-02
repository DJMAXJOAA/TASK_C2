#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

struct Point
{
	double x;
	double y;
};

struct Circle
{
	double x;
	double y;
	double r;
};

bool decision(const Point* point, const Circle* circle);

int main()
{
	Point point;
	Circle circle;

	cout << "������ x, y�� : ";
	cin >> point.x;
	cin >> point.y;

	cout << "���� �� x, y, ������ : ";
	cin >> circle.x;
	cin >> circle.y;
	cin >> circle.r;
	
	if (decision(&point, &circle))
	{
		printf("�� %.lf, %.lf�� ������ %.lf, %.lf�̰� �������� %.lf�� �� �ȿ� �ֽ��ϴ�.", point.x, point.y, circle.x, circle.y, circle.r);
		return 0;
	}
	
	printf("�� %.lf, %.lf�� ������ %.lf, %.lf�̰� �������� %.lf�� �� �ȿ� �����ϴ�.", point.x, point.y, circle.x, circle.y, circle.r);
	return 0;

}

bool decision(const Point* point, const Circle* circle)
{
	double calculate = sqrt(pow(point->x - circle->x, 2) + pow(point->y - circle->y, 2));
	if (calculate <= circle->r)
	{
		return 1;
	}
	return 0;
}