#include <stdio.h>

/*���鲢��ӡ�÷�����
�÷�������ָ�þ�����ÿһ�С�ÿһ�С�ÿһ�Խ����ϵ�Ԫ��֮�Ͷ�����ȵġ��Ӽ�������
һ��5��5�ľ��󲢽������һ����ά���������У��������Ƿ�Ϊ�÷����󣬲����䰴ָ����
ʽ��ʾ����Ļ�ϡ�*/

int main() {
	int mat[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			scanf("%d", &mat[i][j]);
	}
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += mat[0][i];

	//�����
	for (int i = 0; i < 5; i++) {
		int check = 0;
		for (int j = 0; j < 5; j++) 
			check += mat[i][j];
		if (check != sum) {
			printf("It is not a magic square!\n");
			return 0;
		}
	}

	//�����
	for (int i = 0; i < 5; i++) {
		int check = 0;
		for (int j = 0; j < 5; j++)
			check += mat[j][i];
		if (check != sum) {
			printf("It is not a magic square!\n");
			return 0;
		}
	}

	//���Խ���
	int check1 = 0, check2 = 0;
	for (int i = 0; i < 5; i++) {
		check1 += mat[i][i];
		check2 += mat[i][4 - i];
	}
	if (check1 != sum || check2 != sum) {
		printf("It is not a magic square!\n");
		return 0;
	}

	//���
	printf("It is a magic square!\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			printf("%4d", mat[i][j]);
		printf("\n");
	}
	return 0;
}