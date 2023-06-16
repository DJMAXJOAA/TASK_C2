#include "Cirect2D.h"

using namespace std;

int main()
{
	Cirect2D c1(2, 2, 5.5);
	Cirect2D c2(2, 2, 5.5);
	Cirect2D c3(4, 5, 10.5);

	cout << "c1의 면적과 둘레 : " << c1.getArea() << ", " << c1.getPerimeter() << endl;
	cout << "c1.contains(3,3) : " << c1.contains(3, 3) << endl;
	cout << "c1.contains(c2) : " << c1.contains(c2) << endl;
	cout << "c1.overlaps(c3) : " << c1.overlaps(c3) << endl;

	return 0;
}