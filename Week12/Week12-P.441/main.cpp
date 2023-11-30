#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define row 5    // 행
#define column 6    // 열

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
			ary[i][column - 1] += ary[i][j];    // 행의 합
			ary[row - 1][j] += ary[i][j];    // 열의 합
			ary[row - 1][column - 1] += ary[i][j];    // 1부터 20까지의 합
		}
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			printf("%5d", ary[i][j]);    // 5칸 간격으로 출력
		}
		printf("\n");    // 다음줄
	}

	return 0;
}