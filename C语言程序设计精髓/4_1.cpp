#include <stdio.h>

/*��λ���
��Ŀ���ݣ�
�Ӽ���������һ��4λ��������n����д��������Ϊ����2λ��������a��b�����㲢�����ֺ���������ļӡ������ˡ�
������������Ľ��������n=-4321,���ֺ����������Ϊa,b����a=-43,b=-21������������Ҫ��ȷ��С�����2λ,
��������Ϊfloat������ͳ���������Ҫ���ǳ���Ϊ0��������������ֺ�b=0,�������ʾ��Ϣ"The second operater 
is zero!"
*/

int main() {
	int num, num1, num2, sum, sub, multi, mod;
	float dev;
	printf("Please input n:\n");
	scanf("%d", &num);

	num1 = num / 1000 * 10 + num % 1000 / 100;
	num2 = num % 100 / 10 * 10 + num % 10;

	sum = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;

	printf("%d,%d\n", num1, num2);
	printf("sum=%d,sub=%d,multi=%d\n", sum, sub, multi);
	if (num2 == 0)
		printf("The second operater is zero!\n");
	else {
		dev = num1 / (float)num2;
		mod = num1 % num2;
		printf("dev=%.2f,mod=%d\n", dev, mod);
	}
	return 0;
}