#include <stdio.h>

int main() {
	//char str[] = "APPLE"; //str 은 A가 저장되어있는 곳의 주소
	//char* p;
	//p = str; // p=&str[0]

	printf("apple 문자열이 저장된 시작 주소 %d\n", "apple"); //이런경우 문자열 자체가 이름이다. 
	printf("apple 문자열에서 a의 값을 추출 = %c\n", *"apple");
	printf("apple 문자열에서 두번째 위치의 p의 주소 = %d\n", "apple" + 1);
	printf("apple 문자열에서 두번째 위치의 p 값 추출 = %c\n", *("apple" + 1));
	return 0;

}