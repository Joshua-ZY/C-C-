#include <stdio.h>
#include <math.h>

/*�Ӽ�������ĳ�˵���ߣ�������Ϊ��λ����174cm�������أ��Թ���Ϊ��λ����70����������
������Ϊ��λ����1.74m�������أ��Խ�Ϊ��λ����140��������Ļ�ϣ����������¹�ʽ���㲢
�����ָ����Ҫ����������С�����2λ�����������и��������������;�Ϊfloat��
��������Ϊw������Ϊh�ף�����ָ���ļ��㹫ʽΪ��t = w/(h^2)*/

int main (){
    int height_in, weight_in;
    float height, weight, t;
    printf("Input weight, height:\n");
    scanf("%d,%d", &weight_in, &height_in);
    height = (float) height_in / 100; weight = weight_in;
    weight_in *= 2;
    printf("weight=%d\n", weight_in);
    printf("height=%.2f\n", height);
    t = weight / pow(height, 2);
    printf("t=%.2f\n", t);
    return 0;
}
