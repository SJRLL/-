// write your code here cpp
//#include<iostream>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	string s;
//	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
//	char b[] = { 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U' };
//	while (getline(cin, s))
//	{
//		string t;
//		for (size_t i = 0; i<s.size(); ++i)
//		{
//			if (s[i] >= 'A' && s[i] <= 'Z')
//			{
//				for (int j = 0; j<26; ++j)
//				{
//					if (s[i] == a[j])
//						t += b[j];
//				}
//			}
//			else
//			{
//				t += s[i];
//			}
//		}
//		cout << t << endl;
//	}
//	system("pause");
//	return 0;
//}

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	char c;
	while ((c = getchar()) != EOF)
	{
		if ('A' <= c && 'Z' >= c)
		{
			c = (c > 'E') ? (c - 5) : (c = 21);
		}
		putchar(c);
	}
	system("pause");
	return 0;
}
