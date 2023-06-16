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
	int n = 3;
	
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < n-i; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << pow(2, j) << " ";
		}
		for (int j = i-1; j >= 0; j--)
		{
			cout << pow(2, j) << " ";
		}
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}

	return 0;
}