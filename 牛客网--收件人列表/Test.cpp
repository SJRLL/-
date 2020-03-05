

// write your code here cpp
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	int n = 0;
	string str;
	
	while (cin >> n)
	{
		string sum;
		getline(cin, str);
		while (n--)
		{
			getline(cin, str);
			for (int i = 0; i < str.size(); ++i)
			{
				if (str[i] == ' ' || str[i] == ',')
				{
					str.insert(0, 1, '"');
					str.push_back('"');
					break;
				}
			}
			if (n >= 1)
			{
				str.push_back(',');
				str.push_back(' ');
			}
			sum += str;
		}
		cout << sum << endl;
		sum.clear();
	}
	system("pause");
	return 0;

}