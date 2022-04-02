#include <stdio.h>
int main(void)
{
	double A, B;

	scanf_s("%lf %lf", &A, &B);
	printf("%.10lf", A / B); /* %f를 하면 6자리밖에 표현 안됨 ^_^ */

	return 0;
}