#include <iostream>
using namespace std;

/*����ʮ����������ʮ�������������������������������ǰ��ż���ں�*/

int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	// ð�ݣ����ϱȽ����ڵ������������˳����ˣ���ô�ͽ���
	for (int i = 0; i < 9; i++) {
		for (int j = 1; j < 10 - i; j++) {
			// ����ͨ��ð������ͬ����ֻ��ͨ�������ֵĴ�С����˳��
			// �����ߵ�Ϊż�����ұߵ�Ϊ��������ô˳��Ҳ��Ҫ�ߵ�
			bool leftIsOdd = a[j - 1] % 2 == 1;
			bool rightIsOdd = a[j] % 2 == 1;
			if ((!leftIsOdd && rightIsOdd) || (leftIsOdd == rightIsOdd && a[j - 1] > a[j])) {
				int temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}