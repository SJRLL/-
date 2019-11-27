#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<stdlib.h>
using namespace std;
int monthnum(int month)
{
	if (month == 1 || month == 2)
	{
		return 1;
	}
	return monthnum(month - 1) + monthnum(month - 2);
}
int main()
{
	int month;
	while (cin >> month)
	{
		cout << monthnum(month) << endl;
	}
	system("puase");
	return 0;
}
