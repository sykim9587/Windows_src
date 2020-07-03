/*
	strcat : 두 개의 문자열을 붙인다. 

	char fruit[80] = "straw";
	strcat(fruit, "berry"); //앞에다가 뒤에를 붙여라
	printf("%s\n", fruit);


	봄 - 개나리, 여름 - 장미, 가을 - 국화, 겨울 - 매화
	키보드를 통해 계절이름을 입력받아서 입력받은 계절에 해당하는 꽃 이름을 출력하는 프로그램 구현

	<입력>
	계절 = 가을
	국화
	<처리조건>
	strcmp 함수를 이용하여 구현할 것.
*/

#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char str[50];
	printf("계절 = ");
	scanf("%s", str);

	if (strcmp(str, "봄") == 0) {
		printf("개나리");
	}
	else if (strcmp(str, "여름") == 0)
		printf("장미");
	else if (strcmp(str, "가을") == 0)
		printf("국화");
	else if (strcmp(str, "겨울") == 0)
		printf("매화");
	else
		printf("바보");

	return 0;
}
