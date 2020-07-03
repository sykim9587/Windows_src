/*
	상수(constant) : 데이터 값
	1. 정수형 상수
	2. 실수형 상수
	3. 문자형 상수 (' ')
	4. 문자열형 상수 (" ")

	변수(variable): 데이터가 저장되는 공간, 기억장소
	-지역변수 : 특정 {} 안에서 선언되어 사용되는 변수, 선언된 지역을 벗어나면 의미가 없디
	-전역변수: 지역에 제한없이 사용이 가능한 변수 
	-static 변수, register 변수, auto 변수 -> c++에서 사용

	자료형(data type): 크기를 규정해 놓은 예약어
	1. 정수형: char, int, long
	2. 실수형: float, double
	3. 문자형: char
	4. 문자열형: char[] 배열로 처리

	나중에: 사용자 정의 자료형 (구조체 struct), 포인터형 (*)
*/

#include<stdio.h>
//매크로상수
//전역변수 선언

int main() { // c언어의 시작과 끝을 나타내는 함수, 콜백함수(call back function) -시스템에 의해 호출
	//지역변수 선언 
	int x = 100;
	float y = 3.14f; //double 형을 float에 넣으면 오류 
	char z = 'A';

	char str1[5] = { 'K', 'O', 'R','E', 'A' }; 
	char str2[6] = "KOREA"; // 이렇게 되면 +1 된다 NULL sting 이 들어간다 ('\0')

	printf("x = %d\n", x);
	printf("y = %.2f\n", y);
	printf("y = %f\n", y);
	printf("z = %c\n", z);

	printf("str1 = %s\n", str1); //%s는 null sting 만나기 전까지 출력하는 방법
	printf("\n----------------------------------\n");
	printf("str1 = ");
	for (int i = 0; i < 5; i++) {
		printf("%c", str1[i]);
	}
	printf("\n----------------------------------\n");
	printf("str2 = %s\n", str2);


	return 0;
}