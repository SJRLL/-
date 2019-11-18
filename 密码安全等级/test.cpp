#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int getSize(string& password)
{
	if (password.size() <= 4)
		return 5;
	else if (8 <= password.size())
		return 25;
	else
		return 10;
}

int getword(string& password)
{
	int bigword = 0;
	int smallword = 0;
	for (size_t i = 0; i<password.size(); ++i)
	{
		if (password[i] >= 'A' && password[i] <= 'Z')
		{
			bigword++;
		}
		else if (password[i] >= 'a' && password[i] <= 'z')
		{
			smallword++;
		}
	}
	if (bigword + smallword == 0)
	{
		return 0;
	}
	else
	{
		if (bigword == 0 || smallword == 0)
		{
			return 10;
		}
		else
		{
			return 20;
		}
	}
}

int getnum(string& password)
{
	int count = 0;
	for (size_t i = 0; i < password.size(); i++)
	{
		if (password[i] >= '0'  && password[i] <= '9')
			count++;
	}
	if (count == 1)
		return 10;
	else if (count == 0)
		return 0;
	else
		return 20;
}

int getother(string& password)
{
	int count = 0;
	for (size_t i = 0; i<password.size(); ++i)
	{
		if (!(password[i] <= '0' && password[i] >= '9') && !(password[i] >= 'a' && password[i] <= 'z') && !(password[i] >= 'A' && password[i] <= 'Z'))
			count++;
	}
	if (count == 0)
		return 0;
	else if (count == 1)
		return 10;
	else
		return 25;
}

int main()
{
	string password;
	int sum1 = 0;//保存长度的分数
	int sum2 = 0;//保存字母的分数
	int sum3 = 0;//保存数字的分数
	int sum4 = 0;//保存字符的分数
	int sum5 = 0;//保存奖励分
	int Sum = 0;//总分数
	while (getline(cin, password))
	{
		sum1 = getSize(password);
		sum2 = getword(password);//字母
		sum3 = getnum(password);//数字
		sum4 = getother(password);//符号
		if (sum2 > 0 && sum3 > 0)
		{
			if (sum4 > 0)
			{
				if (sum2 == 20)
					sum5 = 5;
				else
					sum5 = 3;
			}
			else
				sum5 = 2;
		}

		Sum = sum1 + sum2 + sum3 + sum4 + sum5;

		if (Sum >= 90)
		{
			cout << "VERY_SECURE" << endl;
		}
		else if (Sum >= 80)
		{
			cout << "SECURE" << endl;
		}
		else if (Sum >= 70)
		{
			cout << "VERY_STRONG" << endl;
		}
		else if (Sum >= 60)
		{
			cout << "STRONG" << endl;
		}
		else if (Sum >= 50)
		{
			cout << "AVERAGE" << endl;
		}
		else if (Sum >= 25)
		{
			cout << "WEAK" << endl;
		}
		else
			cout << "VERY_WEAK" << endl;
	}
	system("pause");
	return 0;
}


