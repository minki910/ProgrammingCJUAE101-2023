#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 5208)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define cnt_people 5    // 인원 수
#define cnt_subject 3.0    // 과목 수

typedef struct
{
	int num = 0;    // 학번
	char name[20] = { NULL };    // 이름
	int kor, eng, math = 0;    // 국,영,수
	int sum = 0;    // 총점
	double average = 0.0;    // 평균
	char grade = NULL;    // 학점
}student;

void input(student* pn)    // 입력 함수
{
	int i = 0;

	for (i = 0; i < cnt_people; i++)
	{
		printf("학번 : ");
		scanf("%d", &pn->num);
		printf("이름 : ");
		scanf("%s", pn->name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d%d%d", &pn->kor, &pn->eng, &pn->math);
		pn++;
	}
}

void calculate(student* pn)    // 계산 함수
{
	int i = 0;

	for (i = 0; i < cnt_people; i++)
	{
		pn->sum = (pn->kor + pn->eng + pn->math);
		pn->average = (pn->sum / cnt_subject);

		if (pn->average >= 90)
		{
			pn->grade = 'A';
		}
		else if (pn->average >= 80)
		{
			pn->grade = 'B';
		}
		else if (pn->average >= 70)
		{
			pn->grade = 'C';
		}
		else
		{
			pn->grade = 'F';
		}
		pn++;
	}
}

void sort(student* pary)    // 정렬 함수
{
	student temp;
	int i, j = 0;
	int max = 0;

	for (i = 0; i < cnt_people-1; i++)
	{
		max = i;
		for (j = i + 1; j < cnt_people; j++)
		{
			if (pary[max].sum < pary[j].sum)
			{
				max = j;
			}
		}
		if (max != i)
		{
			temp = pary[max];
			pary[max] = pary[i];
			pary[i] = temp;
		}
	}
}

void print(student* pn)    // 출력 함수
{
	int i = 0;

	for (i = 0; i < cnt_people; i++)
	{
		printf("%5d%5s%5d%5d%5d%5d%5.1lf%5c\n", pn->num, pn->name, pn->kor, pn->eng, pn->math, pn->sum, pn->average, pn->grade);
		pn++;
	}
}

int main(void)
{
	student ary[5];           
	
	input(ary);          
	calculate(ary);           
	
	printf("# 정렬 전 데이터...\n");
	print(ary);          
	sort(ary);           
	
	printf("\n# 정렬 후 데이터...\n");
	print(ary);          
	
	return 0;
}