#include <stdio.h>
#include <math.h>
#define num { -5, 3, 3, -4, 3 }
#define square 2

typedef struct 
{
    double x;
    double y;
    double a;    // x 계수
    double b;    // y 계수
    double c;    // 상수항
}Equation;

void calculate_D(Equation line, Equation point)    // 최단거리 계산 (공식 사용)
{
    double shortest_D= fabs((line.a * point.x + line.b * point.y + line.c) / sqrt(pow(line.a, square) + pow(line.b, square)));
    
    printf("최단거리: %.1lf\n", shortest_D);
}

int main(void) 
{    
    Equation data = num; 

    calculate_D(data, data);

    return 0;
}