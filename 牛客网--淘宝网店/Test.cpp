NowCoder���Ա��Ͽ���һ�����ꡣ���������·�Ϊ������ʱ�򣬵���ÿ����׬1Ԫ������ÿ����׬2Ԫ��
���ڸ���һ��ʱ�����䣬������������������ж��١�

�������� :
��������������ݡ�

ÿ�����ݰ�����������from��to(2000 - 01 - 01 �� from �� to �� 2999 - 12 - 31)��

������������������ʾ���ÿո������year month day��


������� :
��Ӧÿһ�����ݣ�����ڸ��������ڷ�Χ��������ʼ�ͽ������ڣ�����׬����Ǯ��

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
			sum += (d2 - d1 + 1)*(Isprime(m1) == false ? 2 : 1); //ͬ��ͬ��
			return sum;
		}
		sum += (days[m1] - d1 + 1)*(Isprime(m1) == false ? 2 : 1);//ͬ�꣬Ȼ�����y1���Ǹ��»��ж����쵽�µף�Ȼ�����Ǯ

		for (int i = m1 + 1; i<m2; ++i)//�����Ǽ���y1���·ݵ�y2���·�֮�������
		{
			sum += days[i] * (Isprime(i) == false ? 2 : 1);
		}
		sum += (d2)*(Isprime(m2) == false ? 2 : 1);  //�˴�����y2����������Ӧ���·ݵ�������Ǯ
	}
	else//��ͬ��
	{
		days[2] = IsLeapear(y1) ? 29 : 28;
		sum += (days[m1] - d1 + 1)*(Isprime(m1) == false ? 2 : 1); //����y1���Ǹ��»��ж����쵽�µף�Ȼ�����Ǯ

		for (int i = m1 + 1; i <= 12; ++i)  //�˴��������y1�������·ݵ���׵�������Ǯ
		{
			sum += days[i] * (Isprime(i) == false ? 2 : 1);
		}

		for (int i = y1 + 1; i<y2; ++i) //�˴��������y1����ݵ�y2�����������������Ǯ
		{
			days[2] = IsLeapear(i) ? 29 : 28;
			for (int j = 1; j <= 12; ++j)
			{
				sum += days[j] * (Isprime(j) == false ? 2 : 1);
			}
		}

		//�˴��������y2����Ӧ����ݡ��·ݡ�������Ȼ����Լ����Ǯ
		days[2] = IsLeapear(y2) ? 29 : 28;

		for (int i = 0; i<m2; ++i)    //y2��Ӧ���·�����
		{
			sum += days[i] * (Isprime(i) == false ? 2 : 1);
		}
		sum += (d2)*(Isprime(m2) == false ? 2 : 1);//y2�����������
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