#include <stdio.h>
#include <windows.h>

int main(void)
{
	system("title Test 04_03");

	char str[100];

	printf("��迭�� ����Ͽ� ���ڿ��� ����ϴ� ���α׷�\n");
	printf(" ���ڿ� �Է� : ");

	scanf_s("%s", str, sizeof(str));
	printf(" ���ڿ� ��� : \"%s\"\n", str);
	printf(" ���ڿ� ��� �ּ� : %X\n",&str);

	return 0;
}