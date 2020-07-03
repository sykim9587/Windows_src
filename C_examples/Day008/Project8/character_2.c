/*
	문자열상수는 포인터이다!!!
	문자열상수가 배열의 형태로 저장되고 배열의 요소를 이용하여 참조한다. 
	배열명을 통해 문자열이 저장된 시작위치를 알아낼 수 있고 
	널 스트링을 통해 문자열의 끝을 알아낼 수 있다. 
*/

#include <stdio.h>

int main() {
	char str[80] = "apple";
	printf("주소값: %p\n", str);									//문자열 상수의 주소값
	printf("첫번째문자값 = %c\n", *(str+1));			
	printf("첫번째문자값 = %c\n", str[0]);
	printf("두번째문자값 = %c\n", str[1]);


	printf("\n\n");
	printf("주소값: %p\n", "dream");							//문자열 상수의 주소값
	printf("첫번째문자값 = %c\n", *("dream"+1));		//문자열 상수는 포인터!!
	printf("두번째문자값 = %c\n", "dream"[1]);		//문자열 상수는 포인터!!
	
	return 0;
}