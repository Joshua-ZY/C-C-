#include <iostream>
using namespace std;

/*����⣣4���򵥼�����
����:һ����򵥵ļ�������֧��+, -, *, / �������㡣���迼���������Ϊ���������������
�����������ᳬ��int��ʾ�ķ�Χ��
����:����ֻ��һ�У������������������е�1��2������Ϊ��������3������Ϊ��������+,-,*,/����
���:���ֻ��һ�У�һ��������Ϊ��������Ȼ����
1. ������ֳ���Ϊ0��������������Divided by zero!
2. ���������Ч�Ĳ�����(����Ϊ +, -, *, / ֮һ�����������Invalid operator!*/

int main() {
	int num1, num2;
	char op;
	cin >> num1 >> num2 >> op;
	switch (op)
	{
	case '+': cout << num1 + num2 << endl; break;
	case '-': cout << num1 - num2 << endl; break;
	case '*': cout << num1 * num2 << endl; break;
	case '/': 
		if (num2 != 0)
			cout << num1 / num2 << endl;
		else
			cout << "Divided by zero!" << endl; 
		break; 
	default: cout << "Invalid operator!" << endl; break;
	}
	return 0;
}