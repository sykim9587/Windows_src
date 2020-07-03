/*
	���ڿ��� ó���ϴ� �Լ� : string.h
	1. strcpy: ���ڿ� ���� 
		strcpy(�纻, ����) : ������ ������ �̿��Ͽ� ���纻�� �����. 
	2. strcmp: ���ڿ� ��
		strcmp(���1, ���2); ���1�� ���2�� ���Ͽ� �� ��� ���� 
		0 :�� ����� ���� ��ġ
		1: ���������� ���1�� ��� 2���� �ռ��� ��~, ��~
		-1: �ݴ� 
	3. strlen: ���ڿ� ����
		strlen(���ڿ�) ���� ����
*/

#include <stdio.h>
#include <string.h>
#pragma	warning(disable: 4996)

int main() {
	char str1[80] = "tiger";
	char str2[80]; //�ʱ�ȭ ���Ҷ� ũ�� �����;��Ѵ� ������ ���� ���� �� �ִ�.

	strcpy(str2, "tiger");

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	if (strcmp(str1, str2) == 0) {
		printf("����.\n");
	}
	else {
		printf("�ٸ���.\n");
	}

	return 0;
}