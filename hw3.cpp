#include <iostream>
using namespace std;

int main() {
	int n;// nΪϸ��������
  // id��¼ϸ���ı��, rate��¼ϸ���ķ�ֳ�ʣ���i��ϸ����Ӧid[i]��rate[i]
	int id[100];
	double rate[100];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int initial, final;
		cin >> id[i] >> initial >> final;
		rate[i] = (double)final / initial;
	}

	// ������ϸ������(ð������
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			if (rate[j - 1] > rate[j])
			{
				int tempId = id[j - 1];
				id[j - 1] = id[j];
				id[j] = tempId;
				double tempRate = rate[j - 1];
				rate[j - 1] = rate[j];
				rate[j] = tempRate;
			}
		}
	}
	// ��¼���Ĳ��ֵ��λ��
	double maxDiff = 0;
	int maxIdx;
	for (int i = 0; i < n - 1; i++)
	{
		double diff = rate[i + 1] - rate[i];
		if (diff > maxDiff)
		{
			maxDiff = diff;
			maxIdx = i;
		}
	}
	//�������ֳ�ʽϴ������ϸ��
	cout << n - maxIdx - 1 << endl;
	for (int i = maxIdx + 1; i < n; i++)
	{
		cout << id[i] << endl;
	}
	//�������ֳ�ʽ�С������ϸ��
	cout << maxIdx + 1 << endl;
	for (int i = 0; i < maxIdx + 1; i++)
	{
		cout << id[i] << endl;
	}
	return 0;
}