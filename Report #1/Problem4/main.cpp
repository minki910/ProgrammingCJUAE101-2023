/* �ڵ� �Ǹű� ���α׷� */

#include <stdio.h>

int main(void) 
{
    int inserted_amount = 0, item_price = 0, change = 0;    
   
    int chocolate = 3500;
    int gum = 1100;
    int candy = 500;

    // ��ǰ ���
    printf("1. ���ݸ� : %d��\n", chocolate);
    printf("2. �� : %d��\n", gum);
    printf("3. ���� : %d��\n", candy);

    // �� ����
    printf("���� �־��ּ���.(��) : ");    
    scanf_s("%d", &inserted_amount);

    // ��ǰ ����
    printf("������ ������ �ּ���.(1, 2, 3): ");    
    scanf_s("%d", &item_price);

    // ��ǰ Ȯ��
    switch (item_price) 
    {
    case 1:
        item_price = chocolate;
        break;
    case 2:
        item_price = gum;
        break;
    case 3:
        item_price = candy;
        break;
    default:
        printf("�߸��� ���� ��ȣ�Դϴ�.\n");

        return 1;
    }

    // �ܵ� ���
    change = inserted_amount - item_price;    
    if (change < 0) 
    {
        printf("�ݾ��� �����մϴ�.\n");

        return 1;
    }

    // �ܵ� ���
    printf("\n�ܵ�: %d��\n", inserted_amount - item_price);
    printf("1000�� ����: %d��\n", change / 1000);
    change = change % 1000;
    printf("500�� ����: %d��\n", change / 500);
    change = change % 500;
    printf("100�� ����: %d��\n", change / 100);
    change = change % 100;
 
    return 0;
}