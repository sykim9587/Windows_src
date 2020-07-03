#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char str[30]; //문자열을 읽어오기
	int ch; //문자 단위로 읽어오기
	FILE* file = fopen("c:\\Sample\\b.txt", "rt");
	if (file == NULL) {
		printf("b.txt.파일 열기 실패!");
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