#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;

bool isMatch(string s1, string s2)
{
	int ls = s1.size(), lp = s2.size();
	vector<vector<int>> dp(ls + 1, vector<int>(lp + 1, 0));
	dp[0][0] = 1;
	int flag = 1;
	for (int j = 0; j<lp; ++j)
	{
		if (j >= 1 && s2[j - 1] != '*' && s2[j] != '*')
		{
			flag = 0;
		}
		if (s2[j] == '*')
		{
			dp[0][j + 1] = flag;
		}
	}

	for (int i = 0; i<ls; ++i)
	{
		for (int j = 0; j<lp; ++j)
		{
			if (s1[i] == s2[j] || s2[j] == '.')
			{
				dp[i + 1][j + 1] = dp[i][j];
			}
			else if (s2[j] == '*')
			{
				if (s2[j - 1] != s1[i] && s2[j - 1] != '.')
				{
					dp[i + 1][j + 1] = dp[i + 1][j - 1];
				}
				else
				{
					dp[i + 1][j + 1] = dp[i + 1][j - 1] || dp[i + 1][j] || dp[i][j + 1];
				}
			}
		}
	}
	return dp[ls][lp];
}

int main()
{
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;
	int  res;
	res = isMatch(s1, s2);
	if (res == 1)
	{
       cout <<"true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	
	system("pause");
	return 0;
}