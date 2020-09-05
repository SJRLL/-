 ‰»Î£∫2, [-1, 4, 5, 2]
 ‰≥ˆ£∫4

#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> nums = { -1, 4, 5, 2 };
	vector<pair<double, double>> vp(nums.size() / 2);
	int index = 0;
	for (int i = 0; i < nums.size(); ++i)
	{
		vp[index++] = { nums[i] - nums[i + 1] * 1.0 / 2, nums[i] + nums[i + 1] * 1.0 / 2 };
	}
	sort(vp.begin(), vp.end());
	if(vp.size() == 1)
	{
		return 2;
	}
	int max = vp[0].second;
	int t = 2;
	int sums = 0;
	for (int i = 1; i < vp.size(); ++i)
	{
		if (vp[i].first - vp[i - 1].second>t)
		{
			sums += 2;
		}
		else if (vp[i].first - vp[i - 1].second == t)
		{
			sums += 1;
		}
	}
	cout << sums += 2 << endl;
	return  0;
}

