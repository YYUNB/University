#include <stdio.h>
int main(void)
{
	int n1, n2, t;
	float d;

	scanf_s("%d %d", &n1, &n2);
	t = n1 * n1 * n1;
	d = (float)n1 / n2;

	printf("2�� ������ �Է�:%d %d", n1, n2);
	printf("\n������ ���� ���:[%d*%d*%d=%08d]", n1, n1, n1, t);
	printf("\n������ ���� ���:[%d/%d=%08.3f]", n1, n2, d);

	return 0;
}