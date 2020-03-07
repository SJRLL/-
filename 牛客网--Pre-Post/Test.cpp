不要被吓死，要分析问题的本质，本质就是找到每一个根节点的子树
因为是m叉树，所以可以得到当前根节点的子树有多少组合方式，再
去到每一颗子树，如此递归直到找到所有叶子结点
比如    abejkcfghid     jkebfghicda
找到先序序列的第一个节点和后序序列的最后一个节点，这个节点就是当前的根节点
当前的根→a bejk  cfghi  d         jkeb  fghic  d a
↑        ↑       ↑              ↑        ↑  ↑
找到3个区间，说明这一层有三颗子树
遍历后序序列找到先序中根节点之后的节点，如果该点出现在根节点的前一个位置
说明只有一颗子树，ans *= m(m叉树)
不然就遍历整个后序序列，统计子树的个数k，然后算mCk ans *= mCk
对这些子树所在的区间递归，直到只有一个节点，返回
(tm牛客网这编辑器把格式搞得跟shi一样)
2 abc cba
2 abc bca
10 abc bca
13 abejkcfghid jkebfghicda
输出
4
1
45
207352860

#include<iostream>
#include<string>
using namespace std;
int c[21][21], n;
long long solve(string pre, string post){
	long long sum = 1;
	int num = 0, k = 0, i;
	pre.erase(pre.begin());
	post = post.substr(0, post.length() - 1);
	while (k<pre.length())
	for (i = 0; i<post.length(); i++)
	if (pre[k] == post[i]){
		sum *= solve(pre.substr(k, i - k + 1), post.substr(k, i - k + 1));
		num++, k = i + 1;
		break;
	}
	sum *= c[num][n];
	return sum;
}
void init(){
	int i, j;
	c[0][1] = c[1][1] = 1;
	for (i = 2; i<21; i++)
	for (c[0][i] = 1, j = 1; j <= i; j++)
	if (i == j) c[j][i] = 1;
	else c[j][i] = c[j - 1][i - 1] + c[j][i - 1];
}
int main(){
	string pre, post;
	init();
	while (cin >> n >> pre >> post&&n)
		cout << solve(pre, post) << endl;
}