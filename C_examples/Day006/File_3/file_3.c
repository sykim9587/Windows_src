#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	FILE* fp;

	fp = fopen("c:\\Sample\\b.txt", "wt");

	if (fp == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hong\n", fp);
	fputs("Your name is Lee sun sin\n", fp);
	//���� ��ü �ݱ�
	fclose(fp);
	return 0;
}

//���� ���� �� ����