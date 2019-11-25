#define _CRT_SECURE_NO_WARNINGS 1


//一个袋子里面有n个球，每个球上面都有一个号码(拥有相同号码的球是无区别的)。
//如果一个袋子是幸运的当且仅当所有球的号码的和大于所有球的号码的积。
//例如：如果袋子里面的球的号码是{ 1, 1, 2, 3 }，这个袋子就是幸运的，因为1 + 1 + 2 + 3 > 1 * 1 * 2 * 3
//你可以适当从袋子里移除一些球(可以移除0个, 但是别移除完)，要使移除后的袋子是幸运的。
//现在让你编程计算一下你可以获得的多少种不同的幸运的袋子。
//
//输入描述 :
//第一行输入一个正整数n(n ≤ 1000)
//第二行为n个数正整数xi(xi ≤ 1000)
//
//
//输出描述 :
//	 输出可以产生的幸运的袋子数
//	 示例1
//	 输入
//	 3
//	 1 1 1
//	 输出
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

