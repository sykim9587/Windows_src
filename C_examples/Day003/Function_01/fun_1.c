/*
	�Լ�(function) : ������ ���α׷� ���, ��ɾ� ����, ��� 
	- ���� ����� ����ϴ� ����̳� ��ɾ� ��� �ϳ��� ������� �����ϵ��� ������ ��.
	- ��� �Լ��� ������ ������ ������. 
	- ��, main �Լ��� �ý��ۿ� ���ؼ� ȣ��Ǵ� �ݹ��Լ� �̰� ������ �Լ��� ����� ȣ�⿡ ���ؼ� ����Ǵ� ����� ���� �Լ�
	-�Լ��� ȣ��ȴ�. 


	1. �Լ��� ����
		��������ϰ�(��ȯ��) �Լ���(�Ű�����){
			�������Ǻ�;
			return ��;
		}

	2.�Լ� ȣ����
		1)call by name
			-�Ű����� ���� �Լ��� �̸��� ȣ��
		2)call by value
			-�Ű����� �� �̿��Ͽ� ȣ��
		3)call by reference (����=�ּ�)
			-�ּҸ� �̿��Ͽ� �Լ� ȣ��
*/

#include <stdio.h>

int aaa() {
	return 100;
}

char bbb() {
	return 'A';
}
double ccc() {
	return 3.14;
}
void ddd() {
	return; // ���� ���� ����Ǹ� �ѱ��. �̷���� return �����ص� �ȴ�. 

}

int eee(int x, int y) {
	return x + y;
}

int fff(int x, int y) {
	int z = x+y;
	return z;
}

void ggg() {
	printf("ggg function\n");
}
int main(void) {
	
	printf("main function\n");

	ggg(); // call by name

	aaa();

	printf("finished\n");
	return 0;
}