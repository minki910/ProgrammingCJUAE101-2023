/* 세계 시간 계산 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>    // 시간 관련 헤더 파일
#define cnt 7

typedef struct
{
    char country[20];
    int UTC_offset;
} UTC;

UTC list[cnt] =    // 지역 리스트
{
    {"LA", -8},
    {"NY", -5},
    {"London", 0},
    {"Paris", 1},
    {"Perth", 8},
    {"Tokyo", 9},
    {"Sydney", 10}
};

void print_list(void)    // 리스트 출력 함수
{
    printf("<<세계 시간 계산 프로그램>>\n\n");

    for (int i = 0; i < cnt; i++)
    {
        printf("%d. %s (UTC %d)\n", i + 1, list[i].country, list[i].UTC_offset);
    }
    printf("\n");
}

int input(void)    // 번호 선택 함수
{
    int choice = 0;

    printf("원하는 지역의 숫자를 입력하세요.: ");
    scanf("%d", &choice);

    return choice;
}

void calculate(int choice)    // 시간 계산 함수
{
    if (choice >= 1 && choice <= cnt)
    {
        time_t current_time;    
        struct tm* ptime;

        time(&current_time);
        ptime = gmtime(&current_time);    // GMT시간으로 반환

        ptime->tm_hour = (ptime->tm_hour + list[choice - 1].UTC_offset + 24) % 24;    // 24시간 형식

        printf("%s의 현재 시간: %04d-%02d-%02d %02d:%02d:%02d\n", list[choice - 1].country, ptime->tm_year+1900, ptime->tm_mon+1, ptime->tm_mday, ptime->tm_hour, ptime->tm_min, ptime->tm_sec);
    }
    else
    {
        printf("잘못된 입력입니다. 프로그램을 종료합니다.\n");
    }
}

int main(void)
{
    print_list();

    int choice = input();

    calculate(choice);

    return 0;
}