#include <stdio.h>

/*��Ŀ���ݣ�
��ĳ���Ҫ����һ����������Χ��[-100000,100000]��Ȼ���ú���ƴ�������������ÿһλ���������
������1234���������yi er san si
ע�⣬ÿ���ֵ�ƴ��֮����һ���ո񣬵��������ֺ���û�пո񡣵���������ʱ��������Ŀ�ͷ���ϡ�fu������-2341���Ϊ��
fu er san si yi
�����ʽ:һ����������Χ��[-100000,100000]��
�����ʽ����ʾ���������ÿһλ���ֵĺ���ƴ����ÿһλ���ֵ�ƴ��֮���Կո�ָ���ĩβû�пո�*/

//������ķ���������
/*
int main() {
	char num[8];
	scanf("%s", &num);
	for (int i = 0; i < 8; i++){
		switch (num[i]) //switch���������ֻ������������char��char�Ļ�����ascii���תΪ����
		{
		case '-':printf("fu"); break; //ascii���45�Ǹ��ţ����48-57������0-9��case�����char���ԣ���ascii���Ҳ����
		case '0':printf("ling"); break;
		case '1':printf("yi"); break;
		case 50:printf("er"); break; //case�����ascii���Ҳ����
		case 51:printf("san"); break;
		case 52:printf("si"); break;
		case 53:printf("wu"); break;
		case 54:printf("liu"); break;
		case 55:printf("qi"); break;
		case 56:printf("ba"); break;
		case 57:printf("jiu"); break;
		}
		if (num[i + 1] == '\0') {
			printf("\n");
			return 0;
		}
		else
			printf(" ");
	}
}
*/

//��ѭ���ķ�������

int main(){
    int num, digit = 1, mask = 1;
    scanf("%d", &num);
    if (num < 0){
        printf("fu ");
        num = -num;
    }

    //����������ֵ�λ��
    int newnum = num;
    while (newnum > 9){
        newnum /= 10;
        mask *= 10;
        digit++;
    } ;

    for (int i = 0; i < digit; i++){
        int largest = num / mask;
        switch (largest)
		{
		case 0:printf("ling"); break;
		case 1:printf("yi"); break;
		case 2:printf("er"); break;
		case 3:printf("san"); break;
		case 4:printf("si"); break;
		case 5:printf("wu"); break;
		case 6:printf("liu"); break;
		case 7:printf("qi"); break;
		case 8:printf("ba"); break;
		case 9:printf("jiu"); break;
		}
		if (i != digit - 1) //���һ��ѭ����������ո�
            printf(" ");
        num %= mask;
        mask /= 10;
    }
    return 0;
}
