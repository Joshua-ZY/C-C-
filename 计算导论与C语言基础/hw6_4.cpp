#include <iostream>
using namespace std;

/*����⣣4�������֧��
�Ӽ�������һָ������ԪΪ��λ����345����Ȼ�����֧���ý��ĸ��������������������ʾ100Ԫ��50Ԫ��20Ԫ��10Ԫ��5Ԫ��1Ԫ�������ţ�Ҫ����ʹ�ô����ĳ�Ʊ��
����һ��С��1000����������
������У�ÿ����ʾһ�����������ϵ��·ֱ��ʾ100Ԫ��50Ԫ��20Ԫ��10Ԫ��5Ԫ��1Ԫ����ҵ�����*/

int main() {
	int n, remain;
	cin >> n;
	cout << n / 100 << endl;
	remain = n % 100;
	cout << remain / 50 << endl;
	remain %= 50;
	cout << remain / 20 << endl;
	remain %= 20;
	cout << remain / 10 << endl;
	remain %= 10;
	cout << remain / 5 << endl;
	remain %= 5;
	cout << remain << endl;
	return 0;
}