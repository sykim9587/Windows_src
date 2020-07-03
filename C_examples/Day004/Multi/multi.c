/*
	다음 주어진 입출력 형식에 맞게 동작하는 프로그램을 구현하시오

	<입력 및 출력형식>
	==Main Menu==
	1. 최대값 구하기
	2. 사이값 구하기
	3. 수나열 구하기
	4. 계산기 
	5. 프로그램 종료
	============
	menu =

	<처리조건>
	1. 사용자가 원하는 작업을 수행
	2. 최대: 큰 수 출력
	3. 사이합은 두 정수 입력 후 그 사이 자연수값을 더한다. 
	4. 수나열은 세 개의 정수 입력 후 큰 순서대로 출력
	5. 계산기는 두 정수 와 연산자 입력받고 계산 수행
	6. 언제든디 프로그램을 종료할 수 있도록 구현
	7. 기타 조건은 흐름에 맞게
	8. 각 로직은 별도의 함수로 구현한다. 
*/

#include <stdio.h>
#pragma warning(disable:4996)

void menup(int* menu);
void biggest(int* a, int* b, int* res);
void sort(int* a, int* b, int* c);
void adder(int* a, int* b, int* res);
void calc(int* a, int* b, char* op, int* res);

int main() {
	int first, second, third;
	char op;
	int res =0;
	int menu;

	//처리문
	while (1) {
		//메뉴출력
		menup(&menu);
		//메뉴선택
		res = 0;
		switch (menu) {
		case 1: biggest(&first, &second, &res); printf("res =%d\n",res);  break;
		case 2: adder(&first, & second, &res); printf("res =%d\n", res); break;
		case 3: sort(&first, &second, &third); printf("%d > %d > %d\n", first, second, third); break;
		case 4: calc(&first, &second, &op, &res); printf("res =%d\n", res); break;
		case 5: printf("종료\n");  return 0;
		default: printf(" print again\n");
		}

	} //while 문 끝

	return 0;
}

void menup(int* menu) {
	printf("===== 메뉴 =====\n1. 최대값\n2. 사이합\n3. 수나열\n4. 계산기\n5. 종	   료\n================\n메뉴 = ");
	scanf("%d", menu);
}

void biggest(int* a, int* b, int* res) {
	printf("1st :");
	scanf("%d", a);
	printf("2nd :");
	scanf("%d", b);
	if (*a > * b) {
		*res = *a;
	}
	else {
		*res = *b;
	}
}

void adder(int* a, int* b, int* res) {
	int tmp;
	
	printf("1st :");
	scanf("%d", a);
	printf("2nd :");
	scanf("%d", b);
	
	if (*b > * a) {
		tmp = *a;
		*a = *b;
		*b = tmp;
	}

	for (int i = *b; i <= *a; i++) {
		*res += i;
	}

}

void sort(int* a, int* b, int* c) {
	int tmp, max, mid, min;

	printf("1st :");
	scanf("%d", a);
	printf("2nd :");
	scanf("%d", b);
	printf("3rd :");
	scanf("%d", c);
	if (*b > * a && *b > *c) {
		max = *b;
		if (*a > * c) {
			mid = *a;
			min = *c;
		}
		else {
			mid = *c;
			min = *a;
		}
	}
	else if (*a > * b && *a > * c) {
		max = *a;
		if (*b > * c) {
			mid = *b;
			min = *c;
		}
		else {
			mid = *c;
			min = *b;
		}
	}
	else{
		max = *c;
		if (*a > * b) {
			mid = *a;
			min = *b;
		}
		else {
			mid = *b;
			min = *a;
		}
	}
	*a = max;
	*b = mid;
	*c = min;


}

void calc(int* a, int* b, char* op, int* res) {
	printf("1st :");
	scanf("%d", a);
	printf("2nd :");
	scanf("%d", b);
	getchar();
	printf("op :");
	scanf("%c", op);

	if (*op == '+') {
		*res = *a + *b;
	}
	else if (op == '-') {
		*res = *a - *b;
	}
	else if (op == '*') {
		*res = *a * *b;
	}
	else if (op == '/') {
		*res = (*a) / (*b);
	}
	else { // modular
		printf("다시!\n");
	}

}

