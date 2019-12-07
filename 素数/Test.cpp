#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//输入一个整数n(2 <= n <= 10000)，要求输出所有从1到这个整数之间(不包括1和这个整数)个位为1的素数，如果没有则输出 - 1。

int IsPrime(int n)
{
	if (n <= 1)
		return 0;
	for (int i = 2; i < n; ++i)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
 
int main()
{
	int n;
	int count = 0;
	while (cin >> n)
	{
		for (int i = 1; i < n; ++i)
		{
			if (IsPrime(i) && (i % 10 == 1))
			{
				cout << i << " ";
				count++;
			}
		}
	}
	if (count == 0)
		cout << -1;
	return 0;
}
