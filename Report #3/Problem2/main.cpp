/* ����2 - 2x2 ����� ��� ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define cnt 2

void get_matrix(double(*matrix)[cnt])    // ��� ���� �Է� �޴� �Լ�
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

double cal_det(double(*matrix)[cnt])    // det�� ��� �Լ�
{
	return matrix[cnt-2][cnt - 2] * matrix[cnt-1][cnt - 1] - matrix[cnt - 2][cnt - 1] * matrix[cnt - 1][cnt - 2];
}

void cal_inverse(double(*matrix)[cnt], double(*inverse)[cnt])    // ����� ��� �Լ�
{
	double det = cal_det(matrix);
	inverse[cnt - 2][cnt - 2] = matrix[cnt - 1][cnt - 1] / det;
	inverse[cnt - 2][cnt - 1] = -matrix[cnt - 2][cnt - 1] / det;
	inverse[cnt - 1][cnt - 2] = -matrix[cnt - 1][cnt - 2] / det;
	inverse[cnt - 1][cnt - 1] = matrix[cnt - 2][cnt - 2] / det;
}

void print_inverse(double(*inverse)[cnt])    // ����� ��� �Լ�
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

	printf("2x2 ����� �Է��ϼ���.\n");

	while (true)    
	{
		get_matrix(matrix);

		double det = cal_det(matrix);

		if (det == 0.0)    // det�� 0�� ��� �ٽ� �Է� �ޱ�
		{
			printf("������� �������� �ʽ��ϴ�. �ٽ� �Է��ϼ���.\n");
		}
		else
		{
			cal_inverse(matrix, inverse);
			printf("�����\n");
			print_inverse(inverse);

			break;
		}
	}

	return 0;
}