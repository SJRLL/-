#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
	/**
	*	正数数组中的最小不可组成和
	*	输入：正数数组arr
	*	返回：正数数组中的最小不可组成和
	*/
	int getFirstUnFormedNum(vector<int> arr, int len)
	{
		int min = arr[0];
		int max = 0;
		for (int i = 0; i<len; ++i)
		{
			if (arr[i]<min)
				min = arr[i];
			max += arr[i];
		}
		vector<int> dp(max + 1, 0);
		for (int i = 0; i<len; ++i)
		{
			for (int j = max; j >= arr[i]; --j)
			{
				if (dp[j - arr[i]] + arr[i]>dp[j])
					dp[j] = dp[j - arr[i]] + arr[i];
			}
		}
		for (int i = min; i <= max; ++i)
		{
			if (i != dp[i])
				return i;
		}
		return max + 1;

	}

	int main()
	{
		vector<int> arr;
		arr.push_back(4);
		arr.push_back(5);
		arr.push_back(1);
		arr.push_back(8);
		arr.push_back(5);
		arr.push_back(9);
		arr.push_back(0);
		arr.push_back(1);
		arr.push_back(2);
		arr.push_back(3);
		int len = arr.size();
		int num=getFirstUnFormedNum(arr, len);
		cout << num << endl;
		system("pause");
		return 0;
	}