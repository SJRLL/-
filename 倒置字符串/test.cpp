#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<iostream>
#include<string>
#include<stack>
using namespace std;



//��Ŀ�������£���   i  like  beijing.    ������������   beijing. like i

//(ֻ�ܵ���abcdef->fedcba)
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


//����1

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
