#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	//int num[100];
	int* pi = (int*)malloc(sizeof(int)*100); //�����Ҵ� -> �迭�� ���� �ǹ̷� ���δ�. 
	int sum = 0;
	int index = 0;
	
	if (pi == NULL) {
		printf("�����Ҵ޿� �����߽��ϴ�.\n");
		return 0;
	}

	while (1) {
		printf("�� = ");
		scanf("%d", &pi[index]); // �̷��� ���ٷ� (index++) ���������� �� �������� �ȵ�
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