/*
	증감연산자: 1씩 증가, 감소
	-전위 연산자: ++ a
	-후위 연산자: a -- 
	-후위연산자의 연산 순서는 대입연산자보다 늦다. 
*/

#include <stdio.h>

int main() {

	int num1 = 10, num2 = (num1--)+2;

	printf(" num1 = %d, num2 = %d\n", num1, num2);

	printf(" num1 = %d, num2 = %d\n", ++num1, num2++); //출력보다도 느리다. 

	return 0;
}