#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp;    // ���� ������
	char str[20] = "empty";    // ���ڿ� �Է� �迭
	int ch = 0;    // ���� �Է� �Լ�

	fp = fopen("C://Users//�Źα�//source//repos/Week14-P.581//a.text", "r");    // ���� ����
	ch = fgetc(fp);    // ���� �Է�
	while (fgetc(fp) != EOF);    // ���� ���

	fgets(str, sizeof(str), fp);    // �� �� �Է�
	printf("%s", str);    // ���
	fclose(fp);    // ���� ����

	return 0;
}