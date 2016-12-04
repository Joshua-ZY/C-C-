#include <stdio.h>

/*����ת��v1.0
�ö�ά������Ϊ������������̼��㲢���n��n�׾����ת�þ������У�n��ֵ������10��n��ֵ���û��Ӽ������롣*/

void transpose(int mat[][10], int size){
	int temp;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			temp = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = temp;
		}
	}
}

int main() {
	int n, mat[10][10];
	printf("Input n:");
	scanf("%d", &n);
	printf("Input %d*%d matrix:\n", n, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);
	}

	transpose(mat, n);

	printf("The transposed matrix is:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%4d", mat[i][j]);
		printf("\n");
	}
	return 0;
}