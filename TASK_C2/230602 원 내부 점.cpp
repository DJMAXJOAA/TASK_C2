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

	cout << "두점의 x, y값 : ";
	cin >> point.x;
	cin >> point.y;

	cout << "원의 점 x, y, 반지름 : ";
	cin >> circle.x;
	cin >> circle.y;
	cin >> circle.r;
	
	if (decision(&point, &circle))
	{
		printf("점 %.lf, %.lf는 중점이 %.lf, %.lf이고 반지름이 %.lf인 원 안에 있습니다.", point.x, point.y, circle.x, circle.y, circle.r);
		return 0;
	}
	
	printf("점 %.lf, %.lf는 중점이 %.lf, %.lf이고 반지름이 %.lf인 원 안에 없습니다.", point.x, point.y, circle.x, circle.y, circle.r);
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