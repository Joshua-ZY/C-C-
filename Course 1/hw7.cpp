#include <iostream>
using namespace std;

/*4��ר�Ҷ�4��������������
1��A˵��2����������õģ�
2��B˵��4����������õģ�
3��C˵��3������������õģ�
4��D˵�� B˵���ˡ�
��ʵ��ֻ��1��������ѣ���ֻ��1��ר��˵���ˣ�����3�˶�˵���ˡ�
���������ѳ��ĳ��ţ��Լ�˵�Ե�ר�ҡ�*/

int main()
{
    for (int best = 1; best <= 4; best++)
    {
        bool a = best == 2;
        bool b = best == 4;
        bool c = best != 3;
        bool d = !b;
        if (a + b + c + d == 1)
        {
            cout << best << endl;
            if (a == 1)
            {
                cout << 'A' << endl;
            }
            else if (b == 1)
            {
                cout << 'B' << endl;
            }
            else if (c == 1)
            {
                cout << 'C' << endl;
            }
            else
            {
                cout << 'D' << endl;
            }
        }
    }
    return 0;
}
