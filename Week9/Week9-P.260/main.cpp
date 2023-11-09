#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j = 0;
	int count = 0;    // 수 카운트 변수 초기화
	char big[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";    // 대문자 변수 초기화
	char small[27] = "abcdefghijklmnopqrstuvwxyz";    // 소문자 변수 초기화
	char sentence[100] = {};    // 문장 변수 초기화

	printf("문장 입력 : ");    // 문장 입력 출력
	gets_s(sentence);

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (sentence[i] == big[j])
			{
				sentence[i] = small[j];
				count++;
			}
		}
	}
	printf("바뀐 문장 : ");    // 바뀐 문장 출력
	puts(sentence);
	printf("바뀐 문자 수 : %d\n", count);

	return 0;
}