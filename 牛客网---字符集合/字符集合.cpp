#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		int arry[256] = { 0 };
		for (auto ch :   s)
		{
			if (arry[ch] == 0)
			{
				cout << ch;
				arry[ch] = 1;
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}