#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<stdlib.h>
#include<string>
using namespace std;

void HeapSort(vector<int> &input, int root, int end)
{
	for (int i = end - 1; i < input. size(); --i)
	{
		int parent = (i + root - 1) / 2;
		if (input[parent]>input[i])
		{
			int temp = input[parent];
			input[parent] = input[i];
			input[i] = temp;
		}
	}
}

int main()
{
	//vector<int> v;
	string s;
	vector<int> input;
	vector<int> v;
	int k;
	cin >> k;
	while (cin >> s)
	{
		for (int i = 0; i < k; ++i)
		{
			HeapSort(input, i, input.size());
			v.push_back(input[i]);
		}
	}
	for (int i = 0; i < k; ++i)
	{
		cout << v[i] << " ";
	}
	system("pause");
	return 0;
}
