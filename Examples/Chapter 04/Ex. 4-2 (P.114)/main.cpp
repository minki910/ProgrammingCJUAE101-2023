#include <stdio.h>

int main(void)
{
	double apple;
	int banna;
	int orange;

	apple = 5.0 / 2.0;
	banna = 5 / 2;
	orange = 5 % 2;

	printf("apple : %.1lf\n", apple);
	printf("banna : %d\n", banna);
	printf("orange : %d\n", orange);

	return 0;
}