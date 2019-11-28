//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//#include <cstring>
//#include <string>
//
//using namespace std;
//
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int m = s1.length();
		int n = s2.length();
		if (m>n)
			swap(s1, s2);
		m = s1.length();
		n = s2.length();
		string s;
		for (int i = 0; i<m; i++)
		for (int j = i; j<m; j++)
		{
			string t = s1.substr(i, j - i + 1);
			if (int(s2.find(t)) < 0)
				break;
			else if (s.length() < t.length())
				s = t;
		}
		cout << s << endl;
	}
	system("pause");
	return 0;
}

