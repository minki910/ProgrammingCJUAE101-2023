#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(const char* type, void* pa, void* pb)
{
    if (strcmp(type, "int") == 0)    // int�� ���
    {
        int t = 0;
        t = *(int*)pa;
        *(int*)pa = *(int*)pb;
        *(int*)pb = t;
    }
    else if (strcmp(type, "double") == 0)    // double�� ���
    {
        double dt = 0.0;
        dt = *(double*)pa;
        *(double*)pa = *(double*)pb;
        *(double*)pb = dt;
    }
}

int main(void)
{
    int age1 = 0, age2 = 0;
    double height1 = 0.0, height2 = 0.0;

    printf("ù ��° ����� ���̿� Ű �Է� : ");
    scanf("%d %lf", &age1, &height1);

    printf("�� ��° ����� ���̿� Ű �Է� : ");
    scanf("%d %lf", &age2, &height2);

    swap("int", &age1, &age2);    // int�� ���� a, b�� ���� �ٲܶ�
    swap("double", &height1, &height2);    // double�� ���� a, b�� ���� �ٲ� ��

    printf("ù ��° ����� ���̿� Ű : %d, %.1lf", age1, height1);
    printf("\n");
    printf("�� ��° ����� ���̿� Ű : %d, %.1lf", age2, height2);
    printf("\n");

    return 0;
}