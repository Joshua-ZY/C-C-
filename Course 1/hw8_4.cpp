#include <iostream>
using namespace std;

/*����: ��һ������Ϊn(n < 1000)�����������У��ж��Ƿ����ĳ����Ԫ��֮��Ϊk��
����: ��һ���������еĳ���n��k���ÿո�ֿ����ڶ������������е�n���������ÿո�ֿ���
���: �������ĳ����Ԫ�صĺ�Ϊk�������yes���������no��*/

int main()
{
    int numlis[1000], n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> numlis[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 1; j < n; j++) {
            if ((numlis[i] + numlis[j]) == k){
                cout << "yes" << endl; return 0;
            }
        }
    }
    cout << "no" << endl;
    return 0;
}
