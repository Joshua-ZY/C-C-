#include <stdio.h>

/*�������������������ż���ĸ�����4�֣�
��Ŀ���ݣ��Ӽ�������һϵ��������������-1��ʾ���������-1��������������ݣ�����д�����ж���������
��������ż���ĸ���������û�����ĵ�һ�����ݾ���-1����������"over!"�������û�ÿ����һ�����ݣ�
�������������������ż����ֱ���û�����-1Ϊֹ���ֱ�ͳ���û�����������������ż���ĸ�����*/

int main() {
	int num, counter_odd = 0, counter_even = 0;
	printf("Please enter the number:\n");
	while (1) {
		scanf("%d", &num);
		if (num == -1) {
			if (counter_odd == 0 && counter_even == 0){
				printf("over!\n");
				break;
			}
			else
				break;
		}
		else if (num % 2 == 0) {
			printf("%d:even\n", num);
			counter_even++;
		}
		else {
			printf("%d:odd\n", num);
			counter_odd++;
		}
	}
	printf("The total number of odd is %d\n", counter_odd);
	printf("The total number of even is %d\n", counter_even);
	return 0;
}
