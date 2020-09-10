//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 15;
//int f[N][N];
//int main()
//{
//	int x, y;
//	cin >> x, y;
//	vector<vector<int>>res;
//	for (int i = 0; i<x; ++i)
//	{
//		for (int j = 0; j<y; ++j)
//		{
//			cin >> res[i][j];
//		}
//	}
//
//	for (int i = 1; i<x; i++)
//	{
//		for (int j = 1; j<y; ++j)
//		{
//			f[i][j] = min(f[i - 1][j], f[i][j - 1]) + res[i][j];
//		}
//	}
//	cout << 0 << endl;
//	return 0;
//}

//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//using namespace std;
//
//
//const int N = 15;
//
//int f[N][N];
//
//
//int x, y;
//int p_x, p_y;
//int i_x, i_y;
//int cnt = 0;
//
//void dfs(vector<vector<bool>>& books, int i, int j, int count)
//{
//	//cout << x << " " << y << endl; 
//	if (i == p_x && j == p_y)
//	{
//		if (count == x * y - 1)
//			cnt++;
//
//
//		return;
//	}
//	books[i][j] = 1;
//	static int pos[4][2] = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };
//
//	for (int k = 0; k < 4; k++)
//	{
//		int nx = i + pos[k][0];
//		int ny = j + pos[k][1];
//		if (nx < 0 || ny < 0 || nx >= x || ny >= y || books[nx][ny] == true)
//			continue;
//
//		dfs(books, nx, ny, count + 1);
//
//
//	}
//	books[i][j] = 0;
//}
//int main()
//{
//	cin >> x >> y;
//	cin >> i_x >> i_y;
//	cin >> p_x >> p_y;
//
//	int count = 0;
//	vector<vector<bool>> books(x, vector<bool>(y, false));
//	dfs(books, i_x, i_y, count);
//
//	cout << cnt << endl;
//}

#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

const int N = 15;

int f[N][N];


int x, y;
int p_x, p_y;
int i_x, i_y;
int cnt = 0;

void dfs(vector<vector<bool>>& books, int i, int j, int count)
{
	//cout << x << " " << y << endl; 
	if (i == p_x && j == p_y)
	{
		if (count == x * y - 1)
			cnt++;


		return;
	}
	books[i][j] = 1;
	static int pos[4][2] = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };

	for (int k = 0; k < 4; k++)
	{
		int nx = i + pos[k][0];
		int ny = j + pos[k][1];
		if (nx < 0 || ny < 0 || nx >= x || ny >= y || books[nx][ny] == true)
			continue;

		dfs(books, nx, ny, count + 1);


	}
	books[i][j] = 0;
}
int main()
{
	cin >> x >> y;
	cin >> i_x >> i_y;
	cin >> p_x >> p_y;

	int count = 0;
	vector<vector<bool>> books(x, vector<bool>(y, false));
	dfs(books, i_x, i_y, count);
	
	cout << cnt << endl;
	system("pause");
	return 0;
}
