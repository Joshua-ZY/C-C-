#include <iostream>
#include <cstring>
using namespace std;

/*����⣣5���ַ�������
�������������ַ���str��substr��str���ַ�����������10��substr���ַ�����Ϊ3��
���ַ������������ַ�����β����'\0'������substr���뵽str��ASCII�������Ǹ�
�ַ����棬���ж�������ֻ���ǵ�һ����
���룺������������У�ÿһ��Ϊһ��������ݣ���ʽΪstr substr
���������ÿһ��������ݣ��������֮����ַ�����*/

int main() {
	while (1) {
        //��ʼ��str��substr��result������whileѭ�����棬����ÿ�ο�ʼ���ܹ��õ���ʼ���Ļ���
        //��һ������Ĳ���ֵ���ܻ�Ӱ�쵽��һ������
	    char str[11] = { '\0' }, substr[4] = { '\0' }, result[14] = { '\0' };
        if (!(cin >> str >> substr))
            break;
		int len_str = strlen(str), len_sub = strlen(substr), max_id = 0;
		for (int i = 0; i < len_str; i++) {
			if (str[i] > str[max_id])
				max_id = i;
		}
		for (int i = 0; i <= max_id; i++)
			result[i] = str[i];
		for (int i = 0; i < len_sub; i++)
			result[i + max_id + 1] = substr[i];
		for (int i = 0; i < len_str - (max_id + 1); i++)
			result[i + max_id + 1 + len_sub] = str[i + max_id + 1];
		cout << result << endl;
	}
	return 0;
}
