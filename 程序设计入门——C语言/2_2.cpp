#include <stdio.h>

/*�źű���
���ߵ�̨��RS���źű�������������������ɵģ�
R(Readability) �źſɱ�ȼ�������.
S(Strength)    �ź�ǿ�ȼ���С.
����Rλ�ڱ����һλ������5������1��5���ֱ�ʾ.
Unreadable
Barely readable, occasional words distinguishable
Readable with considerable difficulty
Readable with practically no difficulty
Perfectly readable
����ڶ�λ��S�����־Ÿ�������1��9�е�һλ���ֱ�ʾ
Faint signals, barely perceptible
Very weak signals
Weak signals
Fair signals
Fairly good signals
Good signals
Moderately strong signals
Strong signals
Extremely strong signals
���ڣ���ĳ���Ҫ����һ���źű�������֣�Ȼ�������Ӧ�ĺ��塣�����59���������
Extremely strong signals, perfectly readable.
�����ʽ:
һ���������źű��档������ʮλ���ֱ�ʾ�ɱ�ȣ���λ���ֱ�ʾǿ�ȡ������������Χ��[11,59]�еĸ�λ��Ϊ0�����֣������Χ
������ֲ����ܳ����ڲ��������С�
�����ʽ��
һ�仰����ʾ����źű�������塣������Ŀ�е����֣��������ʾǿ�ȵ����֣����϶��źͿո�Ȼ���Ǳ�ʾ�ɱ�ȵ����֣�����
��š�ע��ɱ�ȵľ��ӵĵ�һ����ĸ��Сд�ġ�ע������ı����Ŷ���Ӣ�ĵġ�
*/

int main() {
	int r, s, rs;
	scanf("%d", &rs);
	r = rs / 10;
	s = rs % 10;
	switch (s)
	{
	case 1: printf("Faint signals, barely perceptible, "); break;
	case 2:printf("Very weak signals, "); break;
	case 3:printf("Weak signals, "); break;
	case 4:printf("Fair signals, "); break;
	case 5:printf("Fairly good signals, "); break;
	case 6:printf("Good signals, "); break;
	case 7:printf("Moderately strong signals, "); break;
	case 8:printf("Strong signals, "); break;
	case 9:printf("Extremely strong signals, "); break;
	}
	switch (r)
	{
	case 1: printf("unreadable.\n"); break;
	case 2:printf("barely readable, occasional words distinguishable.\n"); break;
	case 3:printf("readable with considerable difficulty.\n"); break;
	case 4:printf("readable with practically no difficulty.\n"); break;
	case 5:printf("perfectly readable.\n"); break;
	}
	return 0;
}