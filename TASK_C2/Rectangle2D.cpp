#include "Rectangle2D.h"

Rectangle2D::Rectangle2D()
{
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

Rectangle2D::Rectangle2D(double x, double y, double width, double height)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

Rectangle2D::~Rectangle2D()
{
}

void Rectangle2D::getXY()
{
    std::cout << "x : " << x << " / y : " << y << std::endl;
}

void Rectangle2D::setXY(double x, double y)
{
    this->x = x;
    this->y = y;
}

void Rectangle2D::getWidthHeight()
{
    std::cout << "width : " << width << " / height : " << height << std::endl;
}

void Rectangle2D::setWidthHeight(double width, double height)
{
    this->width = width;
    this->height = height;
}

double Rectangle2D::getArea()
{
    return width*height;
}

double Rectangle2D::getPerimeter()
{
    return (width + height) * 2;
}

bool Rectangle2D::contains(double x, double y)
{
    if (x <= this->x + width / 2 && x >= this->x - width / 2
        && y <= this->y + height / 2 && y >= this->y - height / 2)
        return true;
    return false;
}

bool Rectangle2D::contains(const Rectangle2D& r)
{
    double maxX = this->x + this->width / 2;
    double minX = this->x - this->width / 2;
    double maxY = this->y + this->height / 2;
    double minY = this->y - this->height / 2;
    double rmaxX = r.x + r.width / 2;
    double rminX = r.x - r.width / 2;
    double rmaxY = r.y + r.height / 2;
    double rminY = r.y - r.height / 2;

    if (rmaxX <= maxX && rminX >= minX
        && rmaxY < maxY && rminY >= minY)
        return true;
    return false;
}

bool Rectangle2D::overlaps(const Rectangle2D& r)
{
    double maxX = this->x + this->width / 2;
    double minX = this->x - this->width / 2;
    double maxY = this->y + this->height / 2;
    double minY = this->y - this->height / 2;
    double rmaxX = r.x + r.width / 2;
    double rminX = r.x - r.width / 2;
    double rmaxY = r.y + r.height / 2;
    double rminY = r.y - r.height / 2;

    if (rmaxX <= maxX && rminX >= minX
        && rmaxY < maxY && rminY >= minY)
        return false;
    else if (rminX > maxX || rmaxX < rminX
        || rminY > maxY || rmaxY < minY)
        return false;
    else true;
}

bool contains(MyPoint& p, const Rectangle2D& r)
{
    if (p.getX() <= r.x + r.width / 2 && p.getX() >= r.x - r.width / 2
        && p.getY() <= r.y + r.height / 2 && p.getY() >= r.y - r.height / 2)
        return true;
    return false;
}
