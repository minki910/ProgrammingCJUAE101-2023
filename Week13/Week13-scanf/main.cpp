#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[80];
	char str2[80];
	char* pstr1 = str1;
	char* pstr2 = str2;

	printf("���ڿ� �Է� : ");
	scanf("%s", pstr1);
	printf("ù ��° �ܾ� : %s\n", pstr1);

	fflush(stdin);

	printf("�ι�° ���ڿ� �Է�: ");
	char* gets(pstr2);
	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", pstr2);

	return 0;
}