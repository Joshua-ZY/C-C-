#include <stdio.h>

/*�ж�һ�����������м�λv1.0
��Ŀ���ݣ��Ӽ�������һ����������(int��)����д�����жϸ��������м�λ�����磬�Ӽ�����������16644,����������5λ��*/

int main() {
	int num, remain, bits = 0;
	printf("Please enter the number:\n");
	scanf("%d", &num);
	remain = num;
	while (remain != 0) {
		remain /= 10;
		bits++;
	}
	printf("%d: %d bits\n", num, bits);
	return 0;
}
