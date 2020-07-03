#include< stdio.h>

int main() {
	int x[5] = { 1,2,3,4,5 };
	int* p; //선언만
	int sum = 0;

	p = x; //이건 &x[0]과 같다. 

	/* 배열의 요소들의 합을 계산하여 sum 변수에 누적한 후 출력하는 로직 */

	for (int i = 0; i < 5; i++) {
		sum += *p++; 
		//p++;
		//*(p+i) 이렇게도 가능하다
	}

	printf("sum = %d\n", sum);

	return 0;
}