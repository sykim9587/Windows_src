//��������

#include <stdio.h>

int num; //���������� �ʱⰪ�� ���� �ʾƵ� �ڵ����� 0���� �ʱ�ȭ�ȴ�. 

void func(int val);

int main() {
	int cnt;

	/*printf("num = %d\n", num);
	printf("num = %d\n", cnt);*/

	printf("num = %d\n", num); // 0

	func(3);
	printf("num = %d\n", num);

	num++;
	printf("num = %d\n", num);
	return 0;
	
}

void func(int val) {
	num += val;

}
