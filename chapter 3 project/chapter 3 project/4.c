#include <stdio.h>
int main()
{
	char a;
	scanf_s("%c", &a);

	printf("알파벳 입력:%c", a);
	printf("\n입력한 알파벳:%c", a);
	printf("\n알파벳 아스키 코드값:%d", a);
	printf("\n입력한 알파벳+8:%c", a + 8);
	printf("\n프로그램을 종료합니다.");

	return 0;
}