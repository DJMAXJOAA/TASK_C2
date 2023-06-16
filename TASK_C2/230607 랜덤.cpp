#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <functional>

using namespace std;

int main()
{
	int front = 0;
	int back = 0;

	random_device seeder;
	const auto seed{ seeder.entropy() ? seeder() : time(nullptr) };
	/* 랜덤 엔진 */
	mt19937 engine{ static_cast<mt19937::result_type>(seed) };
	/* 랜덤 범위 지정 */
	uniform_int_distribution<int> distribution{ 0,1 };
	/* 랜덤 생성 */
	auto generator = bind(distribution, engine);

	vector<int> values(1000001);
	generate(values.begin(), values.end(), generator);


	for (double i = 1; i <= 1000000; i++)
	{
		if (values[i] == 0)
			front++;
		else
			back++;

		if (i == 100 || i == 1000 || i == 10000 || i == 100000 || i == 10000000)
			cout << i << "번째 일때.. " << "앞면 : " << front / i * 100 << "%, " << "뒷면 : " << back / i * 100 << "% " <<endl;
	}

	return 0;
}