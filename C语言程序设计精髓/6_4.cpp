#include <stdio.h>

/*ĳ��ĳ���ж����죨���ǵ����꣩
�Ӽ�������һ����ݺ��·ݣ���������ж����죨�������꣩����switch����̡�*/

int leap_year(int year) {
	if (year % 400 == 0)
		return 1;
	else if (year % 4 == 0 && year % 100 != 0)
		return 1;
	else
		return 0;
}

int main() {
	int year, month, is_leap_year;
	printf("Input year,month:\n");
	scanf("%d,%d", &year, &month);

	if (year < 0 || month < 0 || month > 12) {
		printf("Input error!\n");
		return 0;
	}
	is_leap_year = leap_year(year);

	switch (month)
	{case (1):
	case (3):
	case (5):
	case (7):
	case (8):
	case (10):
	case (12): printf("31 days\n"); break;
	case (4):
	case (6):
	case (9):
	case (11):printf("30 days\n"); break;
	case (2):switch (is_leap_year)
	{case(0): printf("28 days\n"); break;
	case(1): printf("29 days\n"); break;
	}break;
	}
	return 0;
}
