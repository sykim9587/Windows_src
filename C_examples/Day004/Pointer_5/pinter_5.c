/*
	�� ���� ������ �Է¹޾� ū ������� �����Ͽ� ����ϴ� ���α׷� �����Ͻÿ�
	
	<�Է�����> 
	ù��°�� = 
	�ι�°�� =
	����°��=

	<�������>
	ū�� >= �߰��� >= ������

	<ó������>
	-�Լ��� �����͸� �̿��Ͽ� ������ ��

*/

#include<stdio.h>
#pragma warning(disable:4996)

void func1(int* first, int* second, int* third);
void swap(int* a, int* b);

int main() {
	int first, second, third;

	printf("ù��° �� = ");
	scanf("%d", &first);
	printf("�ι�° �� = ");
	scanf("%d", &second);
	printf("����° �� = ");
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
		swap(first, second); // ���� �����ͷ� ���Դ�. 
	}
	else if (*third >= *first && *third >= *second) {
		swap(first, third);
	}
	if (*third >= *second) {
		swap(second, third);
	}

}