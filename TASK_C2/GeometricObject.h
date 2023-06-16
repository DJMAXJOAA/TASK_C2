#pragma once
#include "all.h"

class GeometricObject
{
private:
	double x, y;

public:
	GeometricObject();
	~GeometricObject();
	double getX();
	double getY();
	void setX();
	void setY();
};