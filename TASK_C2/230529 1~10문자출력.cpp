#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int n = 0;
	cout << "���� ���ڸ� �Է� : ";
	cin >> n;


	if (n>0 && n<10)
	{
		for (int i = 1; i <= n; i++) // n�� �ݺ�
		{
			for (int j = n; j >= 1; j--)
			{
				if (j <= i)
				{
					cout << j;
				}
				else
				{
					cout << " ";
				}
			}
			for (int j = 2; j <= n; j++)
			{
				if (j <= i)
				{
					cout << j;
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}

	return 0;
}