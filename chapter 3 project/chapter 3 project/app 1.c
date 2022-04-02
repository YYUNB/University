#include <stdio.h>
int main(void)
{
	int c;
	float f;

	scanf_s("%d", &c);
	f = 1.8 * c + 32;

	printf("%.3f", f);

	return 0;
}