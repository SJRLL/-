#define _CRT_SECURE_NO_WARNINGS 1
class Solution
{
	public:
		int MoreThanHalfNum_Solution(vector<int> numbers) {

			if (numbers.empty())
				return 0;
			sort(numbers.begin(), numbers.end());
			int count = 0;
			int length = numbers.size();

			int mid = numbers[length / 2];
			for (int i = length / 2; i >= 0; i--)
			{
				if (numbers[i] == mid)
				{
					count++;
				}
				else
				{
					break;
				}
			}

			for (int i = length / 2 + 1; i<length; ++i)
			{

				if (numbers[i] == mid)
				{
					count++;
				}
				else
				{
					break;
				}
			}

			if (count>length / 2)
			{
				return mid;
			}
			else
			{
				return 0;
			}
}



