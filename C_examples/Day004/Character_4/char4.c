/* 
	��ȣ�� �Է¹޾� ��ġ�ϸ� ����, �ƴϸ� ��� ���� ���α׷� 

	<�Է�, ���>
	��ȣ�� ��Ȯ�� �Է��ϸ� ����˴ϴ�.
	��ȣ = java
	��ȣ = c++
	��ȣ = c
	��ȣ = C

	���α׷� ����
*/

#include<stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char password[80] = "C";
	char code[80];

	printf("��ȣ�� ��Ȯ�� �Է��ϸ� ����˴ϴ�.\n");

	while (1) { //����loop
		printf("��ȣ = ");
		scanf("%s", code);

		if (strcmp(password, code) == 0) {
			printf("����\n");
			break;
		}

	}

	return 0;
}