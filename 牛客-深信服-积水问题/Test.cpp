#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main()
{
	int W, L, max = 0, sum = 0;
	cin >> W >> L;
	vector<int> v(L);
	for (int i = 0; i < L; i++)
	{
		cin >> v[i];
		max = max > v[i] ? max : v[i];
	}
	for (int i = 0; i < L; i++)
	{
		v[i] = max - v[i];
	}
	int i = 1;
	for (; i < L; i++)
	{
		while (v[i] >= v[i - 1])
			i++;
		int t = v[i - 1];
		for (int j = 0; j < i; j++)
			sum += (t - v[j]);
		break;
	}
	for (; i < L; i++)
	{
		int maxleft = v[i - 1];
		int k = i - 1;
		while (i < L && v[i] <= v[i - 1])
			i++;
		while (i < L && v[i] >= v[i - 1])
			i++;
		int maxright = v[i - 1];
		int t = maxleft > maxright ? maxleft : maxright;
		for (int j = k + 1; j < i; j++)
			sum += (t - v[j]);
	}
	cout << sum * W << endl;
	system("pause");
	return 0;
}