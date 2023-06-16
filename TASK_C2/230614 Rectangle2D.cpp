#include "Rectangle2D.h"

using namespace std;

int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	cout << "r1 면적 : " << r1.getArea() << endl;
	cout << "r1 둘레 : " << r1.getPerimeter() << endl;

	cout << "r1.contains(r2) : ";
	if (r1.contains(r2))
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;

	cout << "r1.overlaps(r3) : ";
	if (r1.overlaps(r3))
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;

	return 0;
}