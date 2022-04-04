#include <stdio.h>
#include <windows.h>

int main(void)
{
	system("title Test 04_03"); /* 안해도 됨 ^_^ */

	char str[100];

	printf("■배열을 사용하여 문자열을 출력하는 프로그램\n");
	printf(" 문자열 입력 : ");

	scanf_s("%s", str, sizeof(str)); /* &d 등 '&'를 쓰는 이유는 주소를 찾기 위해서  BUT 문자열(%s,str)은 이미 주소를 내포하기 때문에 '&' 안써도 됨 */
	printf(" 문자열 출력 : \"%s\"\n", str);
	printf(" 문자열 상수 주소 : %p\n", str);

	/* &str[0] == str */

	return 0;
}