#include <stdio.h>
#include <string.h>
#define N 200

/*GPS���ݴ���
NMEA-0183Э����Ϊ���ڲ�ͬ��GPS��ȫ��λϵͳ�������豸�н���ͳһ��BTCM���������ߵ缼��ίԱ�ᣩ��׼��
���������Һ������Э�ᣨNMEA-The National Marine Electronics Associa-tion���ƶ���һ��ͨѶЭ�顣GPS
���ջ�����NMEA-0183Э��ı�׼�淶����λ�á��ٶȵ���Ϣͨ�����ڴ��͵�PC����PDA���豸��
NMEA-0183Э����GPS���ջ�Ӧ�����صı�׼Э�飬Ҳ��ĿǰGPS���ջ���ʹ����㷺��Э�飬�����������GPS��
�ջ���GPS���ݴ��������������������ػ������ټ������Э�顣
NMEA-0183Э�鶨������ǳ��࣬���ǳ��õĻ���˵�������������ֻ��$GPGGA��$GPGSA��$GPGSV��$GPRMC��
$GPVTG��$GPGLL�ȡ�
����$GPRMC���ĸ�ʽ���£�$GPRMC,024813.640,A,3158.4608,N,11848.3737,E,10.05,324.27,150706,,,A*50
�������������һ���ı��У������Զ��š�,�����������ֶΣ�ÿ���ֶεĴ�С�����ȣ���һ�������ʾ��ֻ��һ��
���ܣ���������Ϊ�ֶεĴ�С������������һ����
�ֶ�0��$GPRMC�����ID�����������ΪRecommended Minimum Specific GPS/TRANSIT Data��RMC���Ƽ���С��λ��Ϣ
�ֶ�1��UTCʱ�䣬hhmmss.sss��ʽ
�ֶ�2��״̬��A=��λ��V=δ��λ
�ֶ�3��γ��ddmm.mmmm���ȷָ�ʽ��ǰ��λ��������0��
�ֶ�4��γ��N����γ����S����γ��
�ֶ�5������dddmm.mmmm���ȷָ�ʽ��ǰ��λ��������0��
�ֶ�6������E����������W��������
�ֶ�7���ٶȣ��ڣ�Knots
�ֶ�8����λ�ǣ���
�ֶ�9��UTC���ڣ�DDMMYY��ʽ
�ֶ�10����ƫ�ǣ���000 - 180���ȣ�ǰ��λ��������0��
�ֶ�11����ƫ�Ƿ���E=��W=��
�ֶ�16��У��ֵ
�����*��ΪУ���ʶ�������������λ��ΪУ��ͣ������ˡ�$���͡�*��֮�������ַ����������������ַ��������ֵ��ʮ������ֵ��
�������������У�����ʮ�����Ƶ�50��Ҳ����ʮ���Ƶ�80��
��ʾ��^���������������򡣽�$��*֮�����е��ַ���^����(��һ���ַ��͵ڶ����ַ���򣬽���ٺ͵������ַ������������)
֮���ֵ��65536ȡ���Ľ����Ӧ�ú�*���������ʮ���������ֵ�ֵ��ȣ�����Ļ�˵����������ڴ����з����˴���ע�����
ʮ������ֵ���ǻ����A-F�Ĵ�д��ĸ�ġ�
���ڣ���ĳ���Ҫ����һϵ��GPS��������а���$GPRMC��Ҳ����������䡣�����ݵ������һ�е�����END��ʾ���ݵĽ�����

��ĳ���Ҫ�����ҳ�$GPRMC��䣬����У��ͣ��ҳ�����У����ȷ�������ֶ�2��ʾ�Ѷ�λ����䣬���м����ʱ�䣬����ɱ���ʱ�䡣
һ�������л��������$GPRMC��䣬�����һ�����õ��ı���ʱ����Ϊ��������
��ĳ���һ�������һ����Ч��$GPRMC��䡣
�����ʽ:����GPS��䣬ÿ�����Իس����н��������һ����END������д��ĸ��
�����ʽ��6λ��ʱ�䣬���Ϊ��hh:mm:ss���У�hh����λ����Сʱ��������λʱǰ�油0��mm����λ���ķ��ӣ�������λʱǰ�油0��
ss����λ�����룬������λʱǰ�油0��*/

int findCommaPos(char arr[], int no){ //�ҵ�arr�е�no������
    int times = 0;
    for(int i = 0; i < N; i++){
        if (arr[i] == ','){
            times++;
            if (times == no)
                return i;
        }
    }
}

int findStarPos(char arr[]){ //�ҵ�arr�е��Ǻ�λ��
    for(int i = 0; i < N; i++){
        if (arr[i] == '*'){
            return i;
        }
    }
}

int charto16(char c){ //��16���Ƶ��ַ���ת��16������
    if (c >= '0' && c <= '9')
        return c - '0';
    else switch(c){
        case('A'): return 10;
        case('B'): return 11;
        case('C'): return 12;
        case('D'): return 13;
        case('E'): return 14;
        case('F'): return 15;
    }
}

void UTCtoBJ_store(char arr[], int ans[]){
    int hour = (arr[0] - '0') * 10 + (arr[1] - '0');
    int minute = (arr[2] - '0') * 10 + (arr[3] - '0');
    int second = (arr[4] - '0') * 10 + (arr[5] - '0');
    hour += 8;
    if (hour > 24)
        hour -= 24;
    ans[0] = hour;
    ans[1] = minute;
    ans[2] = second;
    return;
}

int main(){
    char info[N]; int time_ans[3] = {-1};
    while(1){
        gets(info);
        if(strcmp(info, "END") == 0){ //strcmp��������ֵ��������s1 ��s2 �ַ�����ͬ�򷵻�0��s1 ������s2 �򷵻ش���0 ��ֵ��s1 ��С��s2 �򷵻�С��0 ��ֵ��
            if (time_ans[0] != -1)
                printf("%02d:%02d:%02d", time_ans[0], time_ans[1], time_ans[2]);
            return 0;
        }
        else{
            int comma1 = findCommaPos(info, 1); //�ҵ���һ�����õ�λ�ã�����ȷ���ֶ�0
            char sec0[10] = {'\0'};
            for(int i = 0; i < comma1; i++)
                sec0[i] =  info[i];
            if(strcmp(sec0,"$GPRMC") != 0)//�ж��ֶ�0�Ƿ����"$GPRMC"
                continue;
            int comma2 = findCommaPos(info, 2);//�ҵ��ڶ������ŵ�λ�ã���������ֶ�2��λ��
            if(info[comma2 + 1] != 'A')
                continue;
            int star = findStarPos(info); //�ҵ��Ǻŵ�λ��
            int xorvalue = info[1]^info[2];//����$��*֮���xorֵ
            for(int i = 3; i < star; i++)
                xorvalue ^= info[i];
            xorvalue %= 65536;
            int confirm_code = 0;
            for(int i = star + 1; ; i++){
                if (info[i]){
                    confirm_code = confirm_code * 16 + charto16(info[i]);
                }
                else break;
            }
            if (xorvalue != confirm_code) //�ж�$��*֮���xorֵ��У����ֵ�Ƿ����
                continue;
            char time[6];
            for(int i = 0; i < 6; i++)//ֻҪ��ȡʱ���ǰ��λ����
                time[i] = info[comma1 + 1 + i];
            UTCtoBJ_store(time, time_ans); //���һ�������ж����Ϸ�����䣬ֻ������һ��������ÿ�εĽ���ȴ洢��time��ȵ�END֮�������
        }
    }
}
