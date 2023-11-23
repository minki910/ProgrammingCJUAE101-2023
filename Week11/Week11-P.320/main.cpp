#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define count 6

void input_nums(int* lotto_nums)    // 배열에 로또 번호를 입력하는 함수
{
    int num = 0;
    int i, j = 0;
    int check = 0;    // 중복 여부 체크 변수

    for (i = 0; i < count; i++)
    {
        printf("번호 입력 : ");
        scanf("%d", &num);

        check = 0;

        for (j = 0; j < i; j++)
        {
            if (num == lotto_nums[j])
            {
                check = 1;
                break;
            }
        }

        if (!check)
        {
            lotto_nums[i] = num;
        }
       
        else
        {
            printf("같은 번호가 있습니다!\n");
            i--;
        }
    }
}

void print_nums(int* lotto_nums)    // 배열에 저장된 값을 출력하는 함수
{
    int i = 0;

    printf("로또 번호 : ");

    for (i = 0; i < count; i++)
    {
        printf("%d  ", lotto_nums[i]);
    }
}  

int main(void)
{
    int lotto_nums[count];            // 로또 번호를 저장할 배열

    input_nums(lotto_nums);       // 입력함수 호출
    print_nums(lotto_nums);       // 출력함수 호출
    
    return 0;
}