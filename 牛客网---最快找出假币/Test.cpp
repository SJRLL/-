#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		if (n == 0)
			continue;
		while (n > 1)
		{
			n = n / 3 + 1 - (n % 3 ^ 3) / 3;
			count++;
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}