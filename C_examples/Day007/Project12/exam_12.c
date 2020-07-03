/*
	우물이 3m, 달팽이는 낮에 55cm, 밤엔 1.3 미끄러진다.
	이때 달팽이는 며칠안에 이 우물을 벗어날 수 있을까? 
*/
#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int height = 0;
	int days = 0;
	//int depth;

	//printf("우물깊이(cm) = ");
	//scanf("%d", &depth);

	while (1) {
		height += 55;
		if (height >= 300) {
			break;
		}
		height -= 13;
		days++;
	}


	printf("3m 깊이의 우물을 나오는데 걸린 일수: %d\n", days);
	return 0;
}