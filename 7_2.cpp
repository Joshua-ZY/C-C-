#include <stdio.h>

/*Ѱ�Ұ���
����һ��n*n����A������A�İ�����һ��λ�ã�i��j�����ڸ�λ���ϵ�Ԫ���ǵ�i���ϵ����������j���ϵ���С����һ������AҲ����û�а��㡣
����������ҳ�A�İ��㡣
����ĵ�1����һ��������n, ��1<=n<=100����Ȼ����n�У�ÿһ����n��������ͬһ������������֮����һ�������ո�
������ľ�������ҵ����㣬��������±ꡣ�±�Ϊ�������֣���һ���������кţ��ڶ����������кţ�����0��ʼ������
����Ҳ����������NO��
��Ŀ���������ݱ�֤�˲�����ֶ�����㡣*/

//�޸��Թ�����HIT C���Գ�����ƾ���9_3��������ĸ�����һЩ��

#define M 100 //�ú궨���������ߴ�M��NΪ10*10����������������޸����
#define N 100

void FindSaddlePoint(int a[][N], int m, int n) {
	int max_of_row[M], min_of_col[N];

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
				//printf("a[%d][%d] is %d\n", i, j, a[i][j]);
				printf("%d %d", i, j);
				return;
			}
		}
	}
	printf("NO\n");
	return;
}

int main() {
	int m, n, mat[M][N];
	scanf("%d,%d", &m);
	n = m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);
	}
	FindSaddlePoint(mat, m, n);
	return 0;
}
