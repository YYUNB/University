#include <stdio.h>
#include <windows.h>

int main(void)
{
	system("title Test 04_03"); /* ���ص� �� ^_^ */

	char str[100];

	printf("��迭�� ����Ͽ� ���ڿ��� ����ϴ� ���α׷�\n");
	printf(" ���ڿ� �Է� : ");

	scanf_s("%s", str, sizeof(str)); /* &d �� '&'�� ���� ������ �ּҸ� ã�� ���ؼ�  BUT ���ڿ�(%s,str)�� �̹� �ּҸ� �����ϱ� ������ '&' �Ƚᵵ �� */
	printf(" ���ڿ� ��� : \"%s\"\n", str);
	printf(" ���ڿ� ��� �ּ� : %p\n", str);

	/* &str[0] == str */

	return 0;
}