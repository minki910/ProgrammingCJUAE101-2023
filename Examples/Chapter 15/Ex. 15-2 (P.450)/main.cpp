#include <stdio.h>

void swap_ptr(const char** ppa, const char** ppb)
{
	const char* pt = { NULL };
	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}

int main(void)
{
	const char* pa = "success";
	const char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);

	return 0;
}