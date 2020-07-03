/*
	동적할당 : malloc() , free() => stdlib.h
	1. 동적할당
		포인터변수 = void* malloc(동적할당크기); //주소를 저장할 변수가 필요하다. 

	2. 동적해제

*/

#include <stdio.h>
#include <stdlib.h> //malloc 함수를 사용하기 위한 헤더파일 추가

int main() {
	int* ip; //int 형을 가리킬 포인터변수
	double* dp;

	ip = (int*)malloc(sizeof(int)); // malloc(4)도 가능, ip가 주소를 가지고 있다. 

	if (ip == NULL) {
		printf("동적할당이 되지 않았다.\n");
		return 0;
	}
	dp = (double*)malloc(sizeof(double)); 

	*ip = 10;
	*dp = 3.4;

	printf("정수형값: %d\n", *ip);
	printf("실수형값: %.1lf\n", *dp);


	free(ip); 
	free(dp);
	return 0;
}