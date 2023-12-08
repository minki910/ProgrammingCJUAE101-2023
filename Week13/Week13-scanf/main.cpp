#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[80];
	char str2[80];
	char* pstr1 = str1;
	char* pstr2 = str2;

	printf("문자열 입력 : ");
	scanf("%s", pstr1);
	printf("첫 번째 단어 : %s\n", pstr1);

	fflush(stdin);

	printf("두번째 문자열 입력: ");
	char* gets(pstr2);
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", pstr2);

	return 0;
}