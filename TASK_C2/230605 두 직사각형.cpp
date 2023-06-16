#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

struct Range
{
	double minX;
	double maxX;
	double minY;
	double maxY;
};

struct Rect
{
	Range range;
	double x;
	double y;
	double width;
	double height;
};



int main()
{
	Rect rect1;
	Rect rect2;

	cout << "Rect1 : ";
	cin >> rect1.x >> rect1.y >> rect1.width >> rect1.height;
	cout << "Rect2 : ";
	cin >> rect2.x >> rect2.y >> rect2.width >> rect2.height;

	rect1.range.minX = rect1.x - rect1.width / 2;
	rect1.range.maxX = rect1.x + rect1.width / 2;
	rect1.range.minY = rect1.y - rect1.height / 2;
	rect1.range.maxY = rect1.y + rect1.height / 2;
	rect2.range.minX = rect2.x - rect2.width / 2;
	rect2.range.maxX = rect2.x + rect2.width / 2;
	rect2.range.minY = rect2.y - rect2.height / 2;
	rect2.range.maxY = rect2.y + rect2.height / 2;

	//cout << endl;
	//cout << rect1.range.minX << endl;
	//cout << rect1.range.maxX << endl;
	//cout << rect1.range.minY << endl;
	//cout << rect1.range.maxY << endl;
	//cout << rect2.range.minX << endl;
	//cout << rect2.range.maxX << endl;
	//cout << rect2.range.minY << endl;
	//cout << rect2.range.maxY << endl;
	//cout << endl;

	if ((rect1.range.minX <= rect2.range.minX && rect2.range.maxX <= rect1.range.maxX) && (rect1.range.minY <= rect2.range.minY && rect2.range.maxY <= rect1.range.maxY)
		|| (rect2.range.minX <= rect1.range.minX && rect1.range.maxX <= rect2.range.maxX) && (rect2.range.minY <= rect1.range.minY && rect1.range.maxY <= rect2.range.maxY))
	{
		cout << "내부에 있음";
	}
		
	else if ((rect1.range.maxX < rect2.range.minX) || (rect2.range.maxX < rect1.range.minX) || (rect1.range.maxY < rect2.range.minY) || (rect2.range.maxY < rect1.range.minY))
	{
		cout << "겹치지 않음";
	}
		
	else
		cout << "사각형이 겹침";

	return 0;
}