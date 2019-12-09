#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a, b, c;
	while (cin >> a >> b >> c)
	{
		int d = a + b;
		int e = a + c;
		int f = b + c;
		if (((d>c) && (e>b) && (f>a)) )
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	system("pause");
	return 0;
}
