#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int  Add(int num1, int num2)
{
	int n1 = (num1&num2) << 1;
	int n2 = num1^num2;
	while (n1&n2)
	{
		num1 = n1;
		num2 = n2;
		n1 = (num1&num2) << 1;
		n2 = num1^num2;
	}
	return n1 | n2;
}

int main()
{
	int sum;
	int num3, num4;
	while (cin >> num3 >> num4)
	{
		sum = Add(num3, num4);
		cout << sum << endl;
	}
	
	
	system("pause");
	return 0;
}
