/* 
	���� ���α׷�
	�� ���� ������ �ϳ��� �����ڸ� �Է¹޾� �ش� ������ ����� ������ �� ����� ����ϴ� ���α׷��� ����

	<�Է�>
	ù��° �� =
	������(+, -, *, /, %) =
	�ι�° �� =

	<ó������>
	1. �־��� ������ �̿��� ���� ������ �ٽ� �Է�
	2. �����ڰ� '/' �̰�, �ι�°���� 0�̸� �� �ٽ� �Է�
	3. ��Ÿ ������ ���α׷��� �帧�� �°� ����
	<����>
	�Է¹��۸� ���� �Էµ� ���� ���� ����

*/

#include <stdio.h>
#pragma warning(disable : 4996)

int main() {

	int su1, su2, res;
	char op;  // ������


	printf("ù��° �� = ");
	scanf("%d", &su1);
	getchar();

	do {
		printf("������ = ");
		scanf("%c", &op);
		getchar();
	} while (op != '+' && op != '-' && op != '*' && op != '/');

	do {
		printf("�ι�° �� = ");
		scanf("%d", &su2);
	} while (op == '/' && su2 == 0);

	switch ((int)op) {
	case '+': res = su1 + su2; break;
	case '-': res = su1 - su2; break;
	case '*': res = su1 * su2; break;
	case '/': res = su1 / su2;
	}

	printf("%d %c %d = %d\n", su1, op, su2, res);
	return 0;
}