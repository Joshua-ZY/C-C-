#include <stdio.h>

/*Ѱ�Ұ���
�����ҳ�һ��M*N�����еİ��㣬����λ���ϵ�Ԫ���Ǹ����ϵ����ֵ���Ǹ����ϵ���Сֵ��
���������û�а��㣬�������No saddle point����
��֪����ԭ�ͣ�void FindSaddlePoint(int a[][N], int m, int n);�ڸú����������
�ް������Ϣ��*/

#define M 10 //�ú궨���������ߴ�M��NΪ10*10����������������޸����
#define N 10

void FindSaddlePoint(int a[][10], int m, int n) {
	int max_of_row[10], min_of_col[10];

	//�ҳ�ÿһ�е����ֵ
	for (int i = 0; i < m; i++) {
		int max = a[i][0]; //��ÿһ�е����ֵmax�ĳ�ֵ��Ϊÿһ�еĵ�һ��ֵ
		for (int j = 0; j < n; j++) {
			if (a[i][j] > max)
				max = a[i][j];
		}
		max_of_row[i] = max;
	}
	//�ҳ�ÿһ�е����ֵ
	for (int i = 0; i < n; i++) {
		int min = a[0][i]; //��ÿһ�е����ֵmax�ĳ�ֵ��Ϊÿһ�еĵ�һ��ֵ
		for (int j = 0; j < m; j++) {
			if (a[j][i] < min)
				min = a[j][i];
		}
		min_of_col[i] = min;
	}
	//�Ұ���
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == max_of_row[i] && a[i][j] == min_of_col[j]) {
				printf("a[%d][%d] is %d\n", i, j, a[i][j]);
				return;
			}
		}
	}
	printf("No saddle point!\n");
	return;
}

int main() {
	int m, n, mat[M][N];
	printf("Input m,n:\n");
	scanf("%d,%d", &m, &n);
	printf("Input matrix:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);
	}
	FindSaddlePoint(mat, m, n);
	return 0;
}