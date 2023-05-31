#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string word;

	cin >> word;

	for (int i = 0; i < word.size()/2; i++)
	{
		if (word[i] != word[word.size() - 1 - i])
		{
			cout << word << "는 회문이 아닙니다.";
			return 0;
		}
	}
	cout << word << "는 회문입니다";

	return 0;
}