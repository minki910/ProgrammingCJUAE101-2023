/* 문제.4 - sqrt를 이용한 자유낙하 시간 계산 프로그램 */
#define g 9.81    // 중력가속도(m/s^2)
#define h 100    // 높이(m)
#define m 1    // 케틀벨 질량(kg)
#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("1kg의 케틀벨의 자유낙하 시간 계산 프로그램\n");

	double time = 0;

	time = sqrt((2 * h) / g);    // 자유낙하 공시 h = 0.5 * g * t^2 이용

	printf("지면에 도착하는데 걸린 시간(s) : %.3lf\n", time);

	return 0;
}