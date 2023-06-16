#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>

class cVector3
{
public:
	cVector3();
	cVector3(double x, double y, double z);
	~cVector3();

	double length(); // 벡터 길이
	cVector3 normalize(); // 단위 벡터

	double dot(cVector3& v);
	cVector3 cross(cVector3& v);
	double angle(cVector3 v);

	bool operator==(const cVector3& v) const;
	bool operator!=(const cVector3& v) const;
	cVector3 operator+(cVector3& v);
	cVector3 operator-(cVector3& v);
	cVector3 operator*(double d);
	cVector3 operator/(double d);

	friend cVector3 operator*(double n, const cVector3& b);
	friend std::ostream& operator<<(std::ostream& os, const cVector3& v);

private:
	const double PI = 3.141592;
	double x, y, z;	// x, y, z 받아서
};