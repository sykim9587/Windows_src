#include <stdio.h>

void func() { //3�� ���۵����� static ������ �ѹ��� �ʱ�ȭ
	static int num1 = 0; //�ѹ��� �ʱ�ȭ �ȴ� (�ʱⰪ �����ʾƵ� 0���� �ʱ�ȭ �ȴ�. �������� ����)
	int num2 = 0; //�Ź� �ʱ�ȭ 
	num1++, num2++;

	printf("num1= %d, num2 = %d\n", num1, num2);

}

int main() {
	int i;

	for (i = 0; i < 3; i++) {
		func();
	}
	return 0;
}