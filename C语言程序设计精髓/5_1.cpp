#include <stdio.h>

/*6λ����������
�Ӽ�������6λ��������0~9��ɵ����롣�û�ÿ����һ�����벢���س����󣬳�������жϣ������
���֣���ԭ����������֣�����ʾ�û�Ŀǰ�Ѿ������˼�λ���룬ͬʱ����������һλ���룻����
������ʾ"error"�������û�����������һλ���롣ֱ���û����������ȫ��������Ϊֹ��*/

int main() {
	char input, backspace;
	printf("Input your password:\n");
	for (int i = 0; i < 6; ) {
		scanf("%c%c", &input, &backspace);
		if (input >= 48 && input <= 57) {
			printf("%c, you have enter %d-bits number\n", input, i + 1);
			i++;
		}
		else
			printf("error\n");
	}
	return 0;
}
