#include <stdio.h>

void func() { //3번 동작되지만 static 변수는 한번만 초기화
	static int num1 = 0; //한번만 초기화 된다 (초기값 주지않아도 0으로 초기화 된다. 전역변수 같이)
	int num2 = 0; //매번 초기화 
	num1++, num2++;

	printf("num1= %d, num2 = %d\n", num1, num2);

}

int main() {
	int i;

	for (i = 0; i < 3; i++) {
		func();
	}
	return 0;
}