#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n=10;
	while (cin >> n)
	{
		if (n <= 2)
		{
			cout << -1 << endl;
		}
		else
		{
			if (n % 2 == 1)
			{
				cout << 2 << endl;
			}
			else if (n % 4 == 2)
			{
				cout << 4 << endl;
			}
			else if (n % 4 == 0)
			{
				cout << 3 << endl;
			}
		}
	}
	system("pause");
	return 0;
}