#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

int main()
{
	        vector<vector<int> > board;
			int board[3][3] = { { 1, 0, 1 },{ 1, -1, -1 },{1, -1, 0} };

			if (board[0][0] + board[0][1] + board[0][2] == 3)
				return true;
			if (board[1][0] + board[1][1] + board[1][2] == 3)
				return true;
			       if (board[2][0] + board[2][1] + board[2][2] == 3)
				     return true;

			if (board[0][0] + board[1][0] + board[2][0] == 3)
				return true;
			      if (board[0][1] + board[1][1] + board[2][1] == 3)
				    return true;
			if (board[0][2] + board[1][2] + board[2][2] == 3)
				return true;

			if (board[0][0] + board[1][1] + board[2][2] == 3)
				return true;

			        if (board[0][2] + board[1][1] + board[2][0] == 3)
				       return true;


				return false;
	

	system("pause");
	return 0;
}
