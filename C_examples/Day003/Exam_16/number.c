/*
	1���� 100���� ���
*/

#include <stdio.h>

int main() {
	int cnt = 0; //Ȧ�� ������ ���� -> ���� ������ �ʱ�ȭ

	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) continue; //¦���� �Ʒ� ����
		printf("%5d", i);
		cnt++;
		if (cnt % 5 == 0) printf("\n");
		
		//if (i % 10 == 0) { //10�� ���
		//	printf("\n");
		//}
	}
	return 0;
}