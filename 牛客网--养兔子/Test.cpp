// write your code here cpp

#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		long long  a[92] = { 1, 1 };
		for (int i = 2; i<92; ++i)
		{
			a[i] = a[i - 1] + a[i - 2];
		}
		cout << a[n] << endl;
	}
	system("pause");
	return 0;
}