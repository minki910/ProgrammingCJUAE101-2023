#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80] = {};    // 문자열 초기화
	char temp[80] = {};

	printf("두 문자열 입력 : ");    // 문자열 입력
	scanf("%s %s", str1, str2);
	printf("바꾸기 전 : %s, %s\n", str1, str2);    // 바꾸기 전 출력
	strcpy(temp, str1);    // temp에 str1 대입
	strcpy(str1, str2);    // str1에 str2 대입
	strcpy(str2, temp);    // str2에 temp 대입
	printf("바꾼 후 : %s, %s\n", str1, str2);    // 바꾼 후 출력

	return 0;
}