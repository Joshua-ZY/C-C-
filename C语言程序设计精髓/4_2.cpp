#include <stdio.h>

/*��Ŀ���ݣ�
��֪ĳ������ͨ���⳵�շѱ�׼Ϊ�������Ϊ3����𲽷�Ϊ8Ԫ��10�������ڳ�������̵Ĳ��֣�ÿ����
����2Ԫ������10�������ϵĲ��ּ���50%�Ļؿղ����ѣ���ÿ����3Ԫ�����⳵Ӫ�˹����У���³��ͳ˿�Ҫ��
��ʱͣ���ȿ͵ģ���ÿ5���Ӽ���2Ԫ
���㣬����5���ӵĲ��Ʒѡ��Ӽ�������������ʻ��̣���ȷ��0.1����͵ȴ�ʱ�䣨��ȷ�����ӣ������̼�
�㲢����˿�Ӧ֧���ĳ��ѣ��Խ�������������룬��ȷ��Ԫ��
*/

int main() {
	float distance, money = 8; int time;
	printf("Input distance and time:");
	scanf("%f,%d", &distance, &time);
	if (distance > 10) {
		money += 3 * (distance - 10);
		distance = 10;
	}
	if (distance > 3) 
		money += 2 * (distance - 3);
	money += time / 5 * 2;
	printf("fee = %.0f\n", money);
	return 0;
}