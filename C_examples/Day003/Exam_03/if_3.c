#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int code;
	int year;

	printf("�ֹι�ȣ 8��° �� =");
	scanf("%d", &code);

	/*if (code == 0 || code == 9) year = 1800;
	else if (code == 1 || code == 2) year = 1900;
	else if (code == 3 || code == 4) year = 2000;
	else year = 0;*/

	switch (code) {
	case 0: case 9: year = 1800; break; //�̷��Ե� ����!
	case 1: case 2: year = 1900; break;
	case 3: case 4: year = 2000; break;
	default: year = 0;
	}

	if (year != 0) {
		printf("����� %d�⵵�� ���\n", year);
	}
	else {
		printf("�ֹι�ȣ�� �ùٸ��� �ʽ��ϴ�.\n");
	}

	return 0;
}