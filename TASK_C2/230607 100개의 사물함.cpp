#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<bool> locker(101, 1);
	for (int i = 2; i <= 100; i++)
	{
		for (int j = 1; j * i <= 100; j++)
		{
			if (locker[j * i] == 1)
				locker[j * i] = 0;
			else
				locker[j * i] = 1;
		}
	}

	for (int i = 1; i <= 100; i++)
	{
		if (locker[i] == 1)
		{
			cout << i << "번째 사물함" << endl;
		}
	}
	return 0;
}