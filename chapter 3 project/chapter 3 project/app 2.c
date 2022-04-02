#include <stdio.h>
int main(void)
{
	int a;
	scanf_s("%d", &a);

	printf("%o %X", a, a);
	return 0;
}