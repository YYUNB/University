#include <stdio.h>

#define inchTOcm 2.54 /*1inch=2.54cm*/

int main(void)
{
	float inch;

	printf("����ġ�� ��Ƽ���ͷ� ȯ���ϴ� ���α׷�\n");
	printf(" ��ġ �Է�(�Ҽ� ��° �ڸ�) : ");

	scanf_s("%f", &inch);
	printf(" %.2f��ġ�� %.2fcm�Դϴ�.\n", inch, inch * inchTOcm);

	return 0;
}