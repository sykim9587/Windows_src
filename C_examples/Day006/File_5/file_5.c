/*
	화면을 통해 데이터를 입력받아 파일에 출력하는 작업
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char name[7]; 
	int grade;
	char major[7];

	//step1. 객체생성
	FILE* fp;

	fp = fopen("c:\\Sample\\studnet.txt","wt");

	for (int i = 0; i < 3; i++) {
		printf("이름 학년 학과 순으로 입력 : ");
		scanf("%s %d %s", name, &grade, major);
		getchar();
		fprintf(fp, "%s %d %s\n", name, grade, major);

	}

	fclose(fp);




	return 0;
}

