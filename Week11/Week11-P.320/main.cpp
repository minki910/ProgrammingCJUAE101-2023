#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define count 6

void input_nums(int* lotto_nums)    // �迭�� �ζ� ��ȣ�� �Է��ϴ� �Լ�
{
    int num = 0;
    int i, j = 0;
    int check = 0;    // �ߺ� ���� üũ ����

    for (i = 0; i < count; i++)
    {
        printf("��ȣ �Է� : ");
        scanf("%d", &num);

        check = 0;

        for (j = 0; j < i; j++)
        {
            if (num == lotto_nums[j])
            {
                check = 1;
                break;
            }
        }

        if (!check)
        {
            lotto_nums[i] = num;
        }
       
        else
        {
            printf("���� ��ȣ�� �ֽ��ϴ�!\n");
            i--;
        }
    }
}

void print_nums(int* lotto_nums)    // �迭�� ����� ���� ����ϴ� �Լ�
{
    int i = 0;

    printf("�ζ� ��ȣ : ");

    for (i = 0; i < count; i++)
    {
        printf("%d  ", lotto_nums[i]);
    }
}  

int main(void)
{
    int lotto_nums[count];            // �ζ� ��ȣ�� ������ �迭

    input_nums(lotto_nums);       // �Է��Լ� ȣ��
    print_nums(lotto_nums);       // ����Լ� ȣ��
    
    return 0;
}