��һ�䳤���εķ��ӣ��������˺�ɫ����ɫ������ɫ�������δ�ש����վ������һ���ɫ�Ĵ�ש�ϣ�ֻ�������ڵģ����������ĸ����򣩺�ɫ��ש�ƶ�����дһ�����򣬼������ܹ��ܹ�������ٿ��ɫ�Ĵ�ש��

�������� :
��������������ݡ�

ÿ�����ݵ�һ������������ m �� n��1��m, n��20���������� m �У�ÿ�а��� n ���ַ���ÿ���ַ���ʾһ���ש����ɫ���������£�

1. ��.������ɫ�Ĵ�ש��
2. ��#������ɫ�Ĵ�ש��
3. ��@������ɫ�Ĵ�ש��������վ������ש�ϡ����ַ���ÿ�����ݼ�����Ψһ����һ�Ρ�


������� :
��Ӧÿ�����ݣ�����ܹ��ܹ�������ٿ��ɫ�Ĵ�ש��

//���룺
9 6
....#.
.....#
......
......
......
......
......
#@...#
.#..#.

//�����
45

// write your code here cpp
#include<iostream>
#include<vector>
using namespace std;

int count = 0;
void Result(vector<vector<char>>&arr, int x, int y)
{
	if (x<0 || x >= arr.size() || y<0 || y >= arr[0].size() || arr[x][y] == '#')  //�߲�ͨ
	{
		return;
	}
	count++;
	arr[x][y] = '#'; //�߹�֮��Ҳ��������
	Result(arr, x - 1, y);  //��������
	Result(arr, x + 1, y);
	Result(arr, x, y - 1);
	Result(arr, x, y + 1);
}

int main()
{
	int m = 0, n = 0;
	while (cin >> m >> n)
	{
		vector<vector<char>> v(m, vector<char>(n));
		int x, y = 0, res = 0;
		for (int i = 0; i<m; ++i)
		{
			for (int j = 0; j<n; ++j)
			{
				cin >> v[i][j];
				if (v[i][j] == '@')
				{
					x = i;
					y = j;
				}
			}
		}
		Result(v, x, y);
		cout << count << endl;
		count = 0;
	}
	return 0;
}