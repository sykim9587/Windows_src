/*
	scanf() �Լ��� ���� ���ڿ� �Է¹޾� �迭�� ���� �� ���
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char word[80]; //�⺻������ ũ�� ��´�. 
	int size = 0;
	printf("���ڿ� = ");
	scanf("%s", word);

	printf("�Էµ� ���ڿ��� %s\n", word);

	for (int i = 0; i < 80; i++) {
		if (word[i] == '\0') break;
		else {
			size++;
		}
	}
	printf("%s �ܾ��� ���̴� %d�� �Դϴ�.\n", word, size);


	return 0;
}