#include <stdio.h>
#include <math.h>
#define num { -5, 3, 3, -4, 3 }
#define square 2

typedef struct 
{
    double x;
    double y;
    double a;    // x ���
    double b;    // y ���
    double c;    // �����
}Equation;

void calculate_D(Equation line, Equation point)    // �ִܰŸ� ��� (���� ���)
{
    double shortest_D= fabs((line.a * point.x + line.b * point.y + line.c) / sqrt(pow(line.a, square) + pow(line.b, square)));
    
    printf("�ִܰŸ�: %.1lf\n", shortest_D);
}

int main(void) 
{    
    Equation data = num; 

    calculate_D(data, data);

    return 0;
}