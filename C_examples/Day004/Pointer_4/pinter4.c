/*
	�����͸� �̿��� ���ڿ� ó�� 

*/

#include <stdio.h>

int main() {
	char* names = "brown"; //���ڿ��� �� ��ü�� �ּ�

	printf("�̸�: %s\n", names);

	names = "banana"; // ũ�Ⱑ �������. 
	printf("�̸�: %s\n", names);

	//���ڿ������ �����ͺ����� �ǹ̸� ���� �� �ִ�. 
	/* 
	char names[] = "banana" ; �������� null string ����

	*/

	while (*names != '\0') { // null string ������ ���
		//printf("%c", *names);
		putchar(*names++); //ª�Ƽ� ����
		printf("\n");
	}
	return 0;
}