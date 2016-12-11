#include <stdio.h>

/*���кϲ�
��֪������ͬ���ȵĽ������е����У��������еĳ��ȶ�������5�������̽���ϲ�Ϊһ�����У�ʹ�ϲ���������Ա��ֽ������С�
����ʾ�����������������е����зֱ𱣴�������a������b�У���һ��ѭ�����ν�����a������b�еĽϴ�����浽����c�У���һ��
�϶̵����д�����ٽ��ϳ�������ʣ��Ĳ������α��浽����c��ĩβ�������������еĳ��ȷֱ���m��n������һ��ѭ������ʱ����
iС��m����˵������a�е�����ʣ�࣬������a��ʣ������浽����c��ĩβ���ɣ���jС��n����˵������b�е�����ʣ�࣬������b��
ʣ������浽����c��ĩβ���ɡ��ڵ�һ��ѭ���У���k��¼������c�д��˶��ٸ������ڵڶ���ѭ���У��ʹ�k���λ�ÿ�ʼ�����洢
�ϳ�������ʣ�������
����ԭ�ͣ�void Merge(int a[], int b[], int c[], int m, int n)
�������ܣ����������ȷֱ�Ϊm��n���������е�������a��b�ϲ���ŵ�����c��*/

void Merge(int a[], int b[], int ans[], int m, int n) {
	int aid = 0, bid = 0, ansid = 0;
	while (aid < m && bid < n) {
		if (a[aid] >= b[bid]) {
			ans[ansid] = a[aid];
			aid++;
		}
		else {
			ans[ansid] = b[bid];
			bid++;
		}
		ansid++;
	}

	for (; ansid < m + n; ansid++) {
		if (aid == m) {//ע��aid����������++��������a����������Ԫ�أ���ôaȫ����֮��aidֵӦΪ3
			ans[ansid] = b[bid];
			bid++;
		}
		else {
			ans[ansid] = a[aid];
			aid ++;
		}
	}
	return;
}

int main() {
	int m, n, arr1[5], arr2[5], ans[10];
	printf("Input m,n:");
	scanf("%d,%d", &m, &n);
	printf("Input array a:");
	for (int i = 0; i < m; i++)
		scanf("%d", &arr1[i]);
	printf("Input array b:");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr2[i]);
	Merge(arr1, arr2, ans, m, n);
	for (int i = 0; i < m + n; i++) {
		printf("%4d", ans[i]);
	}
	printf("\n");
	return 0;
}