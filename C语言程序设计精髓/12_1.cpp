#include <stdio.h>

/*����ʱ���
�ýṹ�嶨��ʱ�����ͣ���̴Ӽ���������������ʱ�䣨����4ʱ55�ֺ�1ʱ25�֣������㲢���������ʱ��֮��ļ����
Ҫ�����ʱ���ĸ��š��ṹ�����Ͷ������£�
typedef struct clock
{
    int hour;
    int minute;
    int second;
} CLOCK;
����ԭ�ͣ� CLOCK CalculateTime(CLOCK t1, CLOCK t2);
�������ܣ����㲢��������ʱ��t1��t2֮��Ĳ�*/

typedef struct clock
{
	int hour;
	int minute;
	int second;
} CLOCK;

CLOCK CalculateTime(const CLOCK *t1, const CLOCK *t2) { //��ָ��Ч�ʸ��ߣ��������ṹ�屻�޸ģ�������const���б���
	int total1, total2, diff;
	CLOCK ans = { 0 };

	total1 = t1->hour * 60 + t1->minute;
	total2 = t2->hour * 60 + t2->minute;
	diff = total1 - total2;
	if (diff >= 0) {
		ans.hour = diff / 60;
		ans.minute = diff % 60;
	}
	else {
		ans.hour = - diff / 60;
		ans.minute = - diff % 60;
	}
	return ans;
}

int main() {
	CLOCK time1 = { 0 }, time2 = { 0 }, ans; //�ṹ���ʼ������ʼ��֮��δ��ֵ����ȫ��Ϊ0�������г�ʼ���Ļ�����Щ���ֵ��ȷ������

	printf("Input time one:(hour��minute):");
	scanf("%d,%d", &time1.hour, &time1.minute);
	printf("Input time two: (hour��minute):");
	scanf("%d,%d", &time2.hour, &time2.minute);

	ans = CalculateTime(&time1, &time2);
	printf("%dhour,%dminute\n", ans.hour, ans.minute);
	return 0;
}


