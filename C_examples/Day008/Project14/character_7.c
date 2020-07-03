/*
	gets = get string 문자열 입력 전용함수
	puts = put string 문자열 출력 전용함수
	scanf => %s
	printf => %s
	//scanf("%s", str); //공백이나 엔터는 안 들어간다.

	주의!!
	문자열의 입출력은 보다 안정적이고 정확한 fgets()와 fputs() 함수를 사용하는 것을 권장한다. 
	fgets
	fputs
*/

#include <stdio.h>
//#include <string.h>
#pragma warning(disable:4996)

int main() {
	char str[20]; //20byte - 영문자 19, 한글 9자

	printf("문자열 = ");
	//scanf("%s", str);												//공백은 안 들어간다. 
	//gets(str);															//공백처리가능

	//scanf("%s", str);												//크기보다 큰거오면 그냥 입력하고 그 뒤에 따라오는 자리에 data가 소실
	//gets(str);															//크기보다 큰거오면 그냥 입력하고 그 뒤에 따라오는 자리에 data가 소실

	fgets(str, 20, stdin);											//입력은 허용하지만 실제 할당은 선언한 크기만큼만! 
	printf("입력한 문자열 : %s\n", str);

	return 0;
}