#include <stdio.h>
int main(void)
{
	char op;
	char str[12];

	scanf_s("%c", &op);
	getchar(); /*scanf_s를 여러개 입력하면 엔터도 인식되어 프로그램이 끝날 수 있음-getchar로 버퍼메모리 제거*/
	scanf_s("%s", &str, sizeof(str)); /*문자열을 scanf_s로 받으려면 sizeof() 해줘야 인식 가능*/

	printf("1.문자입력:%c", op);
	printf("\n2.문자열 입력:%s", str);
	printf("\n문자 출력: %c", op);
	printf("\n문자열 출력:|%s\t|", str);

	return 0;
}