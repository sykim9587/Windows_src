#include< stdio.h>

int main() {
	int x[5] = { 1,2,3,4,5 };
	int* p; //����
	int sum = 0;

	p = x; //�̰� &x[0]�� ����. 

	/* �迭�� ��ҵ��� ���� ����Ͽ� sum ������ ������ �� ����ϴ� ���� */

	for (int i = 0; i < 5; i++) {
		sum += *p++; 
		//p++;
		//*(p+i) �̷��Ե� �����ϴ�
	}

	printf("sum = %d\n", sum);

	return 0;
}