#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi = 0;
	double* pd = 0;

	pi = (int*)malloc(sizeof(int));
	if(pi == NULL)
	{
		printf("# �޸𸮰� �����մϴ�.\n");
		exit(1);
	}
	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi);
	printf("�Ǽ������� ��� : %.1lf\n", *pd);

	free(pi);
	free(pd);

	return 0;
}