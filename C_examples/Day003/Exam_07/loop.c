/*
	����loop : ��� ����Ǵ� ��
	for ( ; ; ){} 
	while(1){} 
	do()while(1);

	����ڷκ��� ���� �Է¹޾� ����ϴ� ���α׷��� �ۼ��ϵ�, �Է� 0�� �Ǹ� ����. 
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num;

	while(1) {// ���ѷ���
		printf(" ���� (0�� �ԷµǸ� ����)= ");
		scanf("%d", &num);
		if (num == 0) break; // while ���� ���´�
		printf("num=%d\n", num);

	}
	return 0;
}
