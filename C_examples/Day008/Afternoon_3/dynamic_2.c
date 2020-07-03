/*
	다섯명의 나이를 입력받아 평균 나이를 계산하여 출력하는 프로그램 구현

*/

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	//int arr[5] = { 0 };
	int* ip; //동적할당한 곳의 주소를 담기위한 포인터 변수
	int sum = 0;

	ip = (int*)malloc(sizeof(int) * 5);
	printf("다섯명의 나이 입력\n ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", ip+i); //주소니까
		sum += ip[i];
	}
	printf("다섯명의 평균나이 = %.2lf\n", sum / 5.0);

	free(ip); // 해제시킨다. 
	return 0;
}