/* P.205 도전 실전 문제 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;    // 입력 받을 정수
    int i, j;
    int PrimeNumber = 0;    // 소수 여부를 나타내는 변수 (1: 소수, 0: 소수 아님)
    int count = 0;    // 출력된 소수의 개수를 세는 변수

    printf("2 이상의 정수를 입력하세요 : ");    // 값 입력
    scanf("%d", &num);

    for (i = 2; i <= num; i++)    // 2부터 입력한 숫자까지 반복
    {   
        PrimeNumber = 1;    // 일단 소수라고 가정

        for (j = 2; j < i; j++)
        {
            if ((i % j) == 0)    // 나누어 떨어지는 경우
            {
                PrimeNumber = 0;    // 소수가 아님
                break;    // 종료
            }
        }

        if (PrimeNumber == 1)    // 소수일 경우
        {
            printf("%5d", i);
            count++;    

            if ((count % 5) == 0)    // 5개의 소수를 출력할 때마다 줄바꿈
            {
                printf("\n");
            }
        }
    }
    
    return 0;
}
