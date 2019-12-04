#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
using namespace std;

int gcd(int a, int b)
{
	int tmp;
	while (b)
	{
		tmp = b;
		b = a%b;
		a = tmp;
	}
	return a;
}

int main()
{
	int a, b;
	int c;
	while (cin >> a >> b)
	{	
		c= gcd(a, b);
		cout << c << endl;
	}
	
	system("pause");
	return 0;
}
