#include "Cirect2D.h"

Cirect2D::Cirect2D()
{
	x = 0;
	y = 0;
	radius = 1;
}

Cirect2D::Cirect2D(double x, double y, double radius)
{
	this->x = x;
	this->y = y;
	this->radius = radius;
}

Cirect2D::~Cirect2D()
{
}

double Cirect2D::getX()
{
	return x;
}

double Cirect2D::getY()
{
	return y;
}

double Cirect2D::getRadius()
{
	return radius;
}

double Cirect2D::getArea()
{
	return (radius * radius) * PI;
}

double Cirect2D::getPerimeter()
{
	return (radius * 2) * PI;
}

bool Cirect2D::contains(double x, double y)
{
	double distance = sqrt(pow(this->x - x, 2) + pow(this->y - y, 2));
	if (distance <= this->radius) return true;
	return false;
}

bool Cirect2D::contains(const Cirect2D& circle)
{
	double distance = sqrt(pow(this->x - circle.x, 2) + pow(this->y - circle.y, 2));
	if (distance <= abs(this->radius - circle.radius)) return true;
	return false;
}

bool Cirect2D::overlaps(const Cirect2D& circle)
{
	double distance = sqrt(pow(this->x - circle.x, 2) + pow(this->y - circle.y, 2));
	if (distance < abs(this->radius + circle.radius)) return true;
	return false;
}

bool contains(MyPoint& p, const Cirect2D& c)
{
	double distance = sqrt(pow(c.x - p.getX(), 2) + pow(c.y - p.getY(), 2));
	if (distance <= c.radius) return true;
	return false;
}
