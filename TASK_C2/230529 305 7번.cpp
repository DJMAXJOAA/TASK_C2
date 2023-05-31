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

	car* list = new car[count];	// 할당
	for (int i = 0; i < count; i++)
	{
		cout << "자동차 #" << i+1 << ":" << endl;
		cout << "제작업체 : ";
		cin >> list[i].company;
		cin.get();
		cout << "제작년도 : ";
		cin >> list[i].year;
	}
	cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다." << endl;
	for (int i = 0; i < count; i++)
	{
		cout << list[i].year << "년형 " << list[i].company << endl;
	}

	if (list)	// 해제
	{
		delete[] list;
		list = nullptr;
	}
	
	return 0;
}