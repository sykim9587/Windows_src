/*
	변수의 존재기간과 접근범위
	-메모리상에 존재하는 기간
	-변수에 접근할 수 있는 범위

	1. 지역변수 Local Variable 
		- 지역변수는 해당지역 벗어나면 자동으로 소멸된다
		- 선언한 지역 내에서만 유효해서 
	2. 전역변수 Global Variable
		- 프로그램의 시작과 동시에 메모리에 할당되어 종료시까지 존재한다.
		-별도의 값으로 초기화하지 않으면 0으로 초기화된다.
		-프로그램 전에 영역 어디서든 접근이 가능하다. 

	3. 정적변수 Static Variable
		-지역변수에 static 지정예약어를 사용한다. 
		-지역변수, 전역변수 모두 static 선언을 할 수 있다.
			-선언된 함수 내에서만 접근이 가능하다 (지역변수의 특성이 강해진다)
			-함수 내에 선언되어서 지역변수는  해당 함수가 반환하면 소멸된다.
			-딱 1번만 초기화되고 프로그램 종료시까지 메모리 공간에 존재한다 (전역변수의 특성)
			ex) 웹사이트 하루 방문자 (초기화) 누적방문자 


	4. 레지스터변수 Register Variable
	5. 자동변수 Auto Variable = 지역변수 
*/

#include <stdio.h>

int func1() {
	int num = 10; //function 의 지역변수

	num++;

	printf("func1 함수의 num = %d\n", num);

	return 0; //num변수의 소멸
}

int func2() {
	int num1 = 20; //지역변수
	int num2 = 30;

	num1++;
	num2--;

	printf("func2 함수의 num1 = %d, num2 = %d\n", num1, num2);

	return 0; //num1 과 num2는 소멸
}

int main() {
	int num = 17; //지역변수

	func1();
	func2();

	printf(" 메인 함수의 num = %d\n", num);

	return 0; //main 의 num이 소멸


}