/*
	������ ����ϴ� ���α׷�

	<�Է�����>
	ù��°�� =
	�ι�°�� =

	<���>
	������ =

*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int su1, su2, res=0; //���������� �ʱ�ȭ�� ����� �Ѵ�. 
	int i;
	int tmp; 

	printf("1st = ");
	scanf("%d", &su1);

	printf("2nd = ");
	scanf("%d", &su2);


	//�̰� ȿ�������� �ʴ�
	//for (i = su1; i <= su2; i++) { // su1< = su2
	//	res += i;
	//}

	//for (i = su1; i >= su2; i--) { // su1 >= su2
	//	res += i;
	//}

	if (su1 >= su2) { //�ڿ� ���� ���� ���
		tmp = su1;
		su1 = su2;
		su2 = tmp;
	}

	for (i = su1; i <= su2; i++) { // su1< = su2
		res += i; 
	}

	printf("%d ~ %d ������ = %d\n", su1, su2, res);
	return 0;
}