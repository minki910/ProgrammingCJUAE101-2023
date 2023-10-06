#include <stdio.h>

int main(void)
{
	int year = 0, month = 0, day = 0, result = 0, lastnumber = 0;
	
	// 출생연월일 입력 받기
	printf("출생연도를 입력하세요 : ");
	scanf_s("%d", &year);
	printf("출생월을 입력하세요 : ");
	scanf_s("%d", &month);
	printf("출생일을 입력하세요 : ");
	scanf_s("%d", &day);

	// (출생년도)-(월)+(일) 계산
	result = year - month + day;

	// 마지막 자리 숫자 계산
	lastnumber = result % 10;

	if (lastnumber == 0)
	{
		printf("Very Good\n");
	}
	else
	{
		printf("SoSo\n");
	}

	return 0;
}