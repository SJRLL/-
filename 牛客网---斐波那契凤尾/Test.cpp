NowCoder�ų��Լ��Ѿ���ס��1 - 100000֮�����е�쳲���������
Ϊ�˿���������������һ����n������˵����n��쳲�����������Ȼ��쳲���������ܴ���ˣ������n��쳲�����������6λ����˵������������ֻ˵�����6λ��

�������� :
�����ж������ݡ�
ÿ������һ�У�����һ������n(1��n��100000)��


������� :
��Ӧÿһ�����룬�����n��쳲������������6λ��
ʾ��1
����
1<br / >2<br / >3<br / >4<br / >100000
���
1<br / >2<br / >3<br / >5<br / >537501

// write your code here cpp
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int f[100002];
	f[1] = 1;
	f[2] = 1;
	int n;
	for (int i = 3; i <= 100001; ++i)
	{
		f[i] = f[i - 1] + f[i - 2];
		f[i] = f[i] % 1000000;
	}
	while (scanf("%d", &n) == 1)
	{
		if (n>24)
		{
			printf("%06d\n", f[n + 1]);
		}
		else
		{
			printf("%d\n", f[n + 1]);
		}
	}
	return 0;
}

// write your code here cpp
#include<iostream>
#include<vector>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int Ficobn(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return Ficobn(n - 1) + Ficobn(n - 2);
}

int main()
{
	int n;
	//vector<int> v;
	while (cin >> n)
	{
		//int a = Ficobn(n);
		int sum = 0;
		for (int i = 1; i <= n; ++i)
		{
			sum += Ficobn(i);
		}
		cout << sum << endl;
		////if (n<37)
		//{
		//cout << a << endl;
		//}
		//else
		//{
		//	v.push_back(a);
		//	cout << setfill('0') << setw(6) << v[n] << endl;
		//}
	}
	system("pause");
	return 0;
}
