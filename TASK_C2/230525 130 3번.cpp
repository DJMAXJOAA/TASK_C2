#include <iostream>
using namespace std;

int main()
{
	float a;	// 도각
	float b;	// 분각
	float c;	// 초각

	cout << "위도를 도, 분, 초 단위로 입력하시오: " << endl;
	cout << "먼저, 도각을 입력하시오: ";
	cin >> a;
	cout << "다음에, 분각을 입력하시오: ";
	cin >> b;
	cout << "끝으로, 초각을 입력하시오: ";
	cin >> c;


	const float angle = a + (b / 60.0) + (1 / 60.0) * (c / 60.0);
	cout << a << "도, "<< b << "분, "<< c << "초 = " << angle << "도" << endl;


	return 0;
}