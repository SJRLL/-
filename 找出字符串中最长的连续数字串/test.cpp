#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int pos = 0;
	int max = 0;
	int count = 0;
	int length = s.size();
	for (int i = 0; i<length; i++)
	{
		if (s[i] >= '0'  && s[i] <= '9')
		{
			count++;
			if (count>max)
			{
				max = count;
				pos = i;
			}
		}
		else
		{
			count = 0;
		}
	}

	for (int a = pos - max + 1; a<pos; ++a)
	{
		cout << s[a];
	}
	system("pause");
	return 0;
}
