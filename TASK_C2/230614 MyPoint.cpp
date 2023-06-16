#include "myPoint.h"
#include "Cirect2D.h"
#include "Rectangle2D.h"

using namespace std;

int main()
{
	MyPoint p(2, 2);
	Rectangle2D r(-3, 0, 4, 4);
	Cirect2D c(0, 0, 4);

	cout << "점 x : " << p.getX() << " / 점 y : " << p.getY() << endl;
	cout << "직사각형 ";
	r.getXY();
	r.getWidthHeight();
	cout << "직사각형 안에 점이 포함? : ";
	if (contains(p, r))
		cout << "true";
	else cout << "false";

	cout << endl;

	cout << "원 x : " << c.getX() << " / 점 y : " << c.getY() << " / 반지름 : " << c.getRadius() << endl;
	cout << "원 안에 점이 포함? : ";
	if (contains(p, c))
		cout << "true";
	else cout << "false";

	return 0;
}