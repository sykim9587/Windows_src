#include <stdio.h>
void aaa (int* num) { //������ ���� -> �ּҸ� �����ϴ� ���� 
	num = 10;

	/*
		�����Ϳ� ���õ� ������ 
		- *: ���������� (��)
		- &: �ּҿ�����

	*/
	*num = 10;
	printf("num = %d\n", num);
}

int main() {
	int num = 0;

	aaa(&num);

	printf("num = %d\n", num);

	return 0;
}

//���� ����