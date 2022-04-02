#include <stdio.h>
int main(void)
{
	int k, e, m;
	scanf_s("%d %d %d", &k, &e, &m);

	printf("1. 국어 점수 : %d", k);
	printf("\n2. 영어 점수 : %d", e);
	printf("\n3. 수학 점수 : %d", m);

	printf("\n총 점 :%6d", k+ e + m);
	printf("\n평균 점수 :%7.2f", (k + e + m) / 3.0);

	return 0;
}