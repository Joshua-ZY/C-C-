#include <stdio.h>

/*�����ж�
���������ڼ��ĵ�һ����ĸ�������ִ�Сд�����ж�һ�������ڼ��������һ����ĸһ����
������жϵڶ�����ĸ(Сд)�����������data error����*/

int main() {
	char input1, input2;
	printf("please input the first letter of someday:\n");
	scanf("%c", &input1);
	switch (input1)
	{
	default:printf("data error\n");	break;
	case('M'):
	case('m'):printf("monday\n");	break;
	case('T'):
	case('t'):switch (printf("please input second letter:\n"), scanf(" %c", &input2), input2) //���ű��ʽ
															//ִ����ǰ�����е�������������һ�������ֵ
													//ͬʱע��%cǰ��Ҫ���ո���Ϊ��һ���������������
													//�س������ڴ��Ҫ�ÿո�Ե�������input2��������ݾ��ǻس���
	{
	default:printf("data error\n");	break;
	case('u'):printf("tuesday\n"); break;
	case('h'):printf("thursday\n"); break;
	}break;
	case('W'):
	case('w'):printf("wednesday\n"); break;
	case('F'):
	case('f'):printf("friday\n"); break;
	case('S'):
	case('s'):switch (printf("please input second letter:\n"), scanf(" %c", &input2), input2)
	{
	default:printf("data error\n");	break;
	case('a'):printf("saturday\n"); break;
	case('u'):printf("sunday\n"); break;
	}break;
	}
	return 0;
}