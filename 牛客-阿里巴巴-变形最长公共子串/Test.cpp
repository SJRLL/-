#include <bits/stdc++.h>
using namespace std;

using namespace std;

const int N = 2e3 + 500;

string str1;
string str2;
int dp[N][N];
int main()
{

	cin >> str1;
	cin >> str2;
	int n = str1.size();
	int m = str2.size();
	str1 = ' ' + str1;
	str2 = ' ' + str2;
	//int n = str1.size();
	//int m = str2.size();
	int t = max(n, m);
	int tt = min(n, m);
	//for(int i = 1; i <= n; i++) cin >> str1[i];
	// for(int i = 1; i <= m; i++) cin >> str2[i];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			if (str1[i] == str2[j])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
		}
	}
	if (dp[n][m] == 0)
	{
		cout << t + 1 << endl;
	}
	else
	{
		cout << tt - dp[n][m] << endl;
	}
	//cout << dp[n][m]  <<endl;
}
