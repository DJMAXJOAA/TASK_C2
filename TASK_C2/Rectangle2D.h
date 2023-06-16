#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include "myPoint.h"

class Rectangle2D
{
private:
	double x, y; // ���簢���� �߽�, �� ���� x y�࿡ ����
	double width, height;
public:
	Rectangle2D();
	Rectangle2D(double x, double y, double width, double height);
	~Rectangle2D();
	void getXY();
	void setXY(double x, double y);
	void getWidthHeight();
	void setWidthHeight(double width, double height);

	double getArea();		// ����
	double getPerimeter();	// �ѷ�
	
	bool contains(double x, double y);	// �� x, y�� ������ ���簢�� ���ο� ����?
	bool contains(const Rectangle2D& r);	// ������ ���簢���� ������ ���簢�� ���ο� ����?
	bool overlaps(const Rectangle2D& r);	// ������ ���簢���� ������ ���簢�� ���ο� ����?

	friend bool contains(MyPoint& p, const Rectangle2D& r);
};

