#include <stdio.h>
#include <math.h>

/*��Ŀ���ݣ�
���ݵ������ʽ�����㲢���һԪ���η��̵�����ʵ����Ҫ��ȷ��С�����4λ������a��b��c��ֵ
���û��Ӽ������롣����û������ϵ����������ʵ����Ҫ�����������ʾ "error!"����������
�е��������;�Ϊfloat��*/

int main() {
	float a, b, c, judge, mid;
	printf("Please enter the coefficients a,b,c:\n");
	scanf("%f,%f,%f", &a, &b, &c);
	judge = pow(b, 2) - 4 * a * c;
	if (judge < 0)
		printf("error!\n");
	else {
		mid = sqrt(judge);
		printf("x1=%7.4f, x2=%7.4f\n", (-b + mid) / (2 * a), (-b - mid) / (2 * a));
	}
	return 0;
}