#include <stdio.h>

/*���ʳ���
��ĳ���Ҫ����һ���ı��������Կո�ָ�Ϊ���ɸ����ʣ��ԡ�.����������Ҫ��������ı���ÿ�����ʵĳ��ȡ�
����ĵ����������޹أ����԰������ַ��ţ����硰it's����һ�����ʣ�����Ϊ4��ע�⣬���п��ܳ���������
�ո�*/



void myPrint(int length, int *first_output){
    if(*first_output){
        printf("%d", length);
        *first_output = 0;
    }
    else
        printf(" %d", length);
}

int main(){
    char word[100];
    int first_output = 1;
    while(1){
        scanf("%s", word);
        int length = 0;
        for(int i = 0; i < 100; i++){
            if (word[i] =='.'){
                if (length == 0)//���԰���Ҫ��û����Ч���ݵľ��Ӳ�Ӧ�����κε������
                    return 0;
                myPrint(length, &first_output);
                return 0;
            }
            else if(word[i]){
                length++;
            }
            else{
                myPrint(length, &first_output);
                break;
            }
        }
    }
}
