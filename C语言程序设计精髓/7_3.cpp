#include <stdio.h>

/*Ѱ����λ��v1.0
��дһ�������������������е��м���������ԭ��Ϊ�� int mid(int a, int b, int c); 
���������Ƿ���a��b��c�����д�Сλ���м���Ǹ�����*/

int find_mid(int a, int b, int c) {
	if ((a >= b && a <= c) || (a <= b && a >= c))
		return a;
	else
		return find_mid(b, c, a);
}

int main() {
	int a, b, c, mid;
	scanf("%d%d%d", &a, &b, &c);
	mid = find_mid(a, b, c);
	printf("The result is %d\n", mid);
	return 0;
}