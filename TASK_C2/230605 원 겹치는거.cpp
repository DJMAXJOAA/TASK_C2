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

	cout << "ù��° ���� x, y ��ǥ�� ������";
	cin >> circle1.x >> circle1.y >> circle1.r;
	cout << "�ι�° ���� x, y ��ǥ�� ������";
	cin >> circle2.x >> circle2.y >> circle2.r;

	const double distance_circle = sqrt(pow((circle1.x - circle2.x), 2) + pow((circle1.y - circle2.y), 2));

	if (circle1.r >= circle2.r)
	{
		/* ���� */
		if (distance_circle  < circle1.r - circle2.r)
		{
			cout << "�ι�° ���� ù��° ���� ���ο� ����";
		}
		/* �ܺ� */
		else if (distance_circle >= circle1.r + circle2.r)
		{
			cout << "�ι�° ���� ù��° ���� �ܺο� ����";
		}
		/* ��ħ */
		else
		{
			cout << "�� ���� ��ħ";
		}
	}
	else if (circle2.r > circle1.r)
	{
		/* ���� */
		if (distance_circle < circle2.r - circle1.r)
		{
			cout << "ù��° ���� �ι�° ���� ���ο� ����";
		}
		/* �ܺ� */
		else if (distance_circle >= circle2.r + circle1.r)
		{
			cout << "ù��° ���� �ι�° ���� �ܺο� ����";
		}
		/* ��ħ */
		else
		{
			cout << "�� ���� ��ħ";
		}
	}

	return 0;
}