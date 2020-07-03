/*
	주민등록번호 : 123456 - abcdefg
	생년원일 : 12/34/56
	성별판정 : a
					-1800년대 : 0(여자), 9(남자)
					-1900년대 : 2(여자), 1(남자)
					-2000년대: 4(여자), 3(남자)
	출생지역 : b
					- 0 : 서울, 경기
					-1 : 강원
					-2: 대전 충남
					-3: 충북
					-4: 경북
					-5:경남
					-6:전북
					-7: 전남
					-9: 제주도 

	주민번호 8번째 (a) 입력받아 성별과 출생년도

	<입력>
	8번째 숫자 하나 =
	<출력>
	출생년도 : xxxx년도
	성별: 남자 or 여자

	<처리조건>
	1. 변수정의: jumincode, year, gender
	2. 주어진 형식에 맞게

*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int jumincode, year;
	char gender;
	//gender = int 해서 풀기
	//gender = jumincode 하고 나중에 %2 하고 짝수 홀수 

	printf("8번째 숫자 하나= ");
	scanf("%d", &jumincode);

	if (jumincode % 2 == 0) {
		gender = 'F';
		if (jumincode == 0) {
			year = 1800;
		}
		else if (jumincode == 2) {
			year = 1900;
		}
		else {
			year = 2000;
		}
	}
	else {
		gender = 'M';
		if (jumincode == 9) {
			year = 1800;
		}
		else if (jumincode == 1) {
			year = 1900;
		}
		else {
			year = 2000;
		}
	}

//출생년도: xxxx년도
//성별 : 남자 or 여자

	printf("출생년도: %d 년도\n", year);
	printf("성별: %s", (gender == 'F') ? "여자" : "남자");

	return 0;
}
