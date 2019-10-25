#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV)
	{

		size_t pushi = pushV.size();
		stack<int> s;
		int j = 0;
		for (int i = 0; i<pushi; i++)
		{
			s.push(pushV[i]);
			while (!s.empty() && s.top() == popV[j])
			{
				s.pop();
				j++;
			}
		}
		if (s.empty())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};