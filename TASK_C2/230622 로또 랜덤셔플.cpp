#include "all.h"

using namespace std;

vector<int> Lotto(int n, int num);

int main()
{
	srand(time(NULL));
	vector<int> winners;
	winners = Lotto(45, 6);
	for (const auto& x : winners)
		cout << x << " ";

	return 0;
}

vector<int> Lotto(int n, int num)
{
	vector<int> temp;
	vector<int> lotto_shuffle;

	for (int i = 1; i <= n; i++)
		lotto_shuffle.push_back(i);
	random_shuffle(lotto_shuffle.begin(), lotto_shuffle.end());

	int i = 0;
	vector<int>::iterator itr = lotto_shuffle.begin();
	while (i < num)
	{
		temp.push_back(*itr);
		itr++;
		i++;
	}
	return temp;
}
