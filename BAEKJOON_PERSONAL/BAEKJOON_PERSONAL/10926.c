#include <stdio.h>
int main(void)
{
	char a[51];

	scanf_s("%s", &a,sizeof(a)); /* scanf_s로 문자열을 받으려면 sizeof() 써야함 */

	printf("%s??!", a);

	return 0;
}