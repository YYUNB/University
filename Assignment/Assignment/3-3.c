#include <stdio.h>
int main(void)
{
	int n1, n2, t;
	float d;

	scanf_s("%d %d", &n1, &n2);
	t = n1 * n1 * n1;
	d = (float)n1 / n2;

	printf("2개 정수값 입력:%d %d", n1, n2);
	printf("\n세제곱 연산 결과:[%d*%d*%d=%08d]", n1, n1, n1, t);
	printf("\n나눗셈 연산 결과:[%d/%d=%08.3f]", n1, n2, d);

	return 0;
}