#define _CRT_SECURE_NO_WARNINGS 1
//(�����)
//�������������������
//xcopy / s c : \ d : \��
//�����������£�
//����1��������xcopy
//����2���ַ��� / s
//����3���ַ���c : \
//	   ����4 : �ַ���d : 
//			 ���дһ��������������ʵ�ֽ������и�����������������
//			 ��������
//			 1.�����ָ���Ϊ�ո�
//			 2.�����á������������Ĳ���������м��пո񣬲��ܽ���Ϊ���������
//			 ����������������xcopy / s ��C : \program files�� ��d : \��ʱ��������Ȼ��4����
//		 ��3������Ӧ�����ַ���C : \program files��������C : \program��ע���������ʱ����Ҫ������ȥ�������Ų�����Ƕ�������
//			 3.����������
//			 4.������������֤��������ֲ�����Ҫ�������
#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s))
	{
		int flag = 0;
		vector<string> v;
		string str;
		for (size_t i = 0; i < s.size(); ++i)
		{
			if (flag)
			{
				if (s[i] != '\"')
				{
					str += s[i];//���û�����������žͼ������䵹���ַ���str��
				}
				else
				{
					flag = false;
				}

			}
			else
			{
				if (s[i] == ' ')
				{
					v.push_back(str);
					str = " ";
				}
				else if (s[i] == '\"')
				{
					flag = true;
				}
				else
				{
					str += s[i];
				}
			}
		}
		v.push_back(str);
		cout << v.size() << "\n";
		for (size_t j = 0; j < v.size(); ++j)
		{
			cout << v[j] << endl;
		}
	}
	system("pause");
	return 0;
}
