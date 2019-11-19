#define _CRT_SECURE_NO_WARNINGS 1


//3-->0011
//Êä³ö2



//#include<iostream>
//using namespace std;
//int main()
//{
//	int byte;
//	while (cin >> byte)
//	{
//		int k = 0;
//		for (k = 0; byte != 0; k++)
//		{
//			byte = byte&(byte << 1);
//		}
//		cout << k << endl;
//	}
//	return 0;
//}

#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int max = 0;
		int count = 0;
		while (n)
		{
			if (n & 1)
			{
				count++;
				if (max<count)
				{
					max = count;
				}
			}
			else
			{
				count = 0;
			}
			n = n >> 1;
		}
		cout << max << endl;
	}
	return 0;
}
