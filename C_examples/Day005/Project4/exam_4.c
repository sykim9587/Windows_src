/*
	scanf() �̿��Ͽ� ���ڿ� �Է¹޾� �迭�� ���� �� ����ϴ� ���α׷� �����Ͻÿ�. 

*/
#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char str[80];
	int index = 0;

	printf("���ڿ�=");
	scanf("%s", str);
	//printf("�Է¹��� ���ڿ� : %s\n", str);

	while (str[index] != '\0') {
		printf("%c", str[index]);
		index++;
	}
	printf("\n");

	for (int i = index - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	return 0;
}