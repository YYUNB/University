#include <stdio.h>

int main(void)
{
	const float mileTOkm = 1.61;
	float mile;
	
	printf("■마일을 킬로미터로 환산하는 프로그램\n");
	printf(" mile 입력(소수점이하 2자리) : ");
	
	scanf_s("%f", &mile);
	printf(" %.2f마일은 %.2fkm입니다.\n", mile, mile * mileTOkm);

	return 0;
}