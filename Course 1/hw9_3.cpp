#include <iostream>
using namespace std;

/*����:һ����'.'��β�ļ�Ӣ�ľ��ӣ�����֮���ÿո�ָ���û����д��ʽ������������ʽ
����:һ����'.'��β�ļ�Ӣ�ľ��ӣ����Ȳ�����500��������֮���ÿո�ָ���û����д��ʽ������������ʽ
���:�þ�������ĵ��ʡ��������һ�����������һ��*/

int main() {
	char str[501];
	cin.get(str, 500, '.');
	int count_start = 0, count_end = 0, longest_start = 0, longest_length = 0;
	for (int i = 0; i < 500; i++) {
		if (str[i] == ' ' || str[i] == '\0') {
			if ((count_end - count_start) > longest_length) {
				longest_length = count_end - count_start;
				longest_start = count_start;
			}
			count_start = i + 1;
		}
		count_end++;
		if (str[i] == '\0')
			break;
	}
	for (int i = 0; i < longest_length; i++)
		cout << str[longest_start + i];
	return 0;
}