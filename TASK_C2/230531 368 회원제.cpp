#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <fstream> // ���� �����

using namespace std;

const int SIZE = 100;

enum
{
	FULLNAME, TITLE, BOPNAME
};

struct BOP
{
	char fullname[SIZE];	// �̸�
	char title[SIZE];		// ����
	char bopname[SIZE];		// ���̵�
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
		cout << "a : ȸ�� ���\n";
		cout << "b : �Ǹ� ����\n";
		cout << "c : ���� ����\n";
		cout << "d : BOP ID ����\n";
		cout << "e : ȸ���� ������ ������ ����\n";
		cout << "q : ����\n";
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
	cout << "�̸��� �Է��ϼ��� : ";
	cin.getline(bop.fullname, SIZE);
	cout << "������ �Է��ϼ��� : ";
	cin.getline(bop.title, SIZE);
	cout << "BOP ID�� �Է��ϼ��� : ";
	cin >> bop.bopname;

	cout << "� ������� ���� ��� ���Ͻʴϱ�? ��ȣ �Է�\n";
	cout << "0. �̸�\n";
	cout << "1. ����\n";
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
		cout << "������ �ҷ��� �� �����ϴ�.\n";
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
		cout << "������ �ҷ��� �� �����ϴ�.\n";
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
		cout << "������ �ҷ��� �� �����ϴ�.\n";
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
		cout << "������ �ҷ��� �� �����ϴ�.\n";
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
		cout << "������ �ҷ��� �� �����ϴ�.\n";
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