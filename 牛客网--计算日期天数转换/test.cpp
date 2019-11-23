#include<iostream>
#include<stdlib.h>
using namespace std;

bool IsLeapyear(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int GetMonthDay(int year, int Month)
{
	static int monthday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (IsLeapyear(year) && Month == 2)
	{
		return 29;
	}
	else
	{
		return monthday[Month];
	}
}

int main()
{
	int year, Month, Day;

	while (cin >> year >> Month >> Day)
	{
		int day = 0;
		while (Month)
		{
			Month--;
			day += GetMonthDay(year, Month);
		}
		day = day + Day;
		cout << day << endl;
	}
	system("pause");
	return 0;
}
