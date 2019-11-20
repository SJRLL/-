#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	int count = 0;
	int i, j, m, n;
	while (cin >> n >> m >> j >> i)
	{
		int tmp = m;
		//计算出m的二进制有多少有效位
		while (tmp != 0)
		{
			tmp = tmp >> 1;
			count++;
		}

		if (count > i - j + 1)
		{
			return -1;
		}
		m = m << j;
		n = n | m;
	}

	cout << n << endl;

	system("pause");
	return 0;
}
