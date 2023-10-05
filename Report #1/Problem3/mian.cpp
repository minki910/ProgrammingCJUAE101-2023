/* 윤년 확인 프로그램 */

#include <stdio.h>

int main(void)
{
	int year = 0, result = 0;

	// 연도 입력
	printf("연도를 입력하세요 : ");
	scanf_s("%d", &year);

	// 윤년 판단
	result = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));   
	
	// 결과 출력
	if(result == 0)
	{
		printf("윤년이 아닙니다.\n");
	}
	else
	{
		printf("윤년입니다.\n");
	}

	return 0;
}