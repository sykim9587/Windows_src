/*
	지역변수와 전역변수의 이름이 동일하다면 해당 지역에서는 지역변수
*/

#include <stdio.h>

int add(int val);
int num = 1;

int main() {
	int num = 5; // 지역변수와 전역변수가 같다!

	printf("num = %d\n", add(num));
	printf("num = %d\n", num+9);
	return 0;
}

int add(int val) {
	int num = 9; //지역변수
	num += val;
	//return num;
}