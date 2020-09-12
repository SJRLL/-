//解题思路：一次可以爬1或者2个楼梯

class Solution {
public:
	/**
	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	*
	* @param n int整型 一共有n阶楼梯
	* @return int整型
	*/
	int climbStairs(int n) {
		int x = 1, m = 2;
		for (int i = 1; i<n; ++i)
		{
			m += x;
			x = m - x;
		}
		return x;
	}
};