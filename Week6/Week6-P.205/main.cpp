/* P.205 ���� ���� ���� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;    // �Է� ���� ����
    int i, j;
    int PrimeNumber = 0;    // �Ҽ� ���θ� ��Ÿ���� ���� (1: �Ҽ�, 0: �Ҽ� �ƴ�)
    int count = 0;    // ��µ� �Ҽ��� ������ ���� ����

    printf("2 �̻��� ������ �Է��ϼ��� : ");    // �� �Է�
    scanf("%d", &num);

    for (i = 2; i <= num; i++)    // 2���� �Է��� ���ڱ��� �ݺ�
    {   
        PrimeNumber = 1;    // �ϴ� �Ҽ���� ����

        for (j = 2; j < i; j++)
        {
            if ((i % j) == 0)    // ������ �������� ���
            {
                PrimeNumber = 0;    // �Ҽ��� �ƴ�
                break;    // ����
            }
        }

        if (PrimeNumber == 1)    // �Ҽ��� ���
        {
            printf("%5d", i);
            count++;    

            if ((count % 5) == 0)    // 5���� �Ҽ��� ����� ������ �ٹٲ�
            {
                printf("\n");
            }
        }
    }
    
    return 0;
}
