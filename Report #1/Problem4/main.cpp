/* �ڵ� �Ǹű� ���α׷� */

#include <stdio.h>

int main(void) 
{
    int inserted_amount, item_price, change;    
    int thousand_bills, five_hundred_bills, hundred_bills;    
   
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

    thousand_bills = change / 1000;
    change %= 1000;

    five_hundred_bills = change / 500;
    change %= 500;

    hundred_bills = change / 100;
    change %= 100;

    // �ܵ� ���
    printf("\n�Ž�����: %d��\n", inserted_amount - item_price);
    printf("1000�� ����: %d��\n", thousand_bills);
    printf("500�� ����: %d��\n", five_hundred_bills);
    printf("100�� ����: %d��\n", hundred_bills);
 
    return 0;
}