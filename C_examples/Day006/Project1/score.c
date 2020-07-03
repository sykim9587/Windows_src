/*
	성적 처리 프로그램 
	<입력 및 출력형식>
	==학적 관리 프로그램==
	1. 학생등록
	2. 학생검색
	3. 학생수정
	4. 학생삭제
	5. 작업종료
	==================

*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int a[5] = { 10,20,30,40,50 };
	int b[4] = { 0 }; 
	int value;
	int index; //삭제할 값의 위치 저장하는 변수

	printf("삭제할 값 = ");
	scanf("%d", &value);

	//for (int i = 0; i < 5; i++) { //배열의 크기는 상관없다. 
	//	if (a[i] == value) {
	//		a[i] = 0;
	//		break;
	//	}
	//}

	/*for (int i = 0; i < 5; i++) {
		if (a[i] != 0) printf("%5d", a[i]);
	}*/



	//제대로 하는법
	for (int i = 0; i < 5; i++) { //배열의 크기는 상관없다. 
		if (a[i] == value) {
			index = i;

			break;
		}
	}

	for (int i = 0; i < 5; i++) {
		if (i < index)
			b[i] = a[i];
		else {
			b[i] = a[i + 1];
		}
	}

	for (int i = 0; i < 4; i++) 
		 printf("%5d", b[i]);



	return 0;
}