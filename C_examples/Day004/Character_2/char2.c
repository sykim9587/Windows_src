/*
	키보드를 통해 이름과 나이 그리고 신장을 받아 출력하는 프로그램
	<입력>
	이름 =
	나이 =
	신장 =

	<출력>
	홍길동님의 나이는 19세이고 신장은 178.9이군요!!!

*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

int main() {
	char name[80]; //일반적 하지만 낭비
	/* 배열명은 배열의 시작주소를 뜻한다.*/
	int age;
	double height;

	printf("이름 = ");
	//name = gets(); //이렇게 못 쓴다
	/*문자열은 대입연산자를 사용할 수 없다
		getchar()  : get character, 한 문자를 입력받아라
		gets(): get string 문자열을 입력받아라
	*/
	gets(name);
	//strcpy(name, gets());
	//scanf("%s", name);
	/*printf("나이 = ");
	scanf("%d", &age);
	printf("신장 =");
	scanf("%lf", &height);*/

	//printf("%s님의 나이는 %d세이고 신장은 %.1lf이군요!!\n", name, age, height);
	printf("%s님 환영합니다.\n", name);
	return 0;
}
