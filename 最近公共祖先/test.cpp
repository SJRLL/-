#define _CRT_SECURE_NO_WARNINGS 1


//��һ���������������������㰴�����һ��һ��ش����������α�ţ��������Ϊ1���������������a��b�������һ���㷨�����a��b�������������ȵı�š�
//
//��������int a, b��Ϊ�������ı�š��뷵��a��b������������ȵı�š�ע�������㱾��Ҳ����Ϊ�������ȡ�
//
//����������
//2��3
//���أ�1

#include<iostream>
using namespace std;
#include<stdlib.h>
#include<vector>


int main()
{
	int a, b;
	cin >> a >> b;
	while (a != b)
	{
		if (a>b)
		{
			a = a / 2;
		}
		else

		{
			b = b / 2;
		}

	}
	cout << a << endl;
	system("pause");
	return 0;
}