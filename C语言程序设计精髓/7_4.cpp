#include <stdio.h>

/*��ԭ�������ʽ��4�֣�
��д��������ʽ��XYZ + YZZ = ��λ��N����XYZ��ֵ����������XYZ��YZZ��ӵĺ�N��99<n<1000����ֵҪ��Ӽ������롣*/

//ע�⣬��Ŀ�в�û��˵XYZ����ȣ��������ע���˵���γ��򲻶ԣ�������ǶԵġ�

/*
int main() {
	int num;
	printf("Input n(n<1000):\n");
	scanf("%d", &num);
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			if (y != x) {
				for (int z = 0; z < 10; z++) {
					if (z != x && z != y) {
						if (100 * x + 110 * y + 12 * z == num) {
							printf("X=%d,Y=%d,Z=%d\n", x, y, z);
							return 0;
						}
					}
				}
			}
		}
	}
	printf("Invalid\n");
	return 0;
}
*/

int main() {
	int num;
	printf("Input n(n<1000):\n");
	scanf("%d", &num);
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			for (int z = 0; z < 10; z++) {
				if (100 * x + 110 * y + 12 * z == num) {
					printf("X=%d,Y=%d,Z=%d\n", x, y, z);
					return 0;
				}
			}
		}
	}
	printf("Invalid\n");
	return 0;
}