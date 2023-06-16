#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <functional>

using namespace std;

random_device seeder;
const auto seed{ seeder.entropy() ? seeder() : time(nullptr) };
/* ·£´ý ¿£Áø */
mt19937 engine{ static_cast<mt19937::result_type>(seed) };
/* ·£´ý ¹üÀ§ ÁöÁ¤ */
uniform_int_distribution<int> distribution{ 1,100 };
/* ·£´ý »ý¼º */
auto generator = bind(distribution, engine);

struct Item
{
	int A, B, C, D, E, F, G, H, I, J, K;
};

class Rand
{
public:
	Rand();
	~Rand();
	void RandCount();
	Item GetItem(char a);
private:
	Item item;
};

Rand::Rand()
{
	item.A = 1;
	item.B = 3, item.C = 3;
	item.D = 5, item.E = 5, item.F = 5;
	item.G = 10, item.H = 10, item.I = 10, item.J = 10;
	item.K = 38;
}

Rand::~Rand()
{
}

void Rand::RandCount(int )
{
	if (item. == 0)
	{
		values[i] = generator();
		i--;
	}
	else
	{
		item.A++;
		count.A--;
	}
}

Item GetItem(char a)
{

}


int main()
{
	Item item = { 0 };
	Rand count;

	vector<int> values(1000001);
	generate(values.begin(), values.end(), generator);

	
	for (int i = 1; i <= 1000000; i++)
	{
		/* 5 star */

		if (values[i] == 1)
		{
			if (count.A == 0)
			{
				values[i] = generator();
				i--;
			}
			else
			{
				item.A++;
				count.A--;
			}
		}

		/* 4 star */
		else if (1 < values[i] && values[i] <= 4)
		{
			if (count.B == 0)
			{
				values[i] = generator();
				i--;
			}
			else
			{
				item.B++;
				count.B--;
			}
		}
			
		else if (4 < values[i] && values[i] <= 7)
		{
			if (count.C == 0)
			{
				values[i] = generator();
				i--;
			}
			else
			{
				item.C++;
				count.C--;
			}
		}
			

		/* 3 star */
		else if (7 < values[i] && values[i] <= 12)
		{
			if (count.D == 0)
			{
				values[i] = generator();
				i--;
			}
			else
			{
				item.D++;
				count.D--;
			}
		}
		else if (12 < values[i] && values[i] <= 17)
		{
			if (count.E == 0)
			{
				values[i] = generator();
				i--;
			}
			else
			{
				item.E++;
				count.E--;
			}
		}
		else if (17 < values[i] && values[i] <= 22)
		{
			if (count.F == 0)
			{
				values[i] = generator();
				i--;
			}
			else
			{
				item.F++;
				count.F--;
			}
		}

		/* 2 star */
		else if (22 < values[i] && values[i] <= 32)
		{
			if (count.G == 0)
			{
				values[i] = generator();
				i--;
			}
			else
			{
				item.G++;
				count.G--;
			}
		}
		else if (32 < values[i] && values[i] <= 42)
		{
			if (count.H == 0)
			{
				values[i] = generator();
				i--;
			}
			else
			{
				item.H++;
				count.H--;
			}
		}
		else if (42 < values[i] && values[i] <= 52)
		{
			if (count.I == 0)
			{
				values[i] = generator();
				i--;
			}
			else
			{
				item.I++;
				count.I--;
			}
		}
		else if (52 < values[i] && values[i] <= 62)
		{
			if (count.J == 0)
			{
				values[i] = generator();
				i--;
			}
			else
			{
				item.J++;
				count.J--;
			}
		}

		/* 1 star */
		else if (62 < values[i] && values[i] <= 100)
		{
			if (count.K == 0)
			{
				values[i] = generator();
				i--;
			}
			else
			{
				item.K++;
				count.K--;
			}
		}

		if (i % 100 == 0)
		{
			Rand count();
		}

		if (i == 100 || i == 1000 || i == 10000 || i == 100000 || i == 100000000)
		{
			cout << "È½¼ö : " << i << "¹ø »Ì±â °á°ú :" << endl;
			cout << "A : " << item.A << " B : " << item.B << " C : " << item.C << " D : " << item.D << " E : " << item.E << " F : " << item.F << " G : " << item.G << " H : " << item.H << " I : " << item.I << " J : " << item.J << " K : " << item.K << endl;
		}
	}

	return 0;
}

void Item_Init(Item* item)
{
	item->A = 1;
	item->B = 3, item->C = 3;
	item->D = 5, item->E = 5, item->F = 5;
	item->G = 10, item->H = 10, item->I = 10, item->J = 10;
	item->K = 38;
}

