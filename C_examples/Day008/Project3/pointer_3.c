/*
	배열과 포인터 
*/

#include <stdio.h>

void ary_prn(int* p, int size) {
	for (int i = 0; i < size; i++) {
		printf("%5d", *(p+i));
	}
	printf("\n");
}

int main() {
	int arr[5] = { 10,20,30,40,50 };
	//int* p;
	//p = arr; // p = &arr[0] -> 사실 필요없다. arr가 주소니까

	ary_prn(arr, 5); //이런 함수는 사이즈까지 같이 보낸다. 
	return 0;
}