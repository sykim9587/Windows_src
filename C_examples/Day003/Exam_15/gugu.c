/*
	������ ���
	���� for ���� �̿��Ͽ� ������ ���
	�ܼ� (2-9), �ڿ���(1-9), ���
	����for���� �ٱ� for���� �ѹ� ���۽� �ȿ� �־��� Ƚ����ŭ �ݺ��ؼ� �����Ѵ�. 
*/

#include <stdio.h>

int main() {

	for (int dan = 2; dan <= 9; dan++) { // ��
		printf("== %d�� ==\n", dan);
		for (int su = 1; su <= 9; su ++) { // �� �ܸ��� ������ �ڿ���
			printf("%d * %d = %d\n", dan, su, dan * su);
		}
		printf("\n");
	}
	return 0;
}