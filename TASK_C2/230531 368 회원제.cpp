#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <fstream> // 파일 입출력

using namespace std;

const int SIZE = 100;

enum
{
	FULLNAME, TITLE, BOPNAME
};

struct BOP
{
	char fullname[SIZE];	// 이름
	char title[SIZE];		// 직함
	char bopname[SIZE];		// 아이디
	int preference;
};

BOP bop_list = { 0 };

void AddMember(BOP bop);
void ReadFullname();
void ReadTitle();
void ReadBopname();
void ReadSelect();
char READREAD(char *strr);

int main()
{
	char choose;

	while (1)
	{
		cout << "=======================\n";
		cout << "a : 회원 등록\n";
		cout << "b : 실명 열람\n";
		cout << "c : 직함 열람\n";
		cout << "d : BOP ID 열람\n";
		cout << "e : 회원이 지정한 것으로 열람\n";
		cout << "q : 종료\n";
		cout << "=======================\n";

		cin >> choose;

		switch (choose)
		{
		case 'a':
			AddMember(bop_list);
			break;
		case 'b':
			ReadFullname();
			ReadFile("asdf");
			break;
		case 'c':
			ReadTitle();
			break;
		case 'd':
			ReadBopname();
			break;
		case 'e':
			ReadSelect();
			break;
		case 'q':
			return 0;
		}
	}
}

void AddMember(BOP bop)
{
	int choose;
	ofstream fullname;
	ofstream title;
	ofstream bopname;
	ofstream select;
	fullname.open("bop_fullname.txt", ios::app);
	title.open("bop_title.txt", ios::app);
	bopname.open("bop_bopname.txt", ios::app);
	select.open("bop_select.txt", ios::app);

	cin.ignore();
	cout << "이름을 입력하세요 : ";
	cin.getline(bop.fullname, SIZE);
	cout << "직함을 입력하세요 : ";
	cin.getline(bop.title, SIZE);
	cout << "BOP ID를 입력하세요 : ";
	cin >> bop.bopname;

	cout << "어떤 방식으로 열람 등록 원하십니까? 번호 입력\n";
	cout << "0. 이름\n";
	cout << "1. 직함\n";
	cout << "2. BOP ID\n";
	cin >> choose;

	fullname << bop.fullname << endl;
	title << bop.title << endl;
	bopname << bop.bopname << endl;
	switch (choose)
	{
	case FULLNAME:
		select << bop.fullname << endl;
		break;
	case TITLE:
		select << bop.title << endl;
		break;
	case BOPNAME:
		select << bop.bopname << endl;
		break;
	}
	fullname.close();
	title.close();
	bopname.close();
	select.close();
}

void ReadFullname()
{
	ifstream fullname;
	fullname.open("bop_fullname.txt");
	if (!fullname.is_open())
	{
		cout << "내용을 불러올 수 없습니다.\n";
		return;
	}

	string str;
	fullname >> str;

	while (fullname.good())
	{
		cout << str << endl;
		fullname >> str;
	}
	fullname.close();
}

void ReadTitle()
{
	ifstream title;
	title.open("bop_title.txt");
	if (!title.is_open())
	{
		cout << "내용을 불러올 수 없습니다.\n";
		return;
	}

	string str;
	title >> str;

	while (title.good())
	{
		cout << str << endl;
		title >> str;
	}
	title.close();
}

void ReadBopname()
{
	ifstream bopname;
	bopname.open("bop_bopname.txt");
	if (!bopname.is_open())
	{
		cout << "내용을 불러올 수 없습니다.\n";
		return;
	}

	string str;
	bopname >> str;

	while (bopname.good())
	{
		cout << str << endl;
		bopname >> str;
	}
	bopname.close();
}

void ReadSelect()
{
	ifstream select;
	select.open("bop_select.txt");
	if (!select.is_open())
	{
		cout << "내용을 불러올 수 없습니다.\n";
		return;
	}

	string str;
	select >> str;

	while (select.good())
	{
		cout << str << endl;
		select >> str;
	}
	select.close();
}

char READREAD(char *strr)
{
	ifstream infile;
	infile.open(strr);
	if (!infile.is_open())
	{
		cout << "내용을 불러올 수 없습니다.\n";
		return 0;
	}

	string str;
	infile >> str;

	while (infile.good())
	{
		cout << str << endl;
		infile >> str;
	}
	infile.close();

	return 0;
}