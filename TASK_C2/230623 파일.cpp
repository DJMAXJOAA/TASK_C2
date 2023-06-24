#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string filename = "test";
	string extension = ".zip";
	/*cout << "���� �̸� �Է� : ";
	cin >> filename;*/
	
	int divsize = 1024;
	/*cout << "���� ������ �Է�(byte) : ";
	cin >> divsize;*/

	ifstream fin;
	string full_filename = filename + extension;
	fin.open(full_filename, ios::in | ios::binary);

	if (!fin.is_open())
	{
		cerr << "�и� ����" << endl;
		exit(EXIT_FAILURE);
	}

	fin.seekg(0, ios::end);
	int size = fin.tellg();
	cout << size << "kB" << endl;

	int divide = size / divsize + 1;
	char ch;
	for (int i = 0; i < divide; i++)
	{
		fin.seekg(i*divsize, ios::beg);
		ofstream fout;
		string temp = filename + to_string(i) + extension;
		fout.open(temp, ios::binary);
		for (int j = 0; j < divsize; j++)
		{
			if (!fin.get(ch))
				break;
			else
				fout << ch;
		}
		fout.close();
	}

	/* ���� */

	int n = 3;
	//cout << "��� ���� ��������?";
	//cin >> n;
	
	string filename2 = "test";
	string extension2 = ".zip";
	//cout << "������ ���� �̸�";
	//cin >> filename2;

	string file_combine = filename2 + "!" + extension;
	ofstream ffout;
	ffout.open(file_combine, ios::binary);
	for (int i = 0; i < n; i++)
	{
		ifstream ffin;
		string temp = filename2 + to_string(i) + extension2;
		cout << temp;
		ffin.open(temp, ios::in, ios::binary);
		if (!ffin.is_open())
		{
			cerr << "�и� ����" << endl;
			exit(EXIT_FAILURE);
		}
		while (ffin.get(ch))
		{
			ffout << ch;
		}
		ffin.close();
	}
	cout << "��";
	

	return 0;
}