#include <stdio.h>
int main(void)
{
	char op;
	char str[12];

	getchar("%c %s", &op, &str);

	printf("1.�����Է�:%c", op);
	printf("\n2.���ڿ� �Է�:%s", str);
	printf("\n���� ���: %c", op);
	printf("\n���ڿ� ���:|%s\t|", str);

	return 0;
}