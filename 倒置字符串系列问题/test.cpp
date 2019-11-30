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



int main(void)
{
	char ch;
	stack<char> ch_stack;
	while (cin >> ch)
	{
		ch_stack.push(ch);
	}
	while (!ch_stack.empty())
	{
		cout << ch_stack.top();
		ch_stack.pop();
	}
	return 0;
}

//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//int main()
//{
//	string s1;
//	stack<string> st;
//	while (cin >> s1)
//	{
//		st.push(s1);
//	}
//	while (st.size() != 1)
//	{
//		cout << st.top() << "";
//		st.pop();
//	}
//	cout<<st.top()<<endl;
//	system("pause");
//	return 0;
//}
