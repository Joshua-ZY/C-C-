#include <stdio.h>

/*��ש����
n��ש( 27<n<=77 )��36�˰ᣬ�а�4��Ů��3������С��̧һ��ש��Ҫ��һ�ΰ��꣬�����ˡ�Ů��
��С����������ˣ�������ٷ�������,n��ֵҪ��Ӽ������롣���������������������������*/

int main() {
	int bricks1;
	printf("Input n(27<n<=77):\n");
	scanf("%d", &bricks1);
	for (int men = 0; men <= 36; men++) {
		int bricks2 = bricks1;
		bricks2 -= men * 4;
		if (bricks2 < 0)
			break;
		else 
			for (int women = 0; women <= 36 - men; women++) {
				int bricks3 = bricks2;
				bricks3 -= women * 3;
				if (bricks3 < 0)
					break;
				else {
					int children = bricks3 * 2;
					if (children == 36 - men - women)
						printf("men=%d,women=%d,children=%d\n", men, women, children);
			}
		}
	}
	return 0;
}