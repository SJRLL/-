#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;
//int main()
//{
//
//	enum Status{ kValid = 0, kInvalid };
//	int g_nStatus = kValid;
//
//	string str;
//	cin >> str;
//		g_nStatus = kInvalid;
//		long long num = 0;
//		const char* cstr = str.c_str();
//		if ((cstr != NULL) && (*cstr != '\0'))
//		{
//			int minus = 1;
//			if (*cstr == '-')
//			{
//				minus = -1;
//				cstr++;
//			}
//			else if (*cstr == '+')
//				cstr++;
//
//			while (*cstr != '\0')
//			{
//				if (*cstr > '0' && *cstr < '9')
//				{
//					g_nStatus = kValid;
//					num = num * 10 + (*cstr - '0');
//					cstr++;
//					if (((minus>0) && (num > 0x7FFFFFFF)) ||
//						((minus<0) && (num > 0x80000000)))
//					{
//						g_nStatus = kInvalid;
//						num = 0;
//						break;
//					}
//				}
//				else
//				{
//					g_nStatus = kInvalid;
//					num = 0;
//					break;
//				}
//			}
//
//			if (g_nStatus == kValid)
//				num = num * minus;
//
//		}
//		cout << (int)num << endl;
//



//	system("pause");
//	return 0;
//}

class Solution {
public:
	int StrToInt(string str) {
		if (str.empty())
		{
			return 0;
		}
		int num = 0;
		int post = 1;
		for (int i = 0; i < (int)str.size(); i++)
		{
			if (str[0] == '-')
				post = -1;
			else if (str[0] == '+');
			else
			{
				if (str[i] < '0' || str[i] > '9')
				{
					return 0;
				}
				num = num * 10 + (str[i] - '0');
			}
		}
		if (post == -1)
			num = -num;
		return num;
	}
};

int main()
{
	Solution s;
	s.StrToInt("+123");
	system("pause");
	return 0;
}