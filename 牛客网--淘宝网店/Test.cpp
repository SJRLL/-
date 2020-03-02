NowCoder在淘宝上开了一家网店。他发现在月份为素数的时候，当月每天能赚1元；否则每天能赚2元。
现在给你一段时间区间，请你帮他计算总收益有多少。

输入描述 :
输入包含多组数据。

每组数据包含两个日期from和to(2000 - 01 - 01 ≤ from ≤ to ≤ 2999 - 12 - 31)。

日期用三个正整数表示，用空格隔开：year month day。


输出描述 :
对应每一组数据，输出在给定的日期范围（包含开始和结束日期）内能赚多少钱。

// write your code here cpp
#include<iostream>
#include<cmath>
using namespace std;

bool Isprime(int month)
{
	if (month == 1)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(month); ++i)
	{
		if (month%i == 0)
		{
			return false;
		}
	}
	return true;
}

bool IsLeapear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int getSummoney(int y1, int m1, int d1, int y2, int m2, int d2)
{
	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int sum = 0;
	if (y1 == y2)
	{
		days[2] = IsLeapear(y1) ? 29 : 28;
		if (m1 == m2)
		{
			sum += (d2 - d1 + 1)*(Isprime(m1) == false ? 2 : 1); //同年同月
			return sum;
		}
		sum += (days[m1] - d1 + 1)*(Isprime(m1) == false ? 2 : 1);//同年，然后计算y1的那个月还有多少天到月底，然后计算钱

		for (int i = m1 + 1; i<m2; ++i)//这里是计算y1的月份到y2的月份之间的天数
		{
			sum += days[i] * (Isprime(i) == false ? 2 : 1);
		}
		sum += (d2)*(Isprime(m2) == false ? 2 : 1);  //此处计算y2多余出来相对应的月份的天数的钱
	}
	else//不同年
	{
		days[2] = IsLeapear(y1) ? 29 : 28;
		sum += (days[m1] - d1 + 1)*(Isprime(m1) == false ? 2 : 1); //计算y1的那个月还有多少天到月底，然后计算钱

		for (int i = m1 + 1; i <= 12; ++i)  //此处计算的是y1所处的月份到年底的天数的钱
		{
			sum += days[i] * (Isprime(i) == false ? 2 : 1);
		}

		for (int i = y1 + 1; i<y2; ++i) //此处计算的是y1的年份到y2的年份所相差的天数的钱
		{
			days[2] = IsLeapear(i) ? 29 : 28;
			for (int j = 1; j <= 12; ++j)
			{
				sum += days[j] * (Isprime(j) == false ? 2 : 1);
			}
		}

		//此处计算的是y2所对应的年份、月份、天数，然后各自计算出钱
		days[2] = IsLeapear(y2) ? 29 : 28;

		for (int i = 0; i<m2; ++i)    //y2对应的月份天数
		{
			sum += days[i] * (Isprime(i) == false ? 2 : 1);
		}
		sum += (d2)*(Isprime(m2) == false ? 2 : 1);//y2多出来的天数
	}
	return sum;
}

int main()
{
	int y1, m1, d1;
	int y2, m2, d2;
	while (cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2)
	{
		cout << getSummoney(y1, m1, d1, y2, m2, d2) << endl;
	}
	return 0;
}