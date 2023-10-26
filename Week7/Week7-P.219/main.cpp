/* P.219 확인문제 3번 - 187cm를 미터 단위 환산 프로그램 */
#include <stdio.h>

double centi_to_meter(int cm);    // 함수 선언

double centi_to_meter(int cm)    // 함수 정의 시작
{
	double meter = 0.0;    // 필요한 변수 선언
	meter = cm / 100.0;    // 매개변수 cm의 값을 m단위로 환산
	return meter;    // 환산된 값 변환
}

int main(void)
{
	double res = 0.0;    // 함수의 변환값을 저장할 변수

	res = centi_to_meter(187);    // 함수 호출, 변환값을 res에 저장
	printf("%.2lfm\n", res);    // 반환된 res의 값 출력
	
	return 0;
}