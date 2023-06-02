#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

struct Line
{
	double x1;
	double y1;
	double x2;
	double y2;
};


void Intersection(Line* line1, Line* line2);

int main()
{
	Line line1;
	Line line2;

	cout << "��1�� x1, y1��ǥ �Է� :";
	cin >> line1.x1 >> line1.y1;
	cout << "��1�� x2, y2��ǥ �Է� :";
	cin >> line1.x2 >> line1.y2;
	cout << "��2�� x1, y1��ǥ �Է� :";
	cin >> line2.x1 >> line2.y1;
	cout << "��2�� x2, y2��ǥ �Է� :";
	cin >> line2.x2 >> line2.y2;

	cout << endl;

	Intersection(&line1, &line2);

	return 0;
}

void Intersection(Line* line1, Line* line2)
{
	double A = line1->y2 - line1->y1;
	double B = line1->x1 - line1->x2;
	double C = line2->y2 - line2->y1;
	double D = line2->x1 - line2->x2;

	double I = (A * line1->x1) + (B * line1->y1);
	double J = (C * line2->x1) + (D * line2->y1);

	double matrix = (A * D) - (B * C);

	if (matrix == 0)
	{
		cout << "�����ϰų� ��ġ�ؼ� �������� �����ϴ�" << endl;
	}
	else
	{
		double X = ((I * D) - (B * J)) / matrix;
		double Y = ((A * J) - (I * C)) / matrix;

		cout << "�� ������ �������� ";
		cout << X << ", " << Y;
		cout << " �Դϴ�." << endl;
	}
}