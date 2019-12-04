#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	
	while (cin >> n)
	{    
		int count = 0;
		for (int i =n; i >0; --i)
		{
			int sum = 1;
			int a=0;
			for (int j = 2; j<=i / 2; ++j)
			{
				
				if (i%j == 0)
				{
					a = i / j;
					sum += a;
				}
			}
			if ( i ==sum)
				count++;
		}
		if (count == 0)
			cout << "-1" << endl;
		else
            cout << count-1 << endl;
	}
	
	system("pause");
	return 0;
}
