/*
	printf("#");
	���� �־��� ������ �̿��ؼ� ##### ����϶�

	<������� 2>
	#####
	#####
	#####
	#####
	#####
*/

#include <stdio.h>

int main() {

	for (int k = 1; k <= 5; k++) { // ���� �ǹ�
		for (int i = 1; i <= k; i++) { //ĭ�� �ǹ�
			printf("#");
		}
		printf("\n");
	}
	return 0;
}