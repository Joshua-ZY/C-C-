#include <stdio.h>

/*���������ж�
��Ŀ���ݣ��Ӽ�������һ��int�͵�������n����֪��0<n<10000������д�����ж�n�����ĸ����䡣
����û���������ݲ���ָ���ķ�Χ�������� "error!"�����磬����265��������������� 
100-999��*/

int main() {
	int num;
	printf("Please enter the number:\n");
	scanf("%d", &num);
	if (num <= 0 || num >= 10000)
		printf("error!\n");
	else if (num >= 1000)
		printf("%d: 1000-9999\n", num);
	else if (num >= 100)
		printf("%d: 100-999\n", num);
	else if (num >= 10)
		printf("%d: 10-99\n", num);
	else
		printf("%d: 0-9\n", num);
	return 0;
}