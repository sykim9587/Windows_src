#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	FILE* fp;

	fp = fopen("c:\\Sample\\b.txt", "wt");

	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hong\n", fp);
	fputs("Your name is Lee sun sin\n", fp);
	//파일 객체 닫기
	fclose(fp);
	return 0;
}

//오류 아직 안 나옴