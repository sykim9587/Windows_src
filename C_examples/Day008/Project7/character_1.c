/*
	���ڿ� ó��
	string.h : ����ó�� �Լ�
	strcpy : ���ڿ� ���� 
				strcpy(�纻, ����)
	strcmp: string compare, ���ڿ� ��
				int strcmp(���1, ��� 2)
				���������� ���1>���2 => 1 (��� 1�� �� �ڿ� ���´�)
										���1==���2 => 0
										���1<���2 => -1
	strlen : string length, ���ڿ� ����
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	char str[80]; //6byte
	int count = 0; //������ �� ������ ����
	int index = 0; //�迭�� ������ġ
	printf("���ڿ� �Է�: ");
	scanf("%s", str);

	while (str[index] != '\0') {
		count++;
		index++;
	}

	printf("str �迭�� ����� ���ڼ� : %d\n", count);

	return 0;
}