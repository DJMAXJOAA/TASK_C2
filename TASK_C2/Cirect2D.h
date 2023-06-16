#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include "myPoint.h"
#define PI 3.14159265359

class Cirect2D
{
private:
	double x, y;
	double radius;
public:
	Cirect2D();
	Cirect2D(double x, double y, double radius);
	~Cirect2D();
	
	double getX();
	double getY();
	double getRadius();
	
	double getArea();
	double getPerimeter();

	bool contains(double x, double y);
	bool contains(const Cirect2D& circle);
	bool overlaps(const Cirect2D& circle);

	friend bool contains(MyPoint& p, const Cirect2D& c);
};