#include <stdio.h>
int main(void)
{
	char a[51];

	scanf_s("%s", &a,sizeof(a)); /* scanf_s�� ���ڿ��� �������� sizeof() ����� */

	printf("%s??!", a);

	return 0;
}