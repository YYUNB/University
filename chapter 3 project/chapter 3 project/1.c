#include <stdio.h>
int main(void)
{
	int k, e, m;
	scanf_s("%d %d %d", &k, &e, &m);

	printf("1. ���� ���� : %d", k);
	printf("\n2. ���� ���� : %d", e);
	printf("\n3. ���� ���� : %d", m);

	printf("\n�� �� :%6d", k+ e + m);
	printf("\n��� ���� :%7.2f", (k + e + m) / 3.0);

	return 0;
}