NowCoderÿ��Ҫ��������ʼ����������������ռ����б��У���ʱ��ֻ�Ǳ����͡�����Ϊ��Щ���͵��ʼ���Ҫ�Ա��Լ����ռ����б�����ʼ��ͣ������Ҫ���˵���Щ��Ҫ���ʼ������ȴ�����Ҫ���ʼ���
���ڸ���һ�������б������ж�Ŀ���û��Ƿ��ڳ����б��С�

�������� :
�����ж������ݣ�ÿ�����������С�

��һ�г����б�����֮����һ�����Ÿ�������������а����ո�򶺺ţ�������������˫������ܳ��Ȳ�����512���ַ���

�ڶ���ֻ����һ���������Ǵ����ҵ��û������֣�����Ҫ��ȫƥ�䣩�����Ȳ�����16���ַ���

������� :
����ڶ��е����ֳ������ռ����б��У��������Ignore������ʾ����ʼ�����Ҫ�����������Important!������ʾ����ʼ���Ҫ�����ȴ���
ʾ��1
����
Joe, Kewell, Leon
Joe
"Letendre, Bruce", Joe, "Quan, William"
William
���
Ignore
Important!


// write your code here cpp
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	string str, s;
	while (getline(cin, str))
	{
		getline(cin, s);
		bool sta = false;
		for (size_t i = 0; i<str.size(); ++i)
		{
			string t;
			if (str[i] == '"')
			{
				i++;
				while (i<str.size() && str[i] != '"')
				{
					t += str[i];
					i++;
				}
				if (t == s)
				{
					sta = true;
					break;
				}
			}
			else if (str[i] != ',')
			{
				while (i<str.size() && str[i] != ',')
				{
					t += str[i];
					i++;
				}
				if (t == s)
				{
					sta = true;
					break;
				}
			}
		}
		if (sta == true)
		{
			cout << "Ignore" << endl;
		}
		else
		{
			cout << "Important!" << endl;
		}
	}
	system("pause");
	return 0;
}