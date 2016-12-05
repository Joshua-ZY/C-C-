#include <stdio.h>

/*�ظ����ּ��
�Ӽ�������һ�����������������Ƿ����ظ����ֵ����֡��������������ظ����ֵ����֣�����ʾ��Repeated digit!����
������ʾ��No repeated digit!������֪����ԭ�ͣ�int CountRepeatNum(int count[], int n);*/

int CountRepeatNum(int count[], long int num){
    int last_digit;
    while (num != 0){
        last_digit = num % 10;
        count[last_digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++){
        if (count[i] > 1)
            return count[i];
    }
    return -1;
}

int main(){
    long int num;
    int numcount[10] = {0};
    printf("Input n:\n");
    scanf("%ld", &num);

    if (CountRepeatNum(numcount, num) == -1)
        printf( "No repeated digit!\n");
    else
        printf("Repeated digit!\n");

    return 0;
}
