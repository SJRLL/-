#define _CRT_SECURE_NO_WARNINGS 1


//һ������������n����ÿ�������涼��һ������(ӵ����ͬ����������������)��
//���һ�����������˵ĵ��ҽ���������ĺ���ĺʹ���������ĺ���Ļ���
//���磺��������������ĺ�����{ 1, 1, 2, 3 }��������Ӿ������˵ģ���Ϊ1 + 1 + 2 + 3 > 1 * 1 * 2 * 3
//������ʵ��Ӵ������Ƴ�һЩ��(�����Ƴ�0��, ���Ǳ��Ƴ���)��Ҫʹ�Ƴ���Ĵ��������˵ġ�
//���������̼���һ������Ի�õĶ����ֲ�ͬ�����˵Ĵ��ӡ�
//
//�������� :
//��һ������һ��������n(n �� 1000)
//�ڶ���Ϊn����������xi(xi �� 1000)
//
//
//������� :
//	 ������Բ��������˵Ĵ�����
//	 ʾ��1
//	 ����
//	 3
//	 1 1 1
//	 ���
//	 2
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

vector<int> bag;
int n;

int DFS(int k, int sum, int pi)
{
	int r = 0;
	int i;
	for (i = k; i<n; ++i)
	{
		sum += bag[i];
		pi *= bag[i];

		if (sum>pi)
			r += 1 + DFS(i + 1, sum, pi);
		else if (bag[i] == 1)
			r += DFS(i + 1, sum, pi);
		else break;

		for (; i<n - 1 && bag[i] == bag[i + 1]; i++);

		sum -= bag[i];
		pi /= bag[i];

	}
	return r;
}

int main()
{
	int i, x;
	while (cin >> n)
	{
		for (i = 0; i<n; ++i)
		{
			cin >> x;
			bag.push_back(x);
		}
		sort(bag.begin(), bag.end());
		cout << DFS(0, 0, 1) << endl;
	}

	return 0;
}

