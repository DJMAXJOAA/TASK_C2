#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	while (1)
	{
		int count = 0;

		string temp;
		cin >> temp;

		for (int i = 0; i < temp.length(); i++)
		{
			if (isdigit(temp[i])) // ���ڸ� ī��Ʈ+1
			{
				count++;
			}
			else if (!isalnum(temp[i])) // Ư������ ����
			{
				count = 0;
				break;
			}
		}

		if (count >= 2 && temp.length() >= 8) //  ����2���̻�, 8���̻�
		{
			cout << "Valid password" << endl;
			return 0;
		}
		else
		{
			cout << "Invalid password" << endl;
		}
	}

}