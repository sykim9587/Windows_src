#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int height = 0;
	int days = 0;
	int depth;

	printf("�칰����(cm) = ");
	scanf("%d", &depth);

	while (height < depth) {
		height += 55;
		days++;
	}

	printf("%d ������ �칰�� �����µ� �ɸ� �ϼ�: %d\n", depth, days);
	return 0;
}