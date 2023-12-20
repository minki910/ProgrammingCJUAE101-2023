#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 0;
	int* pi = 0;
	int i, sum = 0;

	printf("임의의 개수를 입력해주세요 : ");
	scanf("%d", &num);

	pi = (int*)malloc(num * sizeof(int));    // 메모리 동적 할당

	if (pi == NULL)    // 동적 할당에 실패할 경우
	{
		printf("메모리가 부족합니다.\n");
		exit(1);
	}

	printf("%d개의 실수를 입력하세요 : ", num);

	for (i = 0; i < num; i++)    // 입력한 수의 총합 계산
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}
	printf("총합 : %d", sum);

	free(pi);    // 동적 할당 영역 반환

	return 0;
}