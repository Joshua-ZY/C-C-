#include <stdio.h>

/*�ݹ鷨���������������Լ����4�֣�
��Ŀ���ݣ�
�������Լ�������ʼ��㡣��������a��b����a>bʱ����a�к�����b��ͬ�Ĺ�Լ������a��ȥ��b��
ʣ��Ĳ���a-b��ҲӦ������b��ͬ�Ĺ�Լ������a-b��b���㹫Լ�����൱�ڶ�a��b���㹫Լ��������
ʹ�����Լ�����������ʣ�ֱ��a��b���Ϊֹ����ʱ��a��b�������ǵ����Լ�������������ʣ�
Ҳ���Ա�ʾΪ�� 
����1  ���a>b����a��b��a-b��b�����Լ����ͬ����Gcd(a, b) = Gcd(a-b, b)
����2  ���b>a����a��b��a��b-a�����Լ����ͬ����Gcd(a, b) = Gcd(a, b-a)
����3  ���a=b����a��b�����Լ����aֵ��bֵ��ͬ����Gcd(a, b) = a = b*/

unsigned int GCD(unsigned int a,unsigned int b) {
	int r = a % b;
	if (r == 0)
		return b;
	else
		return GCD(b, r);
}

int main() {
	int a, b, gcd;
	printf("Input a,b:");
	scanf("%d,%d", &a, &b);
	if (a <= 0 || b <= 0) {
		printf("Input error!\n");
	}
	else {
		gcd = GCD(a, b);
		printf("%d\n", gcd);
	}
	return 0;
}