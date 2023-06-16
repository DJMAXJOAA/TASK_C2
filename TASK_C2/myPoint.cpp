#include "myPoint.h"

MyPoint::MyPoint()
{
    x = 0;
    y = 0;
}

MyPoint::MyPoint(double x, double y)
{
    this->x = x;
    this->y = y;
}

MyPoint::~MyPoint()
{
}

double MyPoint::getX()
{
    return x;
}

double MyPoint::getY()
{
    return y;
}

double MyPoint::distance(MyPoint& p)
{
    return sqrt(pow(p.x-x,2) + pow(p.y-y,2));
}
