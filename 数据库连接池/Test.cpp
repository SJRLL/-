Webϵͳͨ����Ƶ���ط������ݿ⣬���ÿ�η��ʶ����������ӣ����ܻ�ܲΪ��������ܣ��ܹ�ʦ���������Ѿ����������ӡ����յ����󣬲������ӳ���û��ʣ����õ�����ʱ��ϵͳ�ᴴ��һ�������ӣ������������ʱ�����ӻᱻ�������ӳ��У�����������ʹ�á�

�����ṩ�㴦���������־���������һ�����ӳ������Ҫ�������ٸ����ӡ�

�������� :
��������������ݣ�ÿ�����ݵ�һ�а���һ��������n��1��n��1000������ʾ�����������

������n�У�ÿ�а���һ��������id��A��B��C������Z���Ͳ�����connect��disconnect����


������� :
��Ӧÿһ�����ݣ�������ӳ������Ҫ�������ٸ����ӡ�

���룺
6
A connect
A disconnect
B connect
C connect
B disconnect
C disconnect


�����
2

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		int max_count = 0;
		string id, method;
		while (n--)
		{
			cin >> id >> method;
			if (method == "connect")
			{
				count++;
			}
			if (method == "disconnect")
			{
				count--;
			}
			if (count>max_count)
			{
				max_count = count;
			}
		}
		cout << max_count << endl;
	}
	return 0;
}