#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

void Swap(int* x1, int* x2)
{
	int tmp = *x1;
	*x1 = *x2;
	*x2 = tmp;
}

void BubbleSort(int* nums, int n)//冒泡排序（升序）
{
	int end = n - 1;
	while (end >= 0)
	{
		int flag = 0;
		for (int i = 0; i < end; ++i)
		{

			if (nums[i]>nums[i + 1])
			{
				flag = 1;
				Swap(&nums[i], &nums[i + 1]);
			}
		}
		if (flag == 0)
		{
			break;
		}
		--end;
	}
}

int main()
{
	int k;
	cin >> k;
	int a[] = { 1, 3, 3, 7, 2, 5, 1, 2, 4, 6 };
	int n = sizeof(a) / sizeof(a[0]);//求数组的长度
	for (int i = 0; i<n; i++)
	{
		int k = a[i];
		for (int j = i + 1; j<n; j++)
		{
			if (k == a[j])//判断数组中是否有重的元素
			{
				for (int k = j; k<n - 1; k++)
				{
					a[k] = a[k + 1];
				}
				n--;
				j--;//这一步非常重要，没有的话部分结果就会不正确
			}
		}
		
	}
	BubbleSort(a, n);

    cout<< a[k];

	system("pause");
	return 0;
}

