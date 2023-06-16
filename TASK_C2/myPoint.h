#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>

class MyPoint
{
private:
	double x, y;
public:
	MyPoint();
	MyPoint(double x, double y);
	~MyPoint();

	double getX();
	double getY();
	double distance(MyPoint& p);
};