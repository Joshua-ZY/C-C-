#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n;
	cin >> k;
	int bigk[100] = {0}, num, temp;//����һ������Ϊ100����ֹ�������������飬���������������ֵ��ʼ��Ϊ0;
	//bigk��ǰk�����������Ӵ�С���У����bigk[k -1]���ǵ�k�����
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num > bigk[k -1]) {
			for (int i = 0; i < k; i++) {
				if (num > bigk[i]) {
					temp = num;
					num = bigk[i];
					bigk[i] = temp;
				}
			}
		}
	}
	cout << bigk[k - 1] << endl;
	return 0;
}
