#include <stdio.h>

int main() {
	int x[3];
	int y[3] = { 1,2,3 };
	int z[] = { 10,20,30,40,50 }; // �̷��� �ʱⰪ�� ������ ũ�� ���� �����ϴ�. 

	for (int i = 0; i < 3; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	int size = sizeof(z) / sizeof(z[0]); //�̷��� ������ �����ؼ� ����Ѵ�. 


	for (int i = 0; i < size; i++) {
		printf("z[%d] = %d\n", i, z[i]);
	}
	return 0;
}