#include <stdio.h>

/*����Ĵ�v2.0
�������Ĺ����ǽ��ٷ��Ƴɼ�ת��Ϊ5���Ƴɼ������幦���ǣ�����û�������ǷǷ��ַ����߲��ں��������ڵ�����
�������������a,����102����-45�ȣ����������� Input error!���������û���������,ֱ������Ϸ�����Ϊֹ��
������ת��Ϊ5���������Ŀǰ������ڴ����뽫���޸���ȷ���������������������ʾ��������*/

int input() {
	int score;
	char eater;
	printf("Please input score:\n");
	//scanf�ķ���ֵ�ǽ��յ��˼�����������Ϊ�˴��Ľ��ղ�������������%d��
	//�������ֵ��char���ͱ���a���߸��ַ��ţ���ôscanf���ܲ���Ϊ0������0�����Կ��������while����б�
	//scanf�Ƿ���ճɹ���������ɹ����ٴ�ִ��scanf
	while (!scanf("%d", &score)) {
		//��Ҫע����ǣ����ٴ�ִ��scanf֮ǰ����Ҫ��֮ǰ��������scanf�޷����ܵ��ַ�
		//�Ե�����Ϊ�������char����scanf���ܵ���%d��������char����ֵ�������뻺��������ţ�
		//���������һ��eater����Ե�����ô�ͻ���������ѭ����scanf����ֵ��Զ��0��ִ��whileѭ��������
		//scanf�����������޷���0����
		scanf("%c", &eater);
		printf("Input error!\n");
		printf("Please input score:\n");
	}
	return score;
}

int main()
{
	int score;
	char grade;
	score = input();
	//�ؼ��������input���ڷ�Χ�ڣ������������룬��˿��԰�inputд��һ������������call
	while (score < 0 || score > 100) {
		printf("Input error!\n");
		score = input();
	}
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'E';
	printf("grade: %c\n", grade);
	return 0;
}
