/*
	삼항연산자 : 항을 세개 가지고 있는 연산자
	- if ~ else문의 모체가 된다
	-형식
		조건항? 항1 : 항2;
		변수명 = 조건항? 항1: 항2;
	-조건항은 결과가 참이나 거짓이 나와야한다. 
*/

//점수를 입력받아 해당 점수가 60점 이상이면 "합격", 아니면 "불합격"

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	int jumsu;

	printf("점수 입력:");
	scanf("%d", &jumsu);

	printf("%s\n", jumsu >= 60 ? "합격" : "불합격");
	return 0;
}

