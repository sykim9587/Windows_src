//전역변수

#include <stdio.h>

int num; //전역변수는 초기값을 주지 않아도 자동으로 0으로 초기화된다. 

void func(int val);

int main() {
	int cnt;

	/*printf("num = %d\n", num);
	printf("num = %d\n", cnt);*/

	printf("num = %d\n", num); // 0

	func(3);
	printf("num = %d\n", num);

	num++;
	printf("num = %d\n", num);
	return 0;
	
}

void func(int val) {
	num += val;

}
