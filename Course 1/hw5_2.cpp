#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sumn = 0, sumd = 1;//��������sumn/sumd
	while (n--) {
		int num, deno;
		char slash;//ר�������Ե�/��
		cin >> num >> slash >> deno;
		//�����ĸ�����Լ��gcd����ֹ��ĸ��˽��̫�������(��������1/100000000��ͣ��������Լ�֣���ĸ��������������õ���ŷ����÷���
		int a = sumd, b = deno, c;
		while (a != 0) {
			c = a; a = b%a; b = c;
		}
		int gcd = b;
		//���
		sumn = sumn * (deno / gcd) + num * (sumd / gcd);
		sumd = (sumd / gcd) * (deno / gcd) * gcd;
	}
	//Լ�֣�����ӷ�ĸ�Ĺ�Լ��
	int a = sumd, b = sumn, c;
	while (a != 0) {
		c = a; a = b%a; b = c;
	}
	int gcd = b;
	sumn /= b;
	sumd /= b;

	if (sumd > 1) //�жϷ�ĸ�ǲ���1�������1��ֱ����������ʽ���
		cout << sumn << '/' << sumd << endl;
	else
		cout << sumn << endl;
	return 0;
}
