#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j = 0;
	int count = 0;    // �� ī��Ʈ ���� �ʱ�ȭ
	char big[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";    // �빮�� ���� �ʱ�ȭ
	char small[27] = "abcdefghijklmnopqrstuvwxyz";    // �ҹ��� ���� �ʱ�ȭ
	char sentence[100] = {};    // ���� ���� �ʱ�ȭ

	printf("���� �Է� : ");    // ���� �Է� ���
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
	printf("�ٲ� ���� : ");    // �ٲ� ���� ���
	puts(sentence);
	printf("�ٲ� ���� �� : %d\n", count);

	return 0;
}