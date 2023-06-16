#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

struct Circle
{
	double x;
	double y;
	double r;
};

int main()
{
	Circle circle1;
	Circle circle2;

	cout << "첫번째 원의 x, y 좌표와 반지름";
	cin >> circle1.x >> circle1.y >> circle1.r;
	cout << "두번째 원의 x, y 좌표와 반지름";
	cin >> circle2.x >> circle2.y >> circle2.r;

	const double distance_circle = sqrt(pow((circle1.x - circle2.x), 2) + pow((circle1.y - circle2.y), 2));

	if (circle1.r >= circle2.r)
	{
		/* 내부 */
		if (distance_circle  < circle1.r - circle2.r)
		{
			cout << "두번째 원은 첫번째 원의 내부에 있음";
		}
		/* 외부 */
		else if (distance_circle >= circle1.r + circle2.r)
		{
			cout << "두번째 원은 첫번째 원의 외부에 있음";
		}
		/* 겹침 */
		else
		{
			cout << "두 원이 겹침";
		}
	}
	else if (circle2.r > circle1.r)
	{
		/* 내부 */
		if (distance_circle < circle2.r - circle1.r)
		{
			cout << "첫번째 원은 두번째 원의 내부에 있음";
		}
		/* 외부 */
		else if (distance_circle >= circle2.r + circle1.r)
		{
			cout << "첫번째 원은 두번째 원의 외부에 있음";
		}
		/* 겹침 */
		else
		{
			cout << "두 원이 겹침";
		}
	}

	return 0;
}