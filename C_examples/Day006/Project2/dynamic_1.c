/*
	메모리 동적할당 
	-일반적으로 프로그램을 수행할 때, 필요한 메모리 영역은 선언 후 값을 할당한다. (메모리 낭비)
	-메모리의 누수를 줄이고 효율적으로 프로그래밍을 하기위한 방법
	-방대한 메모리를 이용하여 작업을 수행할 대 기억장소의 낭비를 최소화 할 목적으로 구현하는 기능 

	1.malloc과 free함수
		-동적할당: malloc
						포인터변수 = malloc(할당할 크기 바이트수);
		-할당해제 : free
						free(포인터변수); //이 주소 동적할당 된 공간 지워주기


*/

#include <stdio.h>
int main() {
	int* pi;
	double* pd;

	//동적할당 선언
	//pi = (int*)malloc(4); //malloc은 자료형이 없다. 그래서 casting 필요하다 같은 type으로
	//아니면 
	pi = (int*)malloc(sizeof(int));
	pd = (double*)malloc(sizeof(double)); //아니면 8이라고 그냥 써도 된다. 
	if (pi == NULL) { //항상 check!공간 부족해서 동적할당 못 받은 경우
		printf("동적할당이 되지 않았습니다.\n");
		return 0;

	}
	*pi = 100; //값 담기
	printf("동적할당에 저장된 값: %d\n", *pi);
	free(pi); // 이렇게 해야 동적할당 완성.

	return 0;
}