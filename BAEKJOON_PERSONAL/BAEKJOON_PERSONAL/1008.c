#include <stdio.h>
int main(void)
{
	double A, B;

	scanf_s("%lf %lf", &A, &B);
	printf("%.10lf", A / B); /* %f�� �ϸ� 6�ڸ��ۿ� ǥ�� �ȵ� ^_^ */

	return 0;
}