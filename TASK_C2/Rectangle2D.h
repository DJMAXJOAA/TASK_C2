#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include "myPoint.h"

class Rectangle2D
{
private:
	double x, y; // 직사각형의 중심, 각 변은 x y축에 평행
	double width, height;
public:
	Rectangle2D();
	Rectangle2D(double x, double y, double width, double height);
	~Rectangle2D();
	void getXY();
	void setXY(double x, double y);
	void getWidthHeight();
	void setWidthHeight(double width, double height);

	double getArea();		// 면적
	double getPerimeter();	// 둘레
	
	bool contains(double x, double y);	// 점 x, y가 생성된 직사각형 내부에 존재?
	bool contains(const Rectangle2D& r);	// 지정된 직사각형이 생성된 직사각형 내부에 존재?
	bool overlaps(const Rectangle2D& r);	// 지정된 직사각형이 생성된 직사각형 내부에 존재?

	friend bool contains(MyPoint& p, const Rectangle2D& r);
};

