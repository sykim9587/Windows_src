#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char name[10];
	int grade;
	char major[20];
	char ch;

	FILE* fp;
	fp = fopen("c:\\Sample\\studnet.txt", "rt");
	if (fp == NULL) {
		printf("����\n");
		return 0;
	}

	while (1) {
		ch = fscanf(fp, "%s %d %s", name, &grade, major); //file���� �����ͼ� ����
		if (ch == EOF) {//End Of File
			break;
		}
		printf("%s %d %s\n", name, grade, major);
	}

	fclose(fp);

	return 0;
}