#include "myPoint.h"
#include "Cirect2D.h"
#include "Rectangle2D.h"

using namespace std;

int main()
{
	MyPoint p(2, 2);
	Rectangle2D r(-3, 0, 4, 4);
	Cirect2D c(0, 0, 4);

	cout << "�� x : " << p.getX() << " / �� y : " << p.getY() << endl;
	cout << "���簢�� ";
	r.getXY();
	r.getWidthHeight();
	cout << "���簢�� �ȿ� ���� ����? : ";
	if (contains(p, r))
		cout << "true";
	else cout << "false";

	cout << endl;

	cout << "�� x : " << c.getX() << " / �� y : " << c.getY() << " / ������ : " << c.getRadius() << endl;
	cout << "�� �ȿ� ���� ����? : ";
	if (contains(p, c))
		cout << "true";
	else cout << "false";

	return 0;
}