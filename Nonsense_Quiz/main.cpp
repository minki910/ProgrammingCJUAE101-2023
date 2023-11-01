/* 중간고사전 레포트 - 넌센스 퀴즈 게임! */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>    // rand함수와 srand함수를 사용하기 위한 헤더파일
#include <string.h>    // strcmp(문자열 비교 함수)를 사용하기 위한 헤더파일
#include<time.h>    // time함수를 사용하기 위한 헤더파일
#define solo_game 1
#define two_player_game 2
#define solo_game_cost 500
#define two_player_game_cost 1000
#define END_code 9999

int choose_game(void)    // 게임 선택 함수
{
    while (true)    // 무한루프
    {
        int choice = 0;    // 게임의 숫자를 입력 받을 변수
        printf("실행하고 싶은 게임의 숫자를 선택해주세요.\n(1. 1인용, 2. 2인용) (END : 9999): ");
        scanf("%d", &choice);

        switch (choice)    // 올바르지 않은 값일 경우, 메세지 출력
        {
        case solo_game:
        case two_player_game:
        case END_code:
            return choice;
        default:
            printf("올바르지 않은 값입니다. 다시 선택하세요.\n\n");
        }
    }
}

int get_money(void)    // 돈 투입(입력) 함수
{
    int money = 0;    // 입력 받을 돈 변수
    printf("\n돈을 투입하세요.(원): ");
    scanf("%d", &money);
    return money;
}

void give_change(int change)    // 잔돈 반환 함수 
{
    if (change > 0)    // 잔돈이 있을경우
    {
        printf("잔돈 %d원을 받으세요.\n", change);
    }
    else    // 잔돈이 없을 경우
    {
        printf("잔돈이 없습니다.\n");
    }
}

char choose_player(void)    // 플레이어 선택( 2인용 게임 선택시 )
{
    while (true)    // 무한루프
    {
        char player = 0;
        printf("원하시는 플레이어를 선택해주세요. (A 또는 B): ");    // 플레이어 선택
        scanf(" %c", &player);

        switch (player)    // 올바르지 않은 값일 경우, 메세지 출력
        {
        case 'A':
        case 'B':
            return player;
        default:
            printf("올바르지 않은 플레이어 선택입니다. A 또는 B 중에서 선택하세요.\n\n");
        }
    }
}

char questions[8][100] = {    // 질문 리스트 (8개)
    "펭귄이 다니는 학교는?(3글자)",
    "무가 자기소개를 할때 하는 말은?(2글자)",
    "한국은 원, 일본은 엔, 호주는?(4글자)",
    "사과가 웃으면?(3글자)",
    "천하장사가 타고 다니는 차는?(4글자)",
    "이상한 사람들이 모여있는 곳은?(2글자)",
    "왕과 만났을때 하는 인사는?(3글자)",
    "돌하르방이 서커스단을 보고하는 말은?(5글자)"
};

char answers[8][100] = {    // 질문에 대한 답
    "냉방중",
    "나무",
    "호주머니",
    "풋사과",
    "으랏차차",
    "치과",
    "하이킹",
    "제주도좋다"
};

int play_game(void)    // 게임 플레이 함수
{
    int correct_count = 0;    // 맞춘 개수 저장하는 변수 
    int selected_questions[8] = { 0 };    // 선택된 질문을 기록하는 배열 

    srand((unsigned int)(time(NULL)));    // 난수 생성을 위한 시드 설정

    for (int i = 0; i < 3; i++)    // 3가지의 질문 출제
    {
        int random_index = 0;    // 랜덤 질문을 선택하기 위한 변수 (랜덤 행)

        do
        {
            random_index = rand() % 8;    // 0 ~ 7까지의 난수를 생성하여 저장
        } while (selected_questions[random_index]);    // 이미 선택된 질문을 배제

        selected_questions[random_index] = 1;    // 선택된 질문들을 저장

        printf("<%d번째 문제> : %s\n", i + 1, questions[random_index]);
        char user_answer[100] = { 0 };    // 플레이어가 입력한 답 저장 변수

        printf("답을 입력하세요: ");
        scanf("%s", user_answer);

        // 플레이어의 입력과 정답을 비교하여 맞았는지 확인하고 결과를 출력 (일치하면 strcmp가 0을 반환)
        if (strcmp(answers[random_index], user_answer) == 0)
        {
            printf("정답입니다!\n\n");
            correct_count++;    // 일치할 경우 맞춘 개수 +1
        }
        else
        {
            printf("틀렸습니다. 정답은 '%s' 입니다.\n\n", answers[random_index]);    // 오답일 경우
        }
    }
    printf("맞춘 퀴즈 개수: %d\n", correct_count);    // 맞춘 개수 출력
    return correct_count;    // 맞춘 개수 반환
}

void welcome_message(void)    // 환영 메세지 함수
{
    printf("<<<넌센스 게임에 오신것을 환영합니다!>>>\n\n");
    printf("<가격>\n1인용 : 500(원)\n2인용 : 1000(원)\n\n");
}

int get_sufficient_money(int cost)    // 충분한 돈을 입력받을 경우를 판단하는 함수
{
    int money = 0;
    
    do    // 일단 실행
    {
        money = get_money();
        
        if (money < cost)    // 입력 받은 값이 게임의 금액보다 작을 경우
        {
            printf("금액이 부족합니다. 다시 입력하세요.\n\n");
        }
    } while (money < cost);    // 조건에 해당하면 계속 반복
    
    return money;
}

void play_solo_game(void)    // 1인용 게임 플레이 함수
{
    int cost = solo_game_cost;    // 게임 금액
    int money = get_sufficient_money(cost);
    int change = money - cost;    // 잔돈

    printf("게임을 시작합니다.\n\n");
    play_game();    // 게임 플레이 함수 호출
    give_change(change);    // 잔돈 반환 함수 호출
}

void play_two_player_game(void)    // 2인용 게임 플레이 함수
{
    int cost = two_player_game;
    int money = get_sufficient_money(cost);
    int change = money - cost;    // 잔돈 

    printf("2인용 게임을 시작합니다.\n\n");
    
    char first_player, second_player = 0;    // 첫번째, 두번째 플레이어 변수 선언
    first_player = choose_player();
    second_player = ((first_player == 'A') ? 'B' : 'A');    // 두번째 플레이어는 선택되지 않은 플레이어
    
    int correct_countA, correct_countB = 0;    // 맞춘 개수 변수

    printf("\n<<플레이어%c 먼저 시작합니다.>>\n\n", first_player);    // 선택된 플레이어 먼저 시작
    correct_countA = play_game();
    
    printf("\n<<플레이어%c의 차례입니다.>>\n\n", second_player);
    correct_countB = play_game();

    if (correct_countA > correct_countB)    // 승패 판단
    {
        printf("\n플레이어A가 승리했습니다.\n");
    }
    else if (correct_countB > correct_countA)
    {
        printf("\n플레이어B가 승리했습니다.\n");
    }
    else
    {
        printf("\n무승부입니다.\n");
    }
    give_change(change);
}

int main(void) 
{
    welcome_message();    
    int game = choose_game();    // game변수에 값 저장
    
    switch (game)
    {
    case END_code:
        printf("프로그램을 종료합니다.\n\n");
        break;
    case solo_game:
        play_solo_game();
        break;
    case two_player_game:
        play_two_player_game();
        break;
    }
    
    return 0;
}