#define _CRT_SECURE_NO_WARNINGS 1


//�ڵ����������n����ɫ�����ף����׷������֣�����ÿ����ɫ�����������׸�����һ����ͬ��A��������Ҫ���ţ�������Ҫȥ������ѡ���ס�
//���ǻ谵�ĵƹ������޷��ֱ����׵���ɫ��ֻ�ֱܷ�������֡������������һЩ���ף�Ȼ��ѡ��һ˫��ɫ��ͬ�����������ס�
//���ڵ������ǣ�������Ҫ�ö���ֻ����(���ּ�����)�����ܱ�֤һ����ѡ��һ˫��ɫ��ͬ�����ס�
//
//������ɫ����n(1��n��13), ͬʱ������������Ϊn������left, right, �ֱ����ÿ����ɫ���������׵�����
//�����ݱ�֤���ҵ�����������������26����һ����������һ�ֺϷ�������
//
//����������
//4, [0, 7, 1, 6], [1, 5, 0, 6]
//���أ�10(���ͣ�������������ȡ2ֻ����������ȡ8ֻ)

#include<stdlib.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int findMinimum(int n, vector<int> left, vector<int> right) 
{
		int s = 0, L = 0, R = 0, min_l = INT_MAX, min_r = INT_MAX;
		for (int i = 0; i<n; ++i)
		{
			if (left[i] == 0 || right[i] == 0)
			{
				s += (left[i] + right[i]);
			}
			else
			{
				L += left[i];
				R += right[i];

				min_l = min(min_l, left[i]);
				min_r = min(min_r, right[i]);
			}
		}
		return s + min(L - min_l + 1, R - min_r + 1) + 1;
}

int main()
{
	int n,a;
	vector<int> left;
	vector<int> right;
	cin >> n;
	left.push_back(0);
	left.push_back(7);
	left.push_back(1);
	left.push_back(6);

	right.push_back(1);
	right.push_back(5);
	right.push_back(0);
	right.push_back(6);

	a=findMinimum(n, left, right);

	cout << a << endl;
	system("pause");
	return 0;
}