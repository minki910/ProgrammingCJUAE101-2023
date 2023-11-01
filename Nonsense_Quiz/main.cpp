/* �߰������ ����Ʈ - �ͼ��� ���� ����! */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>    // rand�Լ��� srand�Լ��� ����ϱ� ���� �������
#include <string.h>    // strcmp(���ڿ� �� �Լ�)�� ����ϱ� ���� �������
#include<time.h>    // time�Լ��� ����ϱ� ���� �������
#define solo_game 1
#define two_player_game 2
#define solo_game_cost 500
#define two_player_game_cost 1000
#define END_code 9999

int choose_game(void)    // ���� ���� �Լ�
{
    while (true)    // ���ѷ���
    {
        int choice = 0;    // ������ ���ڸ� �Է� ���� ����
        printf("�����ϰ� ���� ������ ���ڸ� �������ּ���.\n(1. 1�ο�, 2. 2�ο�) (END : 9999): ");
        scanf("%d", &choice);

        switch (choice)    // �ùٸ��� ���� ���� ���, �޼��� ���
        {
        case solo_game:
        case two_player_game:
        case END_code:
            return choice;
        default:
            printf("�ùٸ��� ���� ���Դϴ�. �ٽ� �����ϼ���.\n\n");
        }
    }
}

int get_money(void)    // �� ����(�Է�) �Լ�
{
    int money = 0;    // �Է� ���� �� ����
    printf("\n���� �����ϼ���.(��): ");
    scanf("%d", &money);
    return money;
}

void give_change(int change)    // �ܵ� ��ȯ �Լ� 
{
    if (change > 0)    // �ܵ��� �������
    {
        printf("�ܵ� %d���� ��������.\n", change);
    }
    else    // �ܵ��� ���� ���
    {
        printf("�ܵ��� �����ϴ�.\n");
    }
}

char choose_player(void)    // �÷��̾� ����( 2�ο� ���� ���ý� )
{
    while (true)    // ���ѷ���
    {
        char player = 0;
        printf("���Ͻô� �÷��̾ �������ּ���. (A �Ǵ� B): ");    // �÷��̾� ����
        scanf(" %c", &player);

        switch (player)    // �ùٸ��� ���� ���� ���, �޼��� ���
        {
        case 'A':
        case 'B':
            return player;
        default:
            printf("�ùٸ��� ���� �÷��̾� �����Դϴ�. A �Ǵ� B �߿��� �����ϼ���.\n\n");
        }
    }
}

char questions[8][100] = {    // ���� ����Ʈ (8��)
    "����� �ٴϴ� �б���?(3����)",
    "���� �ڱ�Ұ��� �Ҷ� �ϴ� ����?(2����)",
    "�ѱ��� ��, �Ϻ��� ��, ȣ�ִ�?(4����)",
    "����� ������?(3����)",
    "õ����簡 Ÿ�� �ٴϴ� ����?(4����)",
    "�̻��� ������� ���ִ� ����?(2����)",
    "�հ� �������� �ϴ� �λ��?(3����)",
    "���ϸ����� ��Ŀ������ �����ϴ� ����?(5����)"
};

char answers[8][100] = {    // ������ ���� ��
    "�ù���",
    "����",
    "ȣ�ָӴ�",
    "ǲ���",
    "��������",
    "ġ��",
    "����ŷ",
    "���ֵ�����"
};

int play_game(void)    // ���� �÷��� �Լ�
{
    int correct_count = 0;    // ���� ���� �����ϴ� ���� 
    int selected_questions[8] = { 0 };    // ���õ� ������ ����ϴ� �迭 

    srand((unsigned int)(time(NULL)));    // ���� ������ ���� �õ� ����

    for (int i = 0; i < 3; i++)    // 3������ ���� ����
    {
        int random_index = 0;    // ���� ������ �����ϱ� ���� ���� (���� ��)

        do
        {
            random_index = rand() % 8;    // 0 ~ 7������ ������ �����Ͽ� ����
        } while (selected_questions[random_index]);    // �̹� ���õ� ������ ����

        selected_questions[random_index] = 1;    // ���õ� �������� ����

        printf("<%d��° ����> : %s\n", i + 1, questions[random_index]);
        char user_answer[100] = { 0 };    // �÷��̾ �Է��� �� ���� ����

        printf("���� �Է��ϼ���: ");
        scanf("%s", user_answer);

        // �÷��̾��� �Է°� ������ ���Ͽ� �¾Ҵ��� Ȯ���ϰ� ����� ��� (��ġ�ϸ� strcmp�� 0�� ��ȯ)
        if (strcmp(answers[random_index], user_answer) == 0)
        {
            printf("�����Դϴ�!\n\n");
            correct_count++;    // ��ġ�� ��� ���� ���� +1
        }
        else
        {
            printf("Ʋ�Ƚ��ϴ�. ������ '%s' �Դϴ�.\n\n", answers[random_index]);    // ������ ���
        }
    }
    printf("���� ���� ����: %d\n", correct_count);    // ���� ���� ���
    return correct_count;    // ���� ���� ��ȯ
}

void welcome_message(void)    // ȯ�� �޼��� �Լ�
{
    printf("<<<�ͼ��� ���ӿ� ���Ű��� ȯ���մϴ�!>>>\n\n");
    printf("<����>\n1�ο� : 500(��)\n2�ο� : 1000(��)\n\n");
}

int get_sufficient_money(int cost)    // ����� ���� �Է¹��� ��츦 �Ǵ��ϴ� �Լ�
{
    int money = 0;
    
    do    // �ϴ� ����
    {
        money = get_money();
        
        if (money < cost)    // �Է� ���� ���� ������ �ݾ׺��� ���� ���
        {
            printf("�ݾ��� �����մϴ�. �ٽ� �Է��ϼ���.\n\n");
        }
    } while (money < cost);    // ���ǿ� �ش��ϸ� ��� �ݺ�
    
    return money;
}

void play_solo_game(void)    // 1�ο� ���� �÷��� �Լ�
{
    int cost = solo_game_cost;    // ���� �ݾ�
    int money = get_sufficient_money(cost);
    int change = money - cost;    // �ܵ�

    printf("������ �����մϴ�.\n\n");
    play_game();    // ���� �÷��� �Լ� ȣ��
    give_change(change);    // �ܵ� ��ȯ �Լ� ȣ��
}

void play_two_player_game(void)    // 2�ο� ���� �÷��� �Լ�
{
    int cost = two_player_game;
    int money = get_sufficient_money(cost);
    int change = money - cost;    // �ܵ� 

    printf("2�ο� ������ �����մϴ�.\n\n");
    
    char first_player, second_player = 0;    // ù��°, �ι�° �÷��̾� ���� ����
    first_player = choose_player();
    second_player = ((first_player == 'A') ? 'B' : 'A');    // �ι�° �÷��̾�� ���õ��� ���� �÷��̾�
    
    int correct_countA, correct_countB = 0;    // ���� ���� ����

    printf("\n<<�÷��̾�%c ���� �����մϴ�.>>\n\n", first_player);    // ���õ� �÷��̾� ���� ����
    correct_countA = play_game();
    
    printf("\n<<�÷��̾�%c�� �����Դϴ�.>>\n\n", second_player);
    correct_countB = play_game();

    if (correct_countA > correct_countB)    // ���� �Ǵ�
    {
        printf("\n�÷��̾�A�� �¸��߽��ϴ�.\n");
    }
    else if (correct_countB > correct_countA)
    {
        printf("\n�÷��̾�B�� �¸��߽��ϴ�.\n");
    }
    else
    {
        printf("\n���º��Դϴ�.\n");
    }
    give_change(change);
}

int main(void) 
{
    welcome_message();    
    int game = choose_game();    // game������ �� ����
    
    switch (game)
    {
    case END_code:
        printf("���α׷��� �����մϴ�.\n\n");
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