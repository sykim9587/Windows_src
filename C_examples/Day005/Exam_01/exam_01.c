#include <stdio.h>
void aaa (int* num) { //포인터 변수 -> 주소를 저장하는 변수 
	num = 10;

	/*
		포인터와 관련된 연산자 
		- *: 간접연산자 (값)
		- &: 주소연산자

	*/
	*num = 10;
	printf("num = %d\n", num);
}

int main() {
	int num = 0;

	aaa(&num);

	printf("num = %d\n", num);

	return 0;
}

//아직 오류