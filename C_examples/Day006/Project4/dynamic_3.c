#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	//int num[100];
	int* pi = (int*)malloc(sizeof(int)*100); //동적할당 -> 배열과 같은 의미로 쓰인다. 
	int sum = 0;
	int index = 0;
	
	if (pi == NULL) {
		printf("동적할달에 실패했습니다.\n");
		return 0;
	}

	while (1) {
		printf("수 = ");
		scanf("%d", &pi[index]); // 이렇게 한줄로 (index++) 가능하지만 이 문제에선 안됨
		if (pi[index] == 0) break;
		index++;
	}
	for (int i = 0; i < index; i++) {
		sum += pi[i];
	}
	printf("sum = %d\n", sum);

	free(pi);
	return 0;
}