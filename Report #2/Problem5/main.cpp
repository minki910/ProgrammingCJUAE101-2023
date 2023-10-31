/* 문제.5 - 총합, 분산, 표준편차 계산 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#define END_code 9999
#include <stdio.h>
#include <math.h>

int main(void)
{
	int i = 0;
	double count = 0.0;    // 횟수 카운트 변수
	double num[10];    // 입력 받을 값 변수
	double sum = 0;    // 합 변수
	double avg = 0;    // 평균 변수
	double variance = 0;    // 분산 변수
	double standard_deviation = 0;    // 표준편차 변수
	
	printf("<총합, 분산, 포준편차 계산 프로그램>\n\n");

	while (1)    // 무한루프
	{
		for (i = 1; i < 11; i++)
		{
			printf("%d번째 숫자를 입력하세요 (END : 9999) : ", i);
			scanf("%lf", &num[i]);

			count = i;
			sum += num[i];

			if (num[i] == END_code)
			{
				printf("프로그램을 종료합니다.\n");
				return 0;    // 프로그램 종료
			}
		}
		avg = (sum / count);    // 평균 계산

		for (i = 1; i < count; i++)
		{
			variance += (num[i] - avg) * (num[i] - avg);
		}
		variance /= count;    // 분산 계산
		standard_deviation = sqrt(variance);    // 표준편차 계산

		printf("총합 : %.1lf\n", sum);
		printf("분산 : %.1lf\n", variance);
		printf("표준편차 : %.1lf\n\n", standard_deviation);
	}
	return 0;
}