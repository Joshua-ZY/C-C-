#include <stdio.h>

/*��̼���a+aa+aaa+��+aa��a��n��a����ֵ
��Ŀ���ݣ���̼��� a+aa+aaa+��+aa��a��n��a����ֵ��n��a��ֵ�ɼ������롣���磬
��n=4,a=2,��ʾ����2+22+222+2222��ֵ��*/

int num_repeator(int a, int n) {
	int num = 0;
	for (int i = 0; i < n; i++) {
		num += a;
		a *= 10;
	}
	return num;
}

int main() {
	int a, n, sum = 0;
	printf("Input a,n:\n");
	scanf("%d,%d", &a, &n);
	for (int i = 0; i < n; i++) {
		sum += num_repeator(a, i + 1);
	}
	printf("sum=%ld\n", sum);
	return 0;
}