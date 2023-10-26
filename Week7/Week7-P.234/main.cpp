/* P.234 도전실전예제 - 1부터 10까지의 합 계산(재귀호출 사용) */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rec_func(int n);    // 함수 선언

int rec_func(int n)    // 함수 정의 시작
{
    if (n == 1)    // n이 1일 경우
    {
        return n;
    }
    else    // n이 1이 아닐 경우
    {
        return n + rec_func(n - 1);
    }
}

int main(void) 
{
    int n = 10;
    int result = 0;    // 함수의 변환값을 저장할 변수
    
    result = rec_func(n);    // 함수 호출, 변환된 값을 저장
    
    printf("1부터 %d까지의 합: %d\n", n, result);
    
    return 0;
}