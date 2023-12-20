/* ���� �ð� ��� ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>    // �ð� ���� ��� ����
#define cnt 7

typedef struct
{
    char country[20];
    int UTC_offset;
} UTC;

UTC list[cnt] =    // ���� ����Ʈ
{
    {"LA", -8},
    {"NY", -5},
    {"London", 0},
    {"Paris", 1},
    {"Perth", 8},
    {"Tokyo", 9},
    {"Sydney", 10}
};

void print_list(void)    // ����Ʈ ��� �Լ�
{
    printf("<<���� �ð� ��� ���α׷�>>\n\n");

    for (int i = 0; i < cnt; i++)
    {
        printf("%d. %s (UTC %d)\n", i + 1, list[i].country, list[i].UTC_offset);
    }
    printf("\n");
}

int input(void)    // ��ȣ ���� �Լ�
{
    int choice = 0;

    printf("���ϴ� ������ ���ڸ� �Է��ϼ���.: ");
    scanf("%d", &choice);

    return choice;
}

void calculate(int choice)    // �ð� ��� �Լ�
{
    if (choice >= 1 && choice <= cnt)
    {
        time_t current_time;    
        struct tm* ptime;

        time(&current_time);
        ptime = gmtime(&current_time);    // GMT�ð����� ��ȯ

        ptime->tm_hour = (ptime->tm_hour + list[choice - 1].UTC_offset + 24) % 24;    // 24�ð� ����

        printf("%s�� ���� �ð�: %04d-%02d-%02d %02d:%02d:%02d\n", list[choice - 1].country, ptime->tm_year+1900, ptime->tm_mon+1, ptime->tm_mday, ptime->tm_hour, ptime->tm_min, ptime->tm_sec);
    }
    else
    {
        printf("�߸��� �Է��Դϴ�. ���α׷��� �����մϴ�.\n");
    }
}

int main(void)
{
    print_list();

    int choice = input();

    calculate(choice);

    return 0;
}