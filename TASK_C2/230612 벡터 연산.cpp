#include "vect.h"

using namespace std;

int main()
{
	double angle = 0;
	cVector3 u(-1, 3, 2);
	cVector3 v(3, -4, 1);
	
	// u+v
	cout << "u+v : " << u + v << endl;
	// u-v
	cout << "u-v : " << u - v << endl;
	// 3u+2v
	{
		cVector3 temp1 = u * 3;
		cVector3 temp2 = v * 2;
		cout << "3u+2v : " << temp1 + temp2 << endl;
	}
	// -2u + v
	{
		cVector3 temp1 = u * (-2);
		cVector3 temp2 = v;
		cout << "-2u+v : " << temp1 + temp2 << endl;
	}

	// 노말라이즈
	cout << "normalized u : " << u.normalize() << endl;
	cout << "normalized v : " << v.normalize() << endl;

	// 1,1,1 / 2,3,4 사이의 각
	{
		cVector3 temp1(1, 1, 1);
		cVector3 temp2(2, 3, 4);
		cout << "1,1,1 / 2,3,4 사이의 각 : " << temp1.angle(temp2) << endl;
	}
	// 1,1,0 / -2,2,0
	{
		cVector3 temp1(1, 1, 0);
		cVector3 temp2(2, -2, 0);
		cout << "1,1,0 / -2,2,0 사이의 각 : " << temp1.angle(temp2) << endl;
	}
	// -1, -1, -1 / 3, 1, 0
	{
		cVector3 temp1(-1, -1, -1);
		cVector3 temp2(3, 1, 0);
		cout << "-1,-1,-1 / 3,1,0 사이의 각 : " << temp1.angle(temp2) << endl;
	}

	//0,0,0 / 0,1,3 / 5,1,0 삼각형 법선벡터
	{
		cVector3 temp1(0, 1, 3);
		cVector3 temp2(5, 1, 0);
		cout << "0,0,0 / 0,1,3 / 5,1,0 삼각형 법선벡터 : " << temp1.cross(temp2) << endl;
	}
	return 0;
}