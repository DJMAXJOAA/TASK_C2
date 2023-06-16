#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <functional>

using namespace std;

void StringPrint(string str, vector<int> wordcount);
bool Overlap(vector<char> save, char search);
bool isitRight(char search, string word, vector<int> &wordcount);

int main()
{
	string word = "apple";
	char search;
	int count1 = 0; // 시도
	int count2 = 0; // 실패

	vector<int> wordcount(word.size(), 0);
	vector<char> save;

	while (1)
	{
		int i = 0;

		StringPrint(word, wordcount);
		cout << "한글자 입력 해주세요 : ";
		cin >> search;
		if (Overlap(save, search))
		{
			cout << "이미 시도했던 단어" << endl;
			continue;
		}
		count1++;
		if (isitRight(search, word, wordcount))
		{

			cout << "포함 O" << endl;
		}
		else
		{
			cout << "포함 X" << endl;
			count2++;
		}
		save.push_back(search);
		for (i = 0; i < wordcount.size(); i++)
		{
			if (wordcount[i] == 0)
				break;
		}
		if (i == wordcount.size())
			break;
	}
	cout << "시도 횟수 : " << count1 << endl;
	cout << "실패 횟수 : " << count2 << endl;
	cout << word << endl;

	return 0;
}

void StringPrint(string str, vector<int> wordcount)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (wordcount[i] == 0)
			cout << "*";
		else
			cout << str[i];
	}
	cout << endl;
}

bool Overlap(vector<char> save, char search)
{
	for (int i = 0; i < save.size(); i++)
	{
		if (save[i] == search)
			return 1;
	}
	return 0;
}

bool isitRight(char search, string word, vector<int> &wordcount)
{
	int i = 0;
	int yesno = 0;
	word[word.size()] = search;
	for ( i = 0; i <= word.size(); i++)
	{
		if (word[i] == search)
		{
			if (i != word.size())
			{
				yesno++;
				wordcount[i] = 1;
			}
		}
	}
	if (yesno >= 1)
		return 1;
	else
		return 0;
}
