/*
	세 개의 정수를 입력받아 큰 순서대로 나열하여 출력하는 프로그램 구현하시오
	
	<입력형식> 
	첫번째수 = 
	두번째수 =
	세번째수=

	<출력형식>
	큰수 >= 중간수 >= 작은수

	<처리조건>
	-함수과 포인터를 이용하여 구현할 것

*/

#include<stdio.h>
#pragma warning(disable:4996)

void func1(int* first, int* second, int* third);
void swap(int* a, int* b);

int main() {
	int first, second, third;

	printf("첫번째 수 = ");
	scanf("%d", &first);
	printf("두번째 수 = ");
	scanf("%d", &second);
	printf("세번째 수 = ");
	scanf("%d", &third);

	func1(&first, &second, &third);

	printf("%d >= %d >= %d\n", first, second, third);
	return 0;
}

void swap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;

}
void func1(int* first, int* second, int* third) {
	int tmp;
	if (*second >= *first && *second >= *third) {
		swap(first, second); // 벌써 포인터로 들어왔다. 
	}
	else if (*third >= *first && *third >= *second) {
		swap(first, third);
	}
	if (*third >= *second) {
		swap(second, third);
	}

}