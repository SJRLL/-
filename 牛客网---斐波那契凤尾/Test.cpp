NowCoder号称自己已经记住了1 - 100000之间所有的斐波那契数。
为了考验他，我们随便出一个数n，让他说出第n个斐波那契数。当然，斐波那契数会很大。因此，如果第n个斐波那契数不到6位，则说出该数；否则只说出最后6位。

输入描述 :
输入有多组数据。
每组数据一行，包含一个整数n(1≤n≤100000)。


输出描述 :
对应每一组输入，输出第n个斐波那契数的最后6位。
示例1
输入
1<br / >2<br / >3<br / >4<br / >100000
输出
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
