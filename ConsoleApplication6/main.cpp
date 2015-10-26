#include<iostream>

int main()
{
	
	bool* p;
	int k;
	std::cin >> k;
	int result;
	if (k == 1)
	{
		std::cout << "2";
		return 0;
	}
	int array_num = 21* k / 2;
	p = new bool[array_num];
	for (int kkk = 0; kkk < array_num; kkk++)
	{
		p[kkk] = false;
	}
	int i, j;

	for (i = 3; i < sqrt(2 * array_num); i = i + 2) {
		if (!p[i/2]) 
		{
			for (j = i; i * j < 2 * array_num; j = j + 2)
			{
			p[(i * j)/2] = true;
			}
		}
		
	}
	int cnt = 1;
	int kk;
	for (kk = 1; kk < array_num; kk++)
	{
		if (!p[kk])
		{
			cnt++;
		}
		p[kk] = false;
		if (cnt == k)
		{
			break;
		}
	}

	std::cout << 2 * kk + 1;
	return 0;
}