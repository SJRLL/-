#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		int a[256] = { 0 };
		int  j;
		for ( auto & e:s)
		{
			a[e]++;
		}
		for ( j = 0; j < s.size(); ++j)
		{
			if (a[s[j]] == 1)
			{
				cout << s[j] << endl;
				break;
			}
		}
		if (j >= s.size())
			cout << -1 << endl;
	}
	system("pause");
	return 0;
}