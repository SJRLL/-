//����˼·��һ�ο�����1����2��¥��

class Solution {
public:
	/**
	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	*
	* @param n int���� һ����n��¥��
	* @return int����
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