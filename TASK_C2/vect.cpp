#include "vect.h"

cVector3::cVector3()
{
    x = 1;
    y = 1;
    z = 1;
}

cVector3::cVector3(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

cVector3::~cVector3()
{
}

double cVector3::length()
{
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));;
}

cVector3 cVector3::normalize()
{
    return cVector3(x / length(), y / length(), z / length());
}

double cVector3::dot(cVector3& v)
{
    return (x * v.x + y * v.y + z * v.z);
}

cVector3 cVector3::cross(cVector3& v)
{
    return cVector3(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x);
}

double cVector3::angle(cVector3 v)
{
    double dott = dot(v);

    return (acos(dott / (length() * v.length())) * (180.0 / PI));
}

bool cVector3::operator==(const cVector3& v) const
{
    if (x == v.x && y == v.y && z == v.z)
        return true;
    return false;
}

bool cVector3::operator!=(const cVector3& v) const
{
    if (x == v.x && y == v.y && z == v.z)
        return false;
    return true;
}

cVector3 cVector3::operator+(cVector3& v)
{
    return cVector3(x + v.x, y + v.y, z + v.z);
}

cVector3 cVector3::operator-(cVector3& v)
{
    return cVector3(x - v.x, y - v.y, z - v.z);
}

cVector3 cVector3::operator*(double d)
{
    return cVector3(x * d, y * d, z * d);
}

cVector3 cVector3::operator/(double d)
{
    return cVector3(x / d, y / d, z / d);
}

cVector3 operator*(double n, const cVector3& b)
{
    return cVector3(b.x * n, b.y * n, b.z * n);
}

std::ostream& operator<<(std::ostream& os, const cVector3& v)
{
    os << "x°ª : " << v.x << ", y°ª : " << v.y << ", z°ª : " << v.z;
    return os;
}
