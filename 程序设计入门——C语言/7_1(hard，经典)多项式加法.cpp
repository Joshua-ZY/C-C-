#include <stdio.h>

/*����ʽ�ӷ�
һ������ʽ���Ա��Ϊx�ĸ�������ϵ���˻��ĺͣ����磺2x6+3x5+12x3+6x+20.���ڣ���ĳ���Ҫ������������ʽ��
Ȼ���������������ʽ�ĺͣ�Ҳ���ǰѶ�Ӧ�����ϵ�ϵ�����Ȼ�����������Ҫ����������Ϊ100��
�����ʽ:
�ܹ�Ҫ������������ʽ��ÿ������ʽ�������ʽ���£�ÿ�������������֣���һ����ʾ�ݴΣ��ڶ�����ʾ���ݴε�ϵ����
���е�ϵ��������������һ��һ��������ݣ����һ��һ����0���ݡ�
ע���һ�к����һ��֮�䲻һ�������ݴν���˳�����У����ĳ���ݴε�ϵ��Ϊ0���Ͳ������������������ˣ�0���ݵ�
ϵ��Ϊ0ʱ���ǻ���������������С�*/

//������ú����ܷ��㣬��Ϊ����ķ��ţ�ϵ�����������Ե�corner case�ܶ࣬���д��һ�γ�������б𣬻�ǳ����ӣ�
//����corner case������Ϲ��࣬��˲����������һ�����������ÿ�������Ѹ��Ե�����ܺ�

//�������
void output_mark(int coeff, int first_flag){
    if (coeff > 0){ //���ϵ��Ϊ������һ�������ţ����������Ӻţ�
        if (first_flag)
            return;
        else printf("+");
    }
    else //���ϵ��Ϊ��������Ҫ�������Ϊcoeff������з��ţ�
        return;
}
//���ϵ��
void output_coeff(int coeff){
    if (coeff == 1) //���ϵ��Ϊ1.�����ϵ����������������ϵ��
        return;
    else printf("%d", coeff);
}
//�������
void output_power(int power){
    if (power == 1) //�������Ϊ1��ֻ���x���������Ϊ0,�����x�ʹ�����������������x�ʹ���
        printf("x");
    else if (power == 0)
        return;
    else printf("x%d", power);
}

int main() {
    //Input
	int poly1[100] = { 0 }, poly2[100] = { 0 }, power, coeff;
	do {
		scanf("%d%d", &power, &coeff);
		poly1[power] = coeff;
	} while (power > 0);
	do {
		scanf("%d%d", &power, &coeff);
		poly2[power] = coeff;
	} while (power > 0);
    //Output
	int sum_coeff, first_flag = 1;
	for (int i = 99; i >= 0; i--) {
		sum_coeff = poly1[i] + poly2[i];
		if(sum_coeff){
            output_mark(sum_coeff, first_flag);
            output_coeff(sum_coeff);
            output_power(i);
            first_flag = 0;
		}
	}
    if (first_flag) //���ѭ����������û�������һ�Σ�˵��ȫ��ϵ����Ϊ0���������Ķ���ʽΪ0
        printf("0");
	printf("\n");
	return 0;
}
