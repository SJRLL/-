#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#include<stdlib.h>

int main()
{
	int x, y;
	int A, B;
	while (cin >> A >> B)
	{
          while (B != 0)
	   {
		x = A^B;
		y = (A&B) << 1;
		A = x;
		B = y;
	  }
	  cout << A;;
	 
	}
	 system("pause");
	return 0;
}
