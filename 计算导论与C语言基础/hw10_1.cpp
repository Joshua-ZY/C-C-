#include <iostream>
using namespace std;

/*�ж�����
����:�ж�ĳ���Ƿ������ꡣ
����:����ֻ��һ�У�����һ������a(0 < a < 3000)
���:һ�У������Ԫa�����������Y���������N*/

int main() {
	int year;
	cin >> year;
	if (year % 3200 != 0) {
		if (year % 400 == 0)
			cout << 'Y' << endl;
		else {
			if (year % 100 != 0 && year % 4 == 0)
				cout << 'Y' << endl;
			else
				cout << 'N' << endl;
		}
	}
	else
		cout << 'N' << endl;
	return 0;
}