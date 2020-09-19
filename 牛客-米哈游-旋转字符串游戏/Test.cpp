#include<bits/stdc++.h>
using namespace std;
int w, x;
int main()
{
	cin >> w >> x;
	int i = 0;
	vector<vector<int>> dp(w, vector<int>(x, 0));
	int left = 0;
	int right = x - 1;
	int up = 0;
	int down = w - 1;
	while (i<w*x)
	{
		for (int j = left; j <= right; ++j)
		{
			dp[up][j] = i++;
		}
		for (int j = up + 1; j <= down; ++j)
		{
			dp[j][right] = i++;
		}
		for (int j = right - 1; j >= left && down>up; j--)
		{
			dp[down][j] = i++;
		}
		for (int j = down - 1; j>up && right>left; j--)
		{
			dp[j][left] = i++;
		}
		left++;
		right--;
		up++;
		down--;
	}
	for (int i = 0; i<w; ++i)
	{
		for (int j = 0; j<x; ++j)
		{
			cout << (char)(dp[i][j] % 26 + 'A') << " ";
		}
		cout << endl;
	}
	return 0;
}