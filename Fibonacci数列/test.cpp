#define _CRT_SECURE_NO_WARNINGS 1

//Fibonacci��������������ģ�
//F[0] = 0
//F[1] = 1
//for each i �� 2: F[i] = F[i - 1] + F[i - 2]
//��ˣ�Fibonacci���о����磺0, 1, 1, 2, 3, 5, 8, 13, ...����Fibonacci�����е������ǳ�ΪFibonacci����
//����һ��N�����������Ϊһ��Fibonacci����ÿһ������԰ѵ�ǰ����X��ΪX - 1����X + 1�����ڸ���һ����N��������Ҫ���ٲ����Ա�ΪFibonacci����
#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
	int n = 0;
	while (cin >> n)
	{
		int a = 0, b = 1, c = 1, tmp = 0;
		if (n <= 2)
			tmp = 0;
		else
		while (c<n)
		{
			c = a + b;
			tmp = b;
			a = b;
			b = c;
		}
		tmp = (n - tmp)>(c - n) ? (c - n) : (n - tmp);
		cout << tmp << endl;
	}
	return 0;
}