#include<iostream>
#include<stdlib.h>
using namespace std;

int Fic(int n)
{
	if (n < 3)
	{
		return n;
	}
	return Fic(n - 1) + Fic(n - 2);
}

int main()
{
	int n;
	cin >> n;
	int res = Fic(n);
	cout << res << endl;
	system("pause");
	return 0;
}