/*
	strcat : �� ���� ���ڿ��� ���δ�. 

	char fruit[80] = "straw";
	strcat(fruit, "berry"); //�տ��ٰ� �ڿ��� �ٿ���
	printf("%s\n", fruit);


	�� - ������, ���� - ���, ���� - ��ȭ, �ܿ� - ��ȭ
	Ű���带 ���� �����̸��� �Է¹޾Ƽ� �Է¹��� ������ �ش��ϴ� �� �̸��� ����ϴ� ���α׷� ����

	<�Է�>
	���� = ����
	��ȭ
	<ó������>
	strcmp �Լ��� �̿��Ͽ� ������ ��.
*/

#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char str[50];
	printf("���� = ");
	scanf("%s", str);

	if (strcmp(str, "��") == 0) {
		printf("������");
	}
	else if (strcmp(str, "����") == 0)
		printf("���");
	else if (strcmp(str, "����") == 0)
		printf("��ȭ");
	else if (strcmp(str, "�ܿ�") == 0)
		printf("��ȭ");
	else
		printf("�ٺ�");

	return 0;
}
