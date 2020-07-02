/*
	배열에 저장된 데이터를 처리하는 프로그램
	1부터 20까지의 숫자로만 초기화된 배열 data가 다음과 같이 선언되어있다. 
	사용자로부터 특정 숫자를 입력받아 해당 숫자가 배열에 몇번 저장되어있는지 출력하는 프로그램을 구현하시오. 
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int data[] = {1,4,3,2,6,5,5,4,7,12,14,15,19,20,9,10,11,11,10,12,1,8,9,8,13,16,18,17,19};

	int num;
	int count = 0;

	printf("숫자 입력: ");
	scanf("%d", &num);
	int size = sizeof(data) / sizeof(data[0]);

	for (int i = 0; i < size; i++) {
		if (num == data[i]) count++;
	}

	printf("배열에 숫자 %d는 %d번 있습니다. \n", num, count);
	return 0;
}