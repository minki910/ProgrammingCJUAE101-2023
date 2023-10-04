/* 자동 판매기 프로그램 */

#include <stdio.h>

int main(void) 
{
    int inserted_amount, item_price, change;    
    int thousand_bills, five_hundred_bills, hundred_bills;    
   
    int chocolate = 3500;
    int gum = 1100;
    int candy = 500;

    // 물품 출력
    printf("1. 초콜릿 : %d원\n", chocolate);
    printf("2. 껌 : %d원\n", gum);
    printf("3. 사탕 : %d원\n", candy);

    // 돈 투입
    printf("돈을 넣어주세요.(원) : ");    
    scanf_s("%d", &inserted_amount);

    // 물품 선택
    printf("물건을 선택해 주세요.(1, 2, 3): ");    
    scanf_s("%d", &item_price);

    // 물품 확인
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
        printf("잘못된 물건 번호입니다.\n");
        return 1;
    }

    // 잔돈 계산
    change = inserted_amount - item_price;    
    if (change < 0) 
    {
        printf("금액이 부족합니다.\n");
        return 1;
    }

    thousand_bills = change / 1000;
    change %= 1000;

    five_hundred_bills = change / 500;
    change %= 500;

    hundred_bills = change / 100;
    change %= 100;

    // 잔돈 출력
    printf("\n거스름돈: %d원\n", inserted_amount - item_price);
    printf("1000원 지폐: %d장\n", thousand_bills);
    printf("500원 지폐: %d장\n", five_hundred_bills);
    printf("100원 지폐: %d장\n", hundred_bills);
 
    return 0;
}