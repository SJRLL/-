#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;

int FicNumber(int n)
{
	if (n<3)
	{
		return n;
	}
	return FicNumber(n - 1) + FicNumber(n - 2);
}

int main()
{
	int n;
	cin >> n;
	if (n<36 && n>0)
	{
		int res = FicNumber(n);
		cout << res << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	system("pause");
	return  0;
}