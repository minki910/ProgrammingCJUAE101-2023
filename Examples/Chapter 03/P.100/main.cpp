#include <stdio.h>

int main(void)
{
	int kor = 70;
	int eng = 80;
	int mat = 90;
	int tot;

	tot = kor + eng + mat;
	printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, mat);
	printf("���� : %d", tot);

	return 0;
}