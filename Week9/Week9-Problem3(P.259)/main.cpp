#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80] = {};    // ���ڿ� �ʱ�ȭ
	char temp[80] = {};

	printf("�� ���ڿ� �Է� : ");    // ���ڿ� �Է�
	scanf("%s %s", str1, str2);
	printf("�ٲٱ� �� : %s, %s\n", str1, str2);    // �ٲٱ� �� ���
	strcpy(temp, str1);    // temp�� str1 ����
	strcpy(str1, str2);    // str1�� str2 ����
	strcpy(str2, temp);    // str2�� temp ����
	printf("�ٲ� �� : %s, %s\n", str1, str2);    // �ٲ� �� ���

	return 0;
}