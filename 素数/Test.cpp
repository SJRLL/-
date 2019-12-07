#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//����һ������n(2 <= n <= 10000)��Ҫ��������д�1���������֮��(������1���������)��λΪ1�����������û������� - 1��

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
