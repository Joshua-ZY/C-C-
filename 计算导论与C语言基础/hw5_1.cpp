#include <iostream>
using namespace std;

//Լɪ�����⣬�����300ֻ����
int succedent[300]; //����������ڱ���һ�����Ӻ�һλ��˭��
					//���硰next[5]��ֵ��7������˵5�ź��ӵ���һλ��7�ź��ӣ�6�ź����Ѿ���֮ǰ�˳��ˡ�
int precedent[300];//����������ڱ���һ������ǰһλ��˭���÷�����������ơ�

int main() {
	int n, m;
	while (true) {
		cin >> n >> m;
		if (n == 0 && m == 0) //���������0 0��������whileѭ�����˳�����
			break;
		for (int i = 0; i < n - 1; i++) {
			succedent[i] = i + 1;
			precedent[i + 1] = i;
		}
		succedent[n - 1] = 0;
		precedent[0] = n - 1;

		int current = 0;
		while (true) {
			//һ��Ҫ��m�κţ���ô��m-1�α��ŵĺ��ӵ�succedent������Ҫ�˳�����ֻ����
			for (int count = 0; count < m - 1; count++)
				current = succedent[current]; //ѭ���������current����Ҫ�˳�����ֻ����

			int pre = precedent[current];//�˳��ĺ��ӵ�ǰ�������
			int suc = succedent[current];
			//��current�ź����˳������ǰ�ǰһλ�ġ���һλ��ָ��current����һλ��
			//��һλ�ġ�ǰһλ��ָ��current��ǰһλ�ͺ���
			succedent[pre] = suc; //ǰһλ�ġ���һλ��ָ��current����һλ
			precedent[suc] = pre; //��һλ�ġ�ǰһλ��ָ��current��ǰһλ
			current = suc; //һֻ�����˳�֮����һֻ���Ӵ�ͷ��ʼ�������ֿ�ʼִ��forѭ����
			if (pre == suc) {
			//���ֻʣ����ֻ���ӣ���ôÿ���˵�ǰλ�ͺ�λ����ͬһ���ˡ�
			//current���˳��ģ���ô��һ���������ĺ����ˡ�
			//���ǵ�����Ǵ�0��ŵģ����ʱҪ��һ
				cout << pre + 1 << endl;
				break; //��ǰ�������ݽ���
			}
		}
	}
	return 0;
}