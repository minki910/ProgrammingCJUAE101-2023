#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(const char* type, void* pa, void* pb)
{
    if (strcmp(type, "int") == 0)    // int일 경우
    {
        int t = 0;
        t = *(int*)pa;
        *(int*)pa = *(int*)pb;
        *(int*)pb = t;
    }
    else if (strcmp(type, "double") == 0)    // double일 경우
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

    printf("첫 번째 사람의 나이와 키 입력 : ");
    scanf("%d %lf", &age1, &height1);

    printf("두 번째 사람의 나이와 키 입력 : ");
    scanf("%d %lf", &age2, &height2);

    swap("int", &age1, &age2);    // int형 변수 a, b의 값을 바꿀때
    swap("double", &height1, &height2);    // double형 변수 a, b의 값을 바꿀 때

    printf("첫 번째 사람의 나이와 키 : %d, %.1lf", age1, height1);
    printf("\n");
    printf("두 번째 사람의 나이와 키 : %d, %.1lf", age2, height2);
    printf("\n");

    return 0;
}