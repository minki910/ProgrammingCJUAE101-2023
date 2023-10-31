/* 문제.6 - 도형 출력 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define END_code 9999
#define diamond 1
#define equilateral_triangle 2

int main(void)
{
    int num = 0;
    int size = 0;    // 크기를 입력받을 변수
    int i, j = 0;

    printf("<도형 출력 프로그램>\n\n");

    while (1)    // 무한루프
    {
        printf("출력하고 싶은 도형을 선택하세요.\n1 : 마름모, 2 : 정삼각형 (END : 9999): ");    // 도형 선택
        scanf("%d", &num);

        if (num == END_code)    // 종료
        {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        if ((num == diamond) || (num == equilateral_triangle))    // 마름모 또는 정삼각형을 선택했을 경우
        {
            printf("원하시는 도형의 크기를 입력하세요 : ");    // 크기 입력
            scanf("%d", &size);

            if (size > 0)
            {
                if (num == diamond)    // 마름모일 경우
                {
                    for (i = 1; i <= size; i++)
                    {
                        for (j = 1; j <= size - i; j++)
                        {
                            printf(" ");    // 공백 출력
                        }
                        for (j = 1; j <= 2 * i - 1; j++)
                        {
                            printf("*");    // * 출력
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
                else if (num == equilateral_triangle)    // 정삼각형일 경우
                {
                    for (i = 1; i <= size; i++)
                    {
                        for (j = 1; j <= size - i; j++)
                        {
                            printf(" ");    // 공백 출력
                        }
                        for (j = 1; j <= 2 * i - 1; j++)
                        {
                            printf("*");    // * 출력
                        }
                        printf("\n");
                    }printf("\n");
                }
            }
            else
            {
                printf("올바르지 않은 값입니다.\n\n");
                continue;
            }
        }
        else
        {
            printf("올바르지 않은 값입니다.\n\n");
        }
    }
    return 0;
}