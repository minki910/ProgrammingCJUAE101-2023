/* ����.4 - sqrt�� �̿��� �������� �ð� ��� ���α׷� */
#define g 9.81    // �߷°��ӵ�(m/s^2)
#define h 100    // ����(m)
#define m 1    // ��Ʋ�� ����(kg)
#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("1kg�� ��Ʋ���� �������� �ð� ��� ���α׷�\n");

	double time = 0;

	time = sqrt((2 * h) / g);    // �������� ���� h = 0.5 * g * t^2 �̿�

	printf("���鿡 �����ϴµ� �ɸ� �ð�(s) : %.3lf\n", time);

	return 0;
}