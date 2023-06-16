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
	int count1 = 0; // �õ�
	int count2 = 0; // ����

	vector<int> wordcount(word.size(), 0);
	vector<char> save;

	while (1)
	{
		int i = 0;

		StringPrint(word, wordcount);
		cout << "�ѱ��� �Է� ���ּ��� : ";
		cin >> search;
		if (Overlap(save, search))
		{
			cout << "�̹� �õ��ߴ� �ܾ�" << endl;
			continue;
		}
		count1++;
		if (isitRight(search, word, wordcount))
		{

			cout << "���� O" << endl;
		}
		else
		{
			cout << "���� X" << endl;
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
	cout << "�õ� Ƚ�� : " << count1 << endl;
	cout << "���� Ƚ�� : " << count2 << endl;
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
