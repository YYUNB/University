#include <stdio.h>
int main(void)
{
	char op;
	char str[12];

	getchar("%c %s", &op, &str);

	printf("1.문자입력:%c", op);
	printf("\n2.문자열 입력:%s", str);
	printf("\n문자 출력: %c", op);
	printf("\n문자열 출력:|%s\t|", str);

	return 0;
}