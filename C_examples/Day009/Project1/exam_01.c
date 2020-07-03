/*
	동적할당 (dynamic Alllocation)
	-프로그램 수행중에 필요에 의해 공간을 임의로 할당해서 사용하는 것으로 프로그램 수행중에 언제든지 할당된 공간을 해제할 수 있다.
	-주요함수
		void* malloc(할당할 공간의 크기 = byte)
		void* calloc (배열요소개수, 하나의 공간의 크기) : 초기화
		void realloc(이미할당된공간, 재할당공간의 크기) :프로그램 중간에 크기를 재조정
*/

#include <stdio.h>
#include<stdlib.h>

int main() {
	double* ap;
	//ap = (double*)malloc(5 * sizeof(double)); //초기화가 되지않아서 쓰레기값이 나온다.
	ap = (double*)calloc(5,sizeof(double)); //안에 형태가 다르다. 다 0으로 초기화가 된다. 

	if (ap == NULL) {
		printf("동적할당에 실패하였습니다. \n");
		return 0;
	}

	for (int i = 0; i < 5; i++) {
		printf("%lf\n", ap[i]); 
	}

	for (int i = 0; i < 5; i++) {
		free(ap + i); //안에 주소를 써우어야 한다. 
	}
	return 0;
}