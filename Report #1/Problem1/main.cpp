/* 0 ~ 360[deg.]범위의 실수형 각도값의 -180 ~ +180[deg.]범위 변환 프로그램 */

#include <stdio.h>

int main(void)
{
	double roll;
	double pitch;
	double yaw;

	// 각 입력
	printf("0 ~ 360[deg.] 범위의 roll의 각도를 입력하세요 : ");
	scanf_s("%lf", &roll);
	printf("0 ~ 360[deg.] 범위의 pitch의 각도를 입력하세요 : ");
	scanf_s("%lf", &pitch);
	printf("0 ~ 360[deg.] 범위의 yaw의 각도를 입력하세요 : ");
	scanf_s("%lf", &yaw);

	// 입력된 각도를 -180 ~ +180 범위로 변환
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

	// 변환된 각도값 출력
	printf("\n-180 ~ +180[deg.] 범위로 변환된 roll의 각도값 : %.1lf\n", roll);
	printf("-180 ~ +180[deg.] 범위로 변환된 pitch의 각도값 : %.1lf\n", pitch);
	printf("-180 ~ +180[deg.] 범위로 변환된 yaw의 각도값 : %.1lf\n", yaw);

	return 0;
}