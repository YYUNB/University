#include <stdio.h>
int main(void)
{
	char op;
	char str[12];

	scanf_s("%c", &op);
	getchar(); /*scanf_s�� ������ �Է��ϸ� ���͵� �νĵǾ� ���α׷��� ���� �� ����-getchar�� ���۸޸� ����*/
	scanf_s("%s", &str, sizeof(str)); /*���ڿ��� scanf_s�� �������� sizeof() ����� �ν� ����*/

	printf("1.�����Է�:%c", op);
	printf("\n2.���ڿ� �Է�:%s", str);
	printf("\n���� ���: %c", op);
	printf("\n���ڿ� ���:|%s\t|", str);

	return 0;
}