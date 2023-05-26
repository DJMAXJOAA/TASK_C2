#include <iostream>
using namespace std;

int main()
{
	long long population;
	double america_population;
	cout << "세계 인구수를 입력하시오 : ";
	cin >> population;
	cout << "미국의 인구수를 입력하시오 : ";
	cin >> america_population;

	cout << "세계 인구수에서 미국이 차지하는 비중은 " << america_population / population * 100 << "%이다." << endl;
	return 0;
}