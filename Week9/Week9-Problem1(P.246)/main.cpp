#include <stdio.h>
#define Pro1 5
#define Pro2 10
#define Pro3 3
#define Pro4 5

int main(void)
{
	int nAryTest[Pro1] = {};    // ���� 5���� ������ �迭 (0���� �ʱ�ȭ)
	int* pAryTest = nAryTest;

	//double nAryTest[Pro2];    �Ǽ� 10���� ������ �迭
	//int nAryTest[Pro3]     �迭 ��� ������ 3���� int�� �迭
	//char nAryTest[Pro4];    ÷���� �ִ��� 4�� char�� �迭

	for (unsigned int i = 0; i < Pro1; i++)    // �ε����� �ش��ϴ� ���� ����
	{
		printf("nAryTest[%d] = %d\n", i, nAryTest[i]);    // �迭�� ǥ��
		//printf("nAryTest[%d] = %d\n", i, *(nAryTest + i));    // �����ͽ� ǥ��
		//printf("nAryTest[%d] = %d\n", i, pAryTest[i]);    // �迭�� ǥ��
		//printf("nAryTest[%d] = %d\n", i, (pAryTest + i));    // �����ͽ� ǥ��
	}
	printf("\n");

	for (unsigned int i = 0; i < Pro1; i++)    // �ε����� �ش��ϴ� �޸𸮿� ����
	{
		printf("nAryTest[%d] = %d\n", i, *&nAryTest[i]);
		//printf("nAryTest[%d] = %d\n", i, *(nAryTest + i));
		//printf("nAryTest[%d] = %d\n", i, *&pAryTest[i]);
		//printf("nAryTest[%d] = %d\n", i, *(pAryTest + i));
	}

	return 0;
}