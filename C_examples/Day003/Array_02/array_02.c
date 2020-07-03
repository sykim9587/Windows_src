/*
	다섯개의 정수를 입력받아 가장 큰 수 찾아 출력하는 프로그램

*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	//int a, b, c, d, e, max; //일반적으로 + 다 입력받고 max에 a 넣고 순차대로 비교 ->
	// 배열 이용하면 변수 필요없다. 
	int data[5], max;

	for (int i = 0; i < 5; i++) {
		printf("num = ");
		scanf("%d", &data[i]);
	}

	max = data[0];

	for (int k = 0; k < 5; k++) {
		if (max < data[k]) max = data[k];
	}

	printf("max = %d\n", max);
	return 0;
}