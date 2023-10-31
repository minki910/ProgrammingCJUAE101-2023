/* ����.4 - �������� �ð� ��� ���α׷� */
#define g 9.81    // �߷°��ӵ�(m/s^2)
#define h 100    // ����(m)
#define m 1    // ��Ʋ�� ����(kg)
#include <stdio.h>

int main(void)
{
	printf("1kg�� ��Ʋ���� �������� �ð� ��� ���α׷�\n");

	double time = 0;
	double ground_height = 0;    // ��ǥ���� ���̸� 0m�� ����

	do
	{
		ground_height = (h - 0.5 * g * (time * time));   // �������� ���� h = 0.5 * g * t^2 �̿� 
		time = (time + 0.0000001);    // �ð��� ��������
	} while (ground_height >= 0);
	
	printf("���鿡 �����ϴµ� �ɸ� �ð�(s) : %.3lf\n", time);

	return 0;
}