#include <stdio.h>

/*�Ӵ��ж�
�Ӽ���������������С��80���ַ���A��B����A�ĳ��ȴ���B�ĳ��ȣ�����ж�B�ǲ���A���Ӵ�������ǣ�
�������Yes�������������No����������ν�ĸô����Ӵ���ָ�ַ������������������ַ���ɵ������С�
����ԭ�ͣ�int IsSubString(char a[], char b[])
�������ܣ��ж�b�Ƿ���a���Ӵ������򷵻�1�����򷵻�0*/
 
int IsSubString(char a[], char b[]){
	for (int i = 0; i < 80; i++)
		if (a[i]) {
			if (a[i] == b[0]) {
				for (int j = 0; j < 80; j++) {
					if (b[j]) {
						if (a[i + j] != b[j]) //ע�⣬���a[i] = b[0],�Һ����һֱ��ȣ�ֱ��a[i + j] != b[j]����ô
							break;			//��ʱ���ܼ����Ƚ�a[i + j + 1]�ǲ��ǵ���b[0]������Ӧ�ô�a[i = 1]����
											//�ȣ��������ܼ���a = "aaab", b = "aab"���������
					}
					else
						return 1;
				}
			}
		}
		else
			return 0;
}

int main() {
	int ans;
	char str1[80], str2[80];

	printf("Input the first string:");
	gets_s(str1);
	printf("Input the second string:");
	gets_s(str2);

	ans = IsSubString(str1, str2);
	if (ans)
		printf("Yes");
	else
		printf("No");
	printf("\n");
	return 0;
}