#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	string s = "", table = "0123456789ABCDEF";
	int m, n;
	cin >> m >> n;
	while (m)
	{
		if (m<0)
		{
			m = -m;
			cout << "-";
		}
		s = table[m%n] + s;
		m /= n;
	}
	cout << s << endl;
	system("pause");
	return 0;
}
