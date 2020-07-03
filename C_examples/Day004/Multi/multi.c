/*
	���� �־��� ����� ���Ŀ� �°� �����ϴ� ���α׷��� �����Ͻÿ�

	<�Է� �� �������>
	==Main Menu==
	1. �ִ밪 ���ϱ�
	2. ���̰� ���ϱ�
	3. ������ ���ϱ�
	4. ���� 
	5. ���α׷� ����
	============
	menu =

	<ó������>
	1. ����ڰ� ���ϴ� �۾��� ����
	2. �ִ�: ū �� ���
	3. �������� �� ���� �Է� �� �� ���� �ڿ������� ���Ѵ�. 
	4. �������� �� ���� ���� �Է� �� ū ������� ���
	5. ����� �� ���� �� ������ �Է¹ް� ��� ����
	6. ������� ���α׷��� ������ �� �ֵ��� ����
	7. ��Ÿ ������ �帧�� �°�
	8. �� ������ ������ �Լ��� �����Ѵ�. 
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

	//ó����
	while (1) {
		//�޴����
		menup(&menu);
		//�޴�����
		res = 0;
		switch (menu) {
		case 1: biggest(&first, &second, &res); printf("res =%d\n",res);  break;
		case 2: adder(&first, & second, &res); printf("res =%d\n", res); break;
		case 3: sort(&first, &second, &third); printf("%d > %d > %d\n", first, second, third); break;
		case 4: calc(&first, &second, &op, &res); printf("res =%d\n", res); break;
		case 5: printf("����\n");  return 0;
		default: printf(" print again\n");
		}

	} //while �� ��

	return 0;
}

void menup(int* menu) {
	printf("===== �޴� =====\n1. �ִ밪\n2. ������\n3. ������\n4. ����\n5. ��	   ��\n================\n�޴� = ");
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
		printf("�ٽ�!\n");
	}

}

