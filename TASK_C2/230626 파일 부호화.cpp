#include "all.h"

using namespace std;

const int pass = 5;

int main()
{
	string filename = "asdf.jpg";
	string filename_encode = to_string(pass) + filename;
	string filename_decode = to_string(pass) + "decode" + filename;

	char x;

	ifstream in;
	ofstream out;

	in.open(filename, ios::in | ios::binary);
	if (!in.is_open())
	{
		cout << "ㄴㄴ";
		return 0;
	}

	
	out.open(filename_encode, ios::out | ios::binary);
	while (in.get(x))
	{
		x += pass;
		out << x;
	}
	in.close();
	out.close();

	cout << "암호화 끝\n";

	in.open(filename_encode, ios::in | ios::binary);
	if (!in.is_open())
	{
		cout << "ㄴㄴ";
		return 0;
	}

	int i = 0;
	out.open(filename_decode, ios::out | ios::binary);
	while (1)
	{

		if (!in.get(x))
		{
			break;
		}
		x -= pass;
		out << x;

	}
	in.close();
	out.close();

	cout << "복호화 끝\n";

	return 0;
}