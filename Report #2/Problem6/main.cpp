/* ����.6 - ���� ��� ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define END_code 9999
#define diamond 1
#define equilateral_triangle 2

int main(void)
{
    int num = 0;
    int size = 0;    // ũ�⸦ �Է¹��� ����
    int i, j = 0;

    printf("<���� ��� ���α׷�>\n\n");

    while (1)    // ���ѷ���
    {
        printf("����ϰ� ���� ������ �����ϼ���.\n1 : ������, 2 : ���ﰢ�� (END : 9999): ");    // ���� ����
        scanf("%d", &num);

        if (num == END_code)    // ����
        {
            printf("���α׷��� �����մϴ�.\n");
            break;
        }

        if ((num == diamond) || (num == equilateral_triangle))    // ������ �Ǵ� ���ﰢ���� �������� ���
        {
            printf("���Ͻô� ������ ũ�⸦ �Է��ϼ��� : ");    // ũ�� �Է�
            scanf("%d", &size);

            if (size > 0)
            {
                if (num == diamond)    // �������� ���
                {
                    for (i = 1; i <= size; i++)
                    {
                        for (j = 1; j <= size - i; j++)
                        {
                            printf(" ");    // ���� ���
                        }
                        for (j = 1; j <= 2 * i - 1; j++)
                        {
                            printf("*");    // * ���
                        }
                        printf("\n");
                    }
                    for (i = size - 1; i >= 1; i--)
                    {
                        for (j = 1; j <= size - i; j++)
                        {
                            printf(" ");
                        }
                        for (j = 1; j <= 2 * i - 1; j++)
                        {
                            printf("*");
                        }
                        printf("\n");
                    }printf("\n");
                }
                else if (num == equilateral_triangle)    // ���ﰢ���� ���
                {
                    for (i = 1; i <= size; i++)
                    {
                        for (j = 1; j <= size - i; j++)
                        {
                            printf(" ");    // ���� ���
                        }
                        for (j = 1; j <= 2 * i - 1; j++)
                        {
                            printf("*");    // * ���
                        }
                        printf("\n");
                    }printf("\n");
                }
            }
            else
            {
                printf("�ùٸ��� ���� ���Դϴ�.\n\n");
                continue;
            }
        }
        else
        {
            printf("�ùٸ��� ���� ���Դϴ�.\n\n");
        }
    }
    return 0;
}