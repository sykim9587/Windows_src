/* 
	표준 입출력 함수 : printf(), scanf()
	문자 전영 : putchar(), getchar()
	문자열 전용 :puts(char 배열명), gets(char 배열명) -> 빈칸을 포함한다. 그리고 이건 puts이용하는게 낫다. enter로만 나타낸다

*/

#include<stdio.h>
#pragma warning(disable: 4996)
#include <string.h>

int main() {
	//int a, b;
	char pass[10];

	//printf("숫자 두개 =");
	//scanf("%d %d", &a, &b); // 포맷으로 space

	//printf("a= %d, b= %d\n", a, b);

	printf("10 이하의 문자열 = ");
	//scanf("%s", pass);
	gets(pass);

	printf("입력된 문자열 : %s\n", pass);

	return 0;
}