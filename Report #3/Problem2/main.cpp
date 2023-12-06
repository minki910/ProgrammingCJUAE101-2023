/* 문제2 - 2x2 역행렬 계산 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define cnt 2

void get_matrix(double(*matrix)[cnt])    // 행과 열을 입력 받는 함수
{
	int i, j = 0;

	for (i = 0; i < cnt; i++)
	{
		for (j = 0; j < cnt; j++)
		{
			printf("matrix[%d][%d] : ", i + 1, j + 1);
			scanf("%lf", &matrix[i][j]);
		}
	}printf("\n");
}

double cal_det(double(*matrix)[cnt])    // det값 계산 함수
{
	return matrix[cnt-2][cnt - 2] * matrix[cnt-1][cnt - 1] - matrix[cnt - 2][cnt - 1] * matrix[cnt - 1][cnt - 2];
}

void cal_inverse(double(*matrix)[cnt], double(*inverse)[cnt])    // 역행렬 계산 함수
{
	double det = cal_det(matrix);
	inverse[cnt - 2][cnt - 2] = matrix[cnt - 1][cnt - 1] / det;
	inverse[cnt - 2][cnt - 1] = -matrix[cnt - 2][cnt - 1] / det;
	inverse[cnt - 1][cnt - 2] = -matrix[cnt - 1][cnt - 2] / det;
	inverse[cnt - 1][cnt - 1] = matrix[cnt - 2][cnt - 2] / det;
}

void print_inverse(double(*inverse)[cnt])    // 역행렬 출력 함수
{
	int i, j = 0;

	for (i = 0; i < cnt; i++)
	{
		for (j = 0; j < cnt; j++)
		{
			printf("%.1lf\t", inverse[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	double matrix[cnt][cnt] = { 0.0 };
	double inverse[cnt][cnt] = { 0.0 };

	printf("2x2 행렬을 입력하세요.\n");

	while (true)    
	{
		get_matrix(matrix);

		double det = cal_det(matrix);

		if (det == 0.0)    // det가 0일 경우 다시 입력 받기
		{
			printf("역행렬이 존재하지 않습니다. 다시 입력하세요.\n");
		}
		else
		{
			cal_inverse(matrix, inverse);
			printf("역행렬\n");
			print_inverse(inverse);

			break;
		}
	}

	return 0;
}