#include <stdio.h>

/*��ż������
����n��������n�Ӽ������룬����n��ֵ������100��������ż���ֳ����鲢�����������У���һ��Ϊ����������
�ڶ���Ϊ����ż�����������ݵ����˳��������˳����ͬ��
����ԭ��������ʾ��void Seperate(int a[], int n); //����a[]����û������n������
����˼·��������ѭ���ֱ����������ż�����������һ����ʱ��"%d"��ʽ�ַ��������������ʱ��",%d"��ʽ��
�����ñ�־������¼���ж��Ƿ��ǵ�һ��������ż����*/

void Seperate(int a[], int n) {
	//�������
	int first_flag = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			if (first_flag) {
				printf("%d", a[i]);
				first_flag = 0;
			}
			else
				printf(",%d", a[i]);
		}
	}
	printf("\n");
	//���ż��
	first_flag = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			if (first_flag) {
				printf("%d", a[i]);
				first_flag = 0;
			}
			else
				printf(",%d", a[i]);
		}
	}
	printf("\n");
}

int main() {
	int n, numarr[100];
	printf("Input n:");
	scanf("%d", &n);
	printf("Input numbers:");
	for (int i = 0; i < n; i++) {
		scanf("%d", &numarr[i]);
	}
	Seperate(numarr, n);
	return 0;
}