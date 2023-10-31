/* 문제.4 - 자유낙하 시간 계산 프로그램 */
#define g 9.81    // 중력가속도(m/s^2)
#define h 100    // 높이(m)
#define m 1    // 케틀벨 질량(kg)
#include <stdio.h>

int main(void)
{
	printf("1kg의 케틀벨의 자유낙하 시간 계산 프로그램\n");

	double time = 0;
	double ground_height = 0;    // 지표면의 높이를 0m로 설정

	do
	{
		ground_height = (h - 0.5 * g * (time * time));   // 자유낙하 공식 h = 0.5 * g * t^2 이용 
		time = (time + 0.0000001);    // 시간이 지날수록
	} while (ground_height >= 0);
	
	printf("지면에 도착하는데 걸린 시간(s) : %.3lf\n", time);

	return 0;
}