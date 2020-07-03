/*
	파일로부터 데이터를 읽어오는 작업
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	FILE* fp; //file 객체 생성
	int ch;

	fp = fopen("c:\\Sample\\a.txt", "wt"); //fp는 주소를 가지게 된다

	/* 
	 파일개발모드(mode): r, w, a(쓰기전용인데 뒤에 덧붙여라)
	 가끔: rt, rd, wt,wd
	 
	 거의 안쓴다..
	 r+:읽고 쓰기 
	 w+: 읽고 쓰기
	 a+: 읽고 덧붙이기
	
	하지만 file 입출력 거의 안 쓴다. 요즘은 데이터베이스 이용
	*/

	if (fp == NULL) {
		printf("a.txt 파일 열기 실패!!\n");
		return 0;
	}

	//file 작업
	for (int i = 0; i < 3; i++) {
		ch = fgetc(fp); //return 값이 int 고 값이 없으면 -1 return 한다.
		printf("%c\n", ch);
	}

	//file 닫기
	fclose(fp);
	return 0;
}