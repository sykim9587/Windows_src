/*
	다섯개의 정수 입력받아 합과 최대값을 출력
	입력받는 정수는 배열 선언하여 저장 후 처리

		max = data[0];
	for (int j = 1; j < 5; j++) {
		if (max < data[j]) max = data[j];
	
*/

#include<stdio.h>
#pragma warning(disable:4996)


int maximum(int a[], int size) {
	int max = a[0]; 
	for (int j = 1; j < size; j++) {
		if (max < a[j]) max = a[j];
	}
	return max;
}

int main() {
	int data[5], sum = 0, max;

	for (int i = 0; i < 5; i++) {
		printf("%d 번째 수 =", i+1);
		scanf("%d", &data[i]);

		sum += data[i];
	}

	max = maximum(data,5); //배열명은 배열의 시작 주소와 동일하다
	// 배열의 크기도 같이 보내준다. 


	printf("입력받은 자료: ");
	for (int i = 0; i < 5; i++) {
		printf("%5d", data[i]);
	}
	printf("합계 = %d 최대값 = %d\n", sum, max);
	return 0;
}