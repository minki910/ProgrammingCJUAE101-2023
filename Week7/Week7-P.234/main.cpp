/* P.234 ������������ - 1���� 10������ �� ���(���ȣ�� ���) */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rec_func(int n);    // �Լ� ����

int rec_func(int n)    // �Լ� ���� ����
{
    if (n == 1)    // n�� 1�� ���
    {
        return n;
    }
    else    // n�� 1�� �ƴ� ���
    {
        return n + rec_func(n - 1);
    }
}

int main(void) 
{
    int n = 10;
    int result = 0;    // �Լ��� ��ȯ���� ������ ����
    
    result = rec_func(n);    // �Լ� ȣ��, ��ȯ�� ���� ����
    
    printf("1���� %d������ ��: %d\n", n, result);
    
    return 0;
}