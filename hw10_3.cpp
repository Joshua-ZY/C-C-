#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

/*����⣣3����Զ����
ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB
����������һ���(x,y)���������Զ��������֮��ľ��롣
���룺��һ���ǵ���n��n���ڵ���2��������ÿһ�д���һ���㣬������������x y��ɡ�
��������һ������Զ����֮��ľ��롣
ʹ��cout << fixed << setprecision(4) << dis << endl;�������ֵ����ȷ��С�����4λ��
fixed��setprecision����<iomanip>ͷ�ļ��ﶨ��ĸ�ʽ���Ʋ���������Ҫ#include <iomanip>.*/

int main() {
	int n;
	cin >> n;
	double p1[100], p2[100], distance, longest = 0;
	for (int i = 0; i < n; i++)
		cin >> p1[i] >> p2[i];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			distance = sqrt(pow(p1[j] - p1[i], 2) + pow(p2[j] - p2[i], 2));
			if (distance > longest)
				longest = distance;
		}
	}
	cout << fixed << setprecision(4) << longest << endl;
	return 0;
}