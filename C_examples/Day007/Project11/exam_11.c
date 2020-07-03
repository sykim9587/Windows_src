#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int height = 0;
	int days = 0;
	int depth;

	printf("우물깊이(cm) = ");
	scanf("%d", &depth);

	while (height < depth) {
		height += 55;
		days++;
	}

	printf("%d 깊이의 우물을 나오는데 걸린 일수: %d\n", depth, days);
	return 0;
}