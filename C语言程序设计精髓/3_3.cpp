#include <stdio.h>
/*�Ӽ�������ĳͬѧ��Ӣ������Сд���룬����ѧ����Ӣ����ֻ����3����ĸ����: tom������д��������Ļ
�������ͬѧ��Ӣ������������ĸ��д����: Tom����ͬʱ�����ɸ�Ӣ����������Ӣ���ַ���26��Ӣ����
ĸ�е���š�*/

int main(){
    char n1, n2, n3, n1cap;
    int no1, no2, no3;
    printf("Input your English name:\n");
    scanf("%c%c%c", &n1, &n2, &n3);
    no1 = n1 - 96; no2 = n2 - 96; no3 = n3 - 96;
    n1cap = n1 - 32;
    printf("%c%c%c\n", n1cap, n2, n3);
    printf("%c:%d\n", n1, no1);
    printf("%c:%d\n", n2, no2);
    printf("%c:%d\n", n3, no3);
    return 0;
}
