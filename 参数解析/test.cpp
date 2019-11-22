#define _CRT_SECURE_NO_WARNINGS 1
//(编程题)
//在命令行输入如下命令：
//xcopy / s c : \ d : \，
//各个参数如下：
//参数1：命令字xcopy
//参数2：字符串 / s
//参数3：字符串c : \
//	   参数4 : 字符串d : 
//			 请编写一个参数解析程序，实现将命令行各个参数解析出来。
//			 解析规则：
//			 1.参数分隔符为空格
//			 2.对于用“”包含起来的参数，如果中间有空格，不能解析为多个参数。
//			 比如在命令行输入xcopy / s “C : \program files” “d : \”时，参数仍然是4个，
//		 第3个参数应该是字符串C : \program files，而不是C : \program，注意输出参数时，需要将“”去掉，引号不存在嵌套情况。
//			 3.参数不定长
//			 4.输入由用例保证，不会出现不符合要求的输入
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
					str += s[i];//如果没有遇到后引号就继续将其倒到字符串str中
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
