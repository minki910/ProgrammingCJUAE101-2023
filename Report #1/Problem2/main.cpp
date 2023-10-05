/* 계절 확인 프로그램 */

#include <stdio.h>

int main(void)
{
	int month = 0;

	// 월 입력
	printf("월을 입력하세요. : ");    
	scanf_s("%d", &month);

	// 계절 판단
	switch (month)
	{
	case 12: case 1: case 2:
		printf("겨울입니다.\n");
		break;

	case 3: case 4: case 5:
		printf("봄입니다.\n");
		break;

	case 6: case 7: case 8:
		printf("여름입니다.\n");
		break;

	case 9: case 10: case 11:
		printf("가을입니다.\n");
		break;

	default:
		printf("올바르지 않은 값입니다.\n");
	}

	return 0;
}