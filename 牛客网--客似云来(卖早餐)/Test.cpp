NowCoder����һ����͵꣬��ҵ�Ŀ��˶��и���ֵ��ã�����ֻҪ����ҵ�Թ�һ����ͣ��ͻ�ÿ�춼���������ң�����������ҵ����������ͺ󣬽�����ÿ�춼���һλ������һ����Ʒ����
���ǣ���ҵ�Ŀ��˴����һ���˷�չ�ɺƺƵ����ɰ���ǧ�ˣ�1��1��2��3��5����
���ڣ�NowCoder�������æͳ��һ�£�ĳһ��ʱ�䷶Χ�����ܹ��������ٷ���ͣ�����ÿλ����ֻ��һ����ͣ���

�������� :
�������ݰ������顣
ÿ�����ݰ�����������from��to(1��from��to��80)���ֱ������ĵ�from��͵�to�졣


������� :
��Ӧÿһ�����룬�����from��to��Щ�������from��to���죩����Ҫ�����ٷ���͡�

// write your code here cpp
#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

//����һ:�õݹ����ᵼ��ʱ�䳬������
long long Ficonbi(int n)
{
	if (n<2)
	{
		return n;
	}
	return Ficonbi(n - 1) + Ficonbi(n - 2);
}

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		int sum = Ficonbi(m) - Ficonbi(n);
		cout << sum << endl;
	}
	system("pause");
	return 0;
}

//���������˴���ǰ����80�����飬���쳲���������
// write your code here cpp
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	long long arr[80] = { 1, 1 };
	for (int i = 2; i<80; ++i)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	int n, m;
	while (cin >> n >> m)
	{
		long long res = 0;
		for (int i = n; i <= m; ++i)
		{
			res = res + arr[i - 1];
		}
		cout << res << endl;
	}
	return 0;
}