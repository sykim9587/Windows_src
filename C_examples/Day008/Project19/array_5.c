/*
	char* title[] = {"국어", "영어", "수학"} //포인터 배열

	char str[80];
	char* name = "홍길동"; //훨씬 효율적
	
	포인터배열은 2차원배열과 비슷한 의미. 
*/

#include <stdio.h>

int main() {

	char* p[5]; //포인터 배열 선언
	
	p[0] = "dog"; //문자상수도 포인터 
	p[1] = "elephant";
	p[2] = "horse";
	p[3] = "tiger";
	p[4] = "lion";

	for (int i = 0; i < 5; i++) {
		printf("%s\n", p[i]);
	}

	return 0;
}