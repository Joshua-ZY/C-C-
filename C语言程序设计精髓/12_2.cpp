#include <stdio.h>

/*��ѧ�𷢷�
ĳУ�Ĺ�������ÿѧ�ڵ���ĩ����֮�󷢷Ž�ѧ�𡣷��ŵĽ�ѧ�������֣�ÿ�ѧ���ȡ�������ֱ����£�
1) Ժʿ��ѧ����ĩƽ���ɼ�����80�֣�>80���������ڱ�ѧ���ڷ���1ƪ��1ƪ�������ĵ�ѧ��ÿ�˾��ɻ��8000Ԫ��
2) ���Ľ�ѧ����ĩƽ���ɼ�����85�֣�>85�������Ұ༶����ɼ�����80�֣�>80����ѧ��ÿ�˾��ɻ��4000Ԫ��
3) �ɼ����㽱����ĩƽ���ɼ�����90�֣�>90����ѧ��ÿ�˾��ɻ��2000Ԫ��
4) ������ѧ����ĩƽ���ɼ�����85�֣�>85��������ʡ��ѧ��ÿ�˾��ɻ��1000Ԫ��
5) �༶���׽����༶����ɼ�����80�֣�>80����ѧ���ɲ�ÿ�˾��ɻ��850Ԫ��
ֻҪ�������������Ϳɻ����Ӧ�Ľ��ÿ�ѧ��Ļ�����û�����ƣ�ÿ��ѧ��Ҳ����ͬʱ��ö��ѧ������
Ҧ������ĩƽ���ɼ���87�֣��༶����ɼ�82�֣�ͬʱ������һλѧ���ɲ�����ô������ͬʱ������Ľ�ѧ��Ͱ༶
���׽�������������4850Ԫ��
���ڸ�������ѧ����������ݣ���������ͬѧ�������ý�ѧ��������������̼�����Щͬѧ��õĽ���������ߡ�
�ṹ�����Ͷ������£�
typedef struct winners
{
    char name[20];
    int finalScore;
    int classScore;
    char work;
    char west;
    int paper;
    int scholarship;
} WIN;

����ԭ�ͣ�void Addup(WIN stu[], int n);
����ԭ�ͣ�int FindMax(WIN student[], int n);*/

#define N 10

typedef struct winners
{
	char name[20];
	int finalScore;
	int classScore;
	char work;
	char west;
	int paper;
	int scholarship;
} WIN;

void Addup(WIN stu[], int i) {
	if ((stu[i].finalScore > 80) && (stu[i].paper > 0))
		stu[i].scholarship += 8000;
	if ((stu[i].finalScore > 85) && (stu[i].classScore > 80))
		stu[i].scholarship += 4000;
	if (stu[i].finalScore > 90)
		stu[i].scholarship += 2000;
	if ((stu[i].finalScore > 85) && (stu[i].west == 'Y'))
		stu[i].scholarship += 1000;
	if ((stu[i].classScore > 80) && (stu[i].work == 'Y'))
		stu[i].scholarship += 850;
	return;
}

int FindMax(WIN student[], int n) {
	int highest = 0, highestID;
	for (int i = 0; i < n; i++) {
		if (student[i].scholarship > highest) {
			highest = student[i].scholarship;
			highestID = i;
		}
	}
	return highestID;
}

int main() {
	int n, maxstu;
	WIN students[N] = { {0} };

	printf("Input n:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Input name:");
		scanf("%s", &students[i].name);
		printf("Input final score:");
		scanf("%d", &students[i].finalScore);
		printf("Input class score:");
		scanf("%d", &students[i].classScore);
		printf("Class cadre or not?(Y/N):");
		scanf(" %c", &students[i].work); //ע�⣬%cǰ���и��ո������Ե��س�
		printf("Students from the West or not?(Y/N):");
		scanf(" %c", &students[i].west); //ע�⣬%cǰ���и��ո������Ե��س�
		printf("Input the number of published papers:");
		scanf("%d", &students[i].paper);
		Addup(students, i);
		printf("name:%s,scholarship:%d\n", students[i].name, students[i].scholarship);
	}

	
	maxstu = FindMax(students, n);
	printf("%s get the highest scholarship %d\n", students[maxstu].name, students[maxstu].scholarship);
	return 0;
}