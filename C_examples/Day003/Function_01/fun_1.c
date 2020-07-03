/*
	함수(function) : 독립된 프로그램 덩어리, 명령어 집합, 모듈 
	- 자주 빈번히 사용하는 기능이나 명령어 묶어서 하나의 명령으로 수행하도록 구현된 것.
	- 모든 함수는 동등한 권한을 가진다. 
	- 단, main 함수는 시스템에 의해서 호출되는 콜백함수 이고 나머지 함수는 사용자 호출에 의해서 실행되는 사용자 정의 함수
	-함수는 호출된다. 


	1. 함수의 원형
		결과형리턴값(반환형) 함수명(매개변수){
			내용정의부;
			return 값;
		}

	2.함수 호출방법
		1)call by name
			-매개변수 없이 함수의 이름을 호출
		2)call by value
			-매개변수 값 이용하여 호출
		3)call by reference (참조=주소)
			-주소를 이용하여 함수 호출
*/

#include <stdio.h>

int aaa() {
	return 100;
}

char bbb() {
	return 'A';
}
double ccc() {
	return 3.14;
}
void ddd() {
	return; // 값은 없이 제어권만 넘긴다. 이런경우 return 생략해도 된다. 

}

int eee(int x, int y) {
	return x + y;
}

int fff(int x, int y) {
	int z = x+y;
	return z;
}

void ggg() {
	printf("ggg function\n");
}
int main(void) {
	
	printf("main function\n");

	ggg(); // call by name

	aaa();

	printf("finished\n");
	return 0;
}