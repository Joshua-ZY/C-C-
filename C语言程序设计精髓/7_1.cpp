#include <stdio.h>

/*��Ŀ���ݣ�
��n����Χ����һ���ʵ�n���˶����ͣ���˵�ȵ�n-1���˴�2�ꣻ�ʵ�n-1���ˣ���˵�ȵ�n-2����
��2��,.....,�ʵ�3���ˣ���˵�ȵ�2���˴�2�ꣻ�ʵ�2���ˣ���˵�ȵ�1���˴�2�ꡣ��1����˵�Լ�
10�꣬�ʵ�n���˶����͡�
�ݹ麯��ԭ�ͣ�unsigned int ComputeAge(unsigned int n); */

unsigned int ComputeAge(unsigned int n) {
	if (n == 1)
		return 10;
	else
		return ComputeAge(n - 1) + 2;
}

int main() {
	int n, age;
	scanf("%u", &n);
	age = ComputeAge(n);
	printf("The person's age is %u\n", age);
	return 0;
}
