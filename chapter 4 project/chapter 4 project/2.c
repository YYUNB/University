#include <stdio.h>

int main(void)
{
	const float mileTOkm = 1.61;
	float mile;
	
	printf("�Ḷ���� ų�ι��ͷ� ȯ���ϴ� ���α׷�\n");
	printf(" mile �Է�(�Ҽ������� 2�ڸ�) : ");
	
	scanf_s("%f", &mile);
	printf(" %.2f������ %.2fkm�Դϴ�.\n", mile, mile * mileTOkm);

	return 0;
}