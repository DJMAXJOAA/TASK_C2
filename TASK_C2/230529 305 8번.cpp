#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	char word[100];
	int i = 0;

	cout << "���� �ܾ���� �Է��Ͻÿ� (�������� done �Է�)" << endl;
	while (1)
	{
		cin >> word;
		if (!strcmp(word, "done"))
		{
			break;
		}
		i++;
	}
	cout << endl;
	cout << "�� " << i << " �ܾ �ԷµǾ����ϴ�.";

	return 0;
}