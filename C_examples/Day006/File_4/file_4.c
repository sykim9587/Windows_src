#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char str[30]; //���ڿ��� �о����
	int ch; //���� ������ �о����
	FILE* file = fopen("c:\\Sample\\b.txt", "rt");
	if (file == NULL) {
		printf("b.txt.���� ���� ����!");
	}

	ch = fgetc(file);
	printf("%c\n", ch);
	ch = fgetc(file);
	printf("%c\n", ch);
	fgets(str, sizeof(str), file);
	printf("%s", str);
	fgets(str, sizeof(str), file);
	printf("%s", str);

	fclose(file);
	return 0;
}