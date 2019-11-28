#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int flag = 1;
		int i = 0;
		int j = 0;
		int k = i - 1;
		for (; j<s2.size(); ++j)
		{
			if (s2[j] == s1[i] || s1[i] == '?')
			{
				i++;
				continue;
			}
			else if (s1[i] == '*')
			{
				i++;
				continue;
			}
			else if (k >= 0 && s1[k] == '*')
			{
				continue;
			}
			else
			{
				cout << "false" << endl;
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			cout << "true " << endl;
	}
	system("pause");
	return 0;
}

