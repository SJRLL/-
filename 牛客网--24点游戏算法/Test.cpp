��24����Ϸ�㷨�� 
��������������4��1 - 10�����֣�ͨ���Ӽ��˳����õ�����Ϊ24����ʤ�� ���룺 4��1 - 10�����֡�
[���������ظ�����ÿ�����ֽ�����ʹ��һ�Σ�����������֤���쳣����] 
����� 
true or false 
���������� ����4��int����

��������������ܷ�õ�24�㣬�����true���������false
ʾ��1�� 
���룺7 2 1 10

����� true

#include<iostream>
#include<vector>
using namespace std;
bool is24(const vector<double>& a, int total, double result) {//�����������˲������
	//result�����Ͳ�Ҫд��int��
	if (a.empty()){//�ݹ���ֹ����
		return total == result;
	}
	for (int i = 0; i < a.size(); i++){
		vector<double>b(a);
		b.erase(b.begin() + i);
		if (is24(b, total, result + a[i]) ||
			is24(b, total, result - a[i]) ||
			is24(b, total, result * a[i]) ||
			is24(b, total, result / a[i])){
			return true;
		}
	}
	return false;
}
int main(){
	vector<double>a(4, 0);
	while (cin >> a[0] >> a[1] >> a[2] >> a[3]){
		if (is24(a, 24, 0)){
			cout << "true" << endl;
		}
		else{
			cout << "false" << endl;
		}
	}
	system("pause");
	return 0;
}