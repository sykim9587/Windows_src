/*
	�칰�� 3m, �����̴� ���� 55cm, �㿣 1.3 �̲�������.
	�̶� �����̴� ��ĥ�ȿ� �� �칰�� ��� �� ������? 
*/
#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int height = 0;
	int days = 0;
	//int depth;

	//printf("�칰����(cm) = ");
	//scanf("%d", &depth);

	while (1) {
		height += 55;
		if (height >= 300) {
			break;
		}
		height -= 13;
		days++;
	}


	printf("3m ������ �칰�� �����µ� �ɸ� �ϼ�: %d\n", days);
	return 0;
}