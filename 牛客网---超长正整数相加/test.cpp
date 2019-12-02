#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<iostream>
using namespace std;
#include<string>
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		while (s2.size() < s1.size())
		{
			s2 = '0' + s2;
		}
		while (s2.size()>s1.size())
		{
			s1 = '0' + s1;
		}

		for (int i = s1.size() - 1; i > 0; --i)
		{
			s1[i] += s2[i] - '0';
			if (s1[i] > '9')
			{
				s1[i - 1] += 1;
				s1[i] -= 10;
			}
		}
		s1[0] += s2[0] - '0';
		if (s1[0] > '9')
		{
			s1[0] -= 10;
			s1 = '1' + s1;
		}
		cout << s1 << endl;
	}
	
	system("pause");
	return 0;
}
