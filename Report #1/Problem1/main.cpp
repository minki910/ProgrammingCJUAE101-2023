/* 0 ~ 360[deg.]������ �Ǽ��� �������� -180 ~ +180[deg.]���� ��ȯ ���α׷� */

#include <stdio.h>

int main(void)
{
	double roll;
	double pitch;
	double yaw;

	// �� �Է�
	printf("0 ~ 360[deg.] ������ roll�� ������ �Է��ϼ��� : ");
	scanf_s("%lf", &roll);
	printf("0 ~ 360[deg.] ������ pitch�� ������ �Է��ϼ��� : ");
	scanf_s("%lf", &pitch);
	printf("0 ~ 360[deg.] ������ yaw�� ������ �Է��ϼ��� : ");
	scanf_s("%lf", &yaw);

	// �Էµ� ������ -180 ~ +180 ������ ��ȯ
	while (roll > 180)
	{
		roll -= 360;
	}
	while (roll < -180)
	{
		roll += 360;
	}
	while (pitch > 180)
	{
		pitch -= 360;
	}
	while (pitch < -180)
	{
		pitch += 360;
	}
	while (yaw > 180)
	{
		yaw -= 360;
	}
	while (yaw < -180)
	{
		yaw += 360;
	}

	// ��ȯ�� ������ ���
	printf("\n-180 ~ +180[deg.] ������ ��ȯ�� roll�� ������ : %.1lf\n", roll);
	printf("-180 ~ +180[deg.] ������ ��ȯ�� pitch�� ������ : %.1lf\n", pitch);
	printf("-180 ~ +180[deg.] ������ ��ȯ�� yaw�� ������ : %.1lf\n", yaw);

	return 0;
}