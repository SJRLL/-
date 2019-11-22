#define _CRT_SECURE_NO_WARNINGS 1


//С��������һ��ʯ��·ǰ��ÿ��ʯ���ϴ�1���ű��Ϊ��1��2��3.......
//����ʯ��·Ҫ��������Ĺ������ǰ��������С�׵�ǰ���ڵı��ΪK�� ʯ�壬С�׵���ֻ����ǰ��K��һ��Լ��(����1��K)����
//������K + X(XΪK��һ����1�ͱ����Լ��)��λ�á� С�׵�ǰ���ڱ��ΪN��ʯ�壬�����������ǡ��ΪM��ʯ��ȥ��С����֪��������Ҫ��Ծ���ο��Ե��
//���磺
//N = 4��M = 24��
//4->6->8->12->18->24
//����С��������Ҫ��Ծ5�Σ��Ϳ��Դ�4��ʯ������24��ʯ��

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	while (cin >> N >> M)
	{
		vector<int> steps(M + 1, INT_MAX);
		steps[N] = 0;
		for (int i = N; i <= M; i++)
		{
			if (steps[i] != INT_MAX)
			for (int j = 2; j*j <= i; j++)
			{
				if (i%j == 0)
				{
					if (i + j <= M)
					{
                        if (steps[i] + 1 < steps[i + j])
					    
					   	    steps[i + j] = steps[i] + 1;
					    
					}
					
					if (i + i / j <= M)
					{
						if (steps[i] + 1 < steps[i + i / j])
							steps[i + i / j] = steps[i] + 1;
					}
				}
			}
		}
		if (steps[M] == INT_MAX)
			steps[M] = -1;
		cout << steps[M] << endl;
	}
	return 0;
}

