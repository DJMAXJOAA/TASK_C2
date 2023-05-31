#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	char word[100];
	int i = 0;

	cout << "영어 단어들을 입력하시오 (끝내려면 done 입력)" << endl;
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
	cout << "총 " << i << " 단어가 입력되었습니다.";

	return 0;
}