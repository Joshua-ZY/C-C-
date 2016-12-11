#include <stdio.h>

/*23�������Ϸ
���дһ���򵥵�23 �������Ϸ����ʵ���˸�������������Ϸ�ĳ���Ϊ�˷�������Զ����⣬
���������ƶ��Ļ������������ģ����ǽ�ʣ��Ļ�������3������ټ�1����Ϊ�����ÿ��ȡ�ߵ�
����������������������ߵĻ��������ʣ�µĻ�������򽫼�����������ߵĻ������1������
����������Բ�ȡ��ʣ�µĻ����Ϊ1ʱ������ȡ��1����񡣼�����Ϸ�������£�
1����Ϸ�߿�ʼӵ��23��������
2��ÿ����Ϸ����������1 ����2 ����3 �����
3��˭ȡ�����һ�����Ϊʧ���ߡ�*/

int computer(int remain) {
	if (remain == 1) {
		printf("The number of matches that have been moved by the computer is:%d\n", 1);
		return 0;
	}
	else if (remain <= 3) {
		printf("The number of matches that have been moved by the computer is:%d\n", remain - 1);
		return 1;
	}
	else {
		int plan = remain % 3 + 1;
		printf("The number of matches that have been moved by the computer is:%d\n", plan);
		return remain - plan;
	}
}

int person(int remain) {
	int plan;
	do	{
		printf("Please enter the number of matches you are moving:\n");
		scanf("%d", &plan);
		if (plan > 3 || plan < 1 || plan > remain)
			printf("The number you entered is wrong��please re-enter!\n");
	} while (plan > 3 || plan < 1 || plan > remain);
	printf("The number of matches you are moving is:%d\n", plan);
	return remain - plan;
}

int main() {
	int remain = 23;
	printf("Game start!\n");
	printf("Note: the maximum number is 3\n");
	while (1) {
		remain = person(remain);
		printf("The number of matches left is:%d\n", remain);
		if (remain == 0) {
			printf("I'm sorry. You lost!\n");
			return 0;
		}

		remain = computer(remain);
		printf("The number of matches left is:%d\n", remain);
		if (remain == 0) {
			printf("Congratulations��You won!\n");
			return 0;
		}
	}
}
