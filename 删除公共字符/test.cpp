#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//
//int main()
//{
//
//	string s1, s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	int flag = 1;
//	for (int i = 0; i<s1.size(); i++)
//	{
//		for (int j = 0; j<s2.size(); j++)
//		{
//			if (s1[i] == s2[j])
//			{
//				flag = 0;
//			}
//		}
//
//		if (flag)
//		{
//			printf("%d\n",s1[i]);
//		}
//	}
//
//
//	system("pause");
//	return 0;
//}

#include<iostream>
#include<string>
#include<stack>
#include<stdlib.h>
using namespace std;

int main()
{

	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int flag =0;
	string ret;
	for (int i = 0; i<s1.size(); i++)
	{
		flag = 0;
		for (int j = 0; j<s2.size(); j++)
		{
			if (s1[i] == s2[j])
			{
				flag = 1;
				break;
			}
		}

		if (!flag)
		{
			ret = ret +s1[i] ;
		}
	}
	cout << ret << endl;
	system("pause");
	return 0;
}



