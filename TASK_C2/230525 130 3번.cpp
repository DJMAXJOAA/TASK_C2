#include <iostream>
using namespace std;

int main()
{
	float a;	// ����
	float b;	// �а�
	float c;	// �ʰ�

	cout << "������ ��, ��, �� ������ �Է��Ͻÿ�: " << endl;
	cout << "����, ������ �Է��Ͻÿ�: ";
	cin >> a;
	cout << "������, �а��� �Է��Ͻÿ�: ";
	cin >> b;
	cout << "������, �ʰ��� �Է��Ͻÿ�: ";
	cin >> c;


	const float angle = a + (b / 60.0) + (1 / 60.0) * (c / 60.0);
	cout << a << "��, "<< b << "��, "<< c << "�� = " << angle << "��" << endl;


	return 0;
}