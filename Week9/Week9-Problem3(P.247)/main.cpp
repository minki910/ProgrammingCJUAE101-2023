#include <stdio.h>
#define Anum 3
#define Bnum 10

int main(void)
{
	int A[Anum] = { 1,2,3 };    // �ʱ�ȭ�� A �迭
	int B[Bnum];    // �ʱ�ȭ���� ���� B �迭
	int i;

	for (i = 0; i < Bnum; i++)    // B �迭�� ä��� ���� B �迭 ����� ������ŭ �ݺ� 
	{
		B[i] = A[i % Anum];    // A �迭 ÷�ڰ� 0 ~ 2�� ������ ������ ������ ���
	}

	for (i = 0; i < Bnum; i++)
	{
		printf("%5d", B[i]);    // B ���� ���
	}
	printf("\n");

	return 0;
}