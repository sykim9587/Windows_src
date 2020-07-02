#include <stdio.h>

int main() {
	int x[3];
	int y[3] = { 1,2,3 };
	int z[] = { 10,20,30,40,50 }; // 이렇게 초기값이 있으면 크기 생략 가능하다. 

	for (int i = 0; i < 3; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	int size = sizeof(z) / sizeof(z[0]); //이렇게 사이즈 저장해서 출력한다. 


	for (int i = 0; i < size; i++) {
		printf("z[%d] = %d\n", i, z[i]);
	}
	return 0;
}