#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define row 5    // ��
#define column 6    // ��

int main(void)
{
	int ary[row][column] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}
	};

	int i, j = 0;

	for (i = 0; i < row - 1; i++)
	{
		for (j = 0; j < column - 1; j++)
		{
			ary[i][column - 1] += ary[i][j];    // ���� ��
			ary[row - 1][j] += ary[i][j];    // ���� ��
			ary[row - 1][column - 1] += ary[i][j];    // 1���� 20������ ��
		}
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			printf("%5d", ary[i][j]);    // 5ĭ �������� ���
		}
		printf("\n");    // ������
	}

	return 0;
}