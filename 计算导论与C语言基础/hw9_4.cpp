#include <iostream>
#include <iomanip>
using namespace std;

/*����:��main�����У� ����һ��5*5�ľ�������������ݣ�������n��m��ֵ���ж�n��m�Ƿ������鷶Χ�ڣ�
������ڣ������error������ڷ�Χ�ڣ���n�к�m�н������������n��m����¾���
����:5*5��������ݣ��Լ�n��m��ֵ��
���:������ɽ����������error,����ɽ�����������¾���*/

int main() {
	int mat[25], n, m;
	for (int i = 0; i < 25; i++)
        cin >> mat[i];
	cin >> n >> m;
	if (n > 4 || n < 0 || m > 4 || m < 0) {
		cout << "error" << endl;
		return 0;
	}
	else {
		int temp[5];
		for (int i = 0; i < 5; i++) {
			temp[i] = mat[n * 5 + i];
			mat[n * 5 + i] = mat[m * 5 + i];
			mat[m * 5 + i] = temp[i];
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout<< setw(4) << mat[i * 5 + j];
		cout << endl;
	}
	return 0;
}
