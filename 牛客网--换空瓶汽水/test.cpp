#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	int price = 0;
//	printf("请输入金额：");
//	scanf("%d", &money);
//	printf("请输入水的价格：");
//	scanf("%d", &price);
//	empty = money / price;
//	total = money / price;
//	while (empty>1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;

int f(int empty)
{
	if (empty == 1)
		return 0;
	if (empty == 2)
		return 1;
	return f(empty - 2) + 1;
}

int main()
{
	int empty;
	while (cin >> empty)
	{
		if (empty == 0)
			break;
		else
			cout << f(empty) << endl;
	}
	system("pause");
	return 0;
}