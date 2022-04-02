#include <stdio.h>
int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);

	printf("%d", a + b);
	printf("\n%d", a - b);
	printf("\n%d", a * b);
	printf("\n%d", a / b);
	printf("\n%d", a % b);

	return 0;
}