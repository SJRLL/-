#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s))
	{
		string tmp;
		map<string, int> m;
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] == ' ' || s[i] == '.' || s[i] == ',')
			{
				if (tmp != "")
				{
					m[tmp]++;
				}
				tmp = "";
			}
			else
			{
				tmp += tolower(s[i]);
			}
		}

		for (auto it = m.begin(); it != m.end(); it++)
		{
			cout << it->first << ":" << it->second << endl;
		}
	}
	return 0;
}