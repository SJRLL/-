#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;


//һ�����������Էֽ��һ����������Ļ�������36 = 2 * 2 * 3 * 3��������2��3�������ӡ�
//NowCoder������о����Ӹ����ķֲ����ɣ����ڸ���һϵ������������ϣ���㿪��һ���������ÿ�������������Ӹ�����
int main()
{
	int n, count, i;
	while (cin >> n)
	{
		count = 0;
		for (i = 2; i < sqrt(n); ++i)
		{
			if (n%i == 0)
			{
				while ((n%i) == 0)
				{
					n /= i;
				}
				count++;
			}
		}
		if (n != 1)
			count++;
		cout << count << endl;
	}
	system("pause");
	return 0;
}