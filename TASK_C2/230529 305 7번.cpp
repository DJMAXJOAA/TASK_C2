#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	struct car
	{
		string company;
		int year;
	};

	int count;
	cin >> count;

	car* list = new car[count];	// �Ҵ�
	for (int i = 0; i < count; i++)
	{
		cout << "�ڵ��� #" << i+1 << ":" << endl;
		cout << "���۾�ü : ";
		cin >> list[i].company;
		cin.get();
		cout << "���۳⵵ : ";
		cin >> list[i].year;
	}
	cout << "���� ���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�." << endl;
	for (int i = 0; i < count; i++)
	{
		cout << list[i].year << "���� " << list[i].company << endl;
	}

	if (list)	// ����
	{
		delete[] list;
		list = nullptr;
	}
	
	return 0;
}