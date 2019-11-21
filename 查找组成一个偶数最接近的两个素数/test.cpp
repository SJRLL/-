#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<stdlib.h>
using namespace std;

int IsSu(int n)
{
	int i = 0;
	for (i = 2; i < n / 2; ++i)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int input ;
	int i, j;
	while (cin >> input)
	{
		for (i = input / 2, j = input / 2; i >= 0, j <= input; --i, ++j)
		{
			if (IsSu(i) && IsSu(j))
			{
				cout << i << endl << j << endl;
				break;
			}
		}
	}
	system("pause");
	return 0;
}
