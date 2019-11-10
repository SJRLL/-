#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<iostream>
#include<string>
#include<stack>
using namespace std;



//题目描述如下：把   i  like  beijing.    经过函数后变成   beijing. like i

//(只能倒置abcdef->fedcba)
//int main()
//{
//
//	string s1;
//	getline(cin, s1);
//	string ret;
//	for (int i = 0; i<s1.size(); ++i)
//	{
//			ret =s1[i] + ret ;
//
//	}
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}


//方法1

int main()
{
	string s;
	stack<string> st;
	while (cin >> s)
	{
		st.push(s);
	}

	while (st.size()!=1)
	{
			cout <<st.top()<<" " ;
			st.pop();
	}
	cout << st.top() << endl;
	system("pause");
	return 0;
}
