#include <stdio.h>

/*������ķ����߶�
��Ŀ���ݣ�һ�����100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룬�����²�����......��
�����ڵ�5�κ͵�10�����ʱ���ֱ𹲾����˶����ף���5�κ͵�10�η����ֱ��Ƕ�ߣ�Ҫ�������
������С�����3λ���û��Ӽ���������Ҫ����ĵ�n�Σ�n<=15�������������и��������������;�
Ϊfloat��*/

int main() {
	float distance = 0, height = 100;
	int times;
	printf("Input:\n");
	scanf("%d", &times);
	for (int i = 0; i < times; i++) {
		if (i == 0)
			distance += height;
		else
			distance += height * 2;
		height /= 2;
	}
	printf("%d times:\n", times);
	printf("%.3f\n", distance);
	printf("%.3f\n", height);
	return 0;
}
