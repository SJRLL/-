һ�黨������������Щͼ��������һ��ֱ�ӿ��õ�С����������Ҳ��һЩͼ�������ڸ����Ļ�������С����������һ���ܴӻ������о����ܼ�������С�������أ�

�������� :
��������������ݡ�

ÿ�����ݰ��������ַ���s, t���ֱ��ǳɶԳ��ֵĻ�������С�������䲼�������ÿɼ�ASCII�ַ���ʾ�ģ��ɼ���ASCII�ַ��ж��ٸ��������Ļ���Ҳ�ж����ֻ�������������С�������ᳬ��1000���ַ�����


������� :
��Ӧÿ�����룬����ܴӻ��Ʋ��м��������С�������������һ�鶼û�У��Ǿ����0��ÿ�����ռһ�С�
ʾ��1
����
abcde a3
aaaaaa aa
���
0
3

// write your code here cpp
#include<iostream>
#include<string>
using namespace std;

int GetCnt(string &m, string &t)
{
	int cnt = 0;
	int s_pos = 0;
	while (1)
	{
		size_t cur_pos = m.find(t, s_pos);
		if (cur_pos != string::npos)
		{
			cnt++;
			s_pos = cur_pos + t.size();
		}
		else
		{
			break;
		}
	}
	return cnt;
}

int main()
{
	string m, t;
	while (cin >> m >> t)
	{
		cout << GetCnt(m, t) << endl;
	}
	return 0;
}