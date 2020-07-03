/*
	배정대입연산자 (복합대입연산자 )
	- 대입연산자와 산술연산자 결합해놓은 연산자
	- 증감연산자 ++/--
		a++ // a= a+1, a +=1;
	- +=, -=, *=, /=, %=
*/

#include <stdio.h>

int main() {

	int num1 = 2, num2 = 4, num3 = 6;

	num1 += 3;
	num2 *= 4;
	num3 %= 5;

	printf(" num1 : %d, num2: %d, num3: %d\n", num1, num2, num3);
	return 0;
}