/*
	점수를 입력받아 학점을 계산하는 프로그램 구현 
	90 이상 'A'   80->B 70->C 60->D 그 외는 F 출력

*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	//선언
	int jumsu;
	char grade;

	//입력
	printf("점수입력:");
	scanf("%d", &jumsu);

	//처리
	/*if (jumsu >= 90) grade = 'A';
	else if (jumsu >= 80) grade = 'B';
	else if (jumsu >= 70) grade = 'C';
	else if (jumsu >= 60) grade = "D";
	else grade = 'F';*/

	switch (jumsu/10) { //간결화 하기 위해서 
	case 10: // grade = 'A'; //이건 없어도 내려간다.
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F'; //break not necessary 
	//break 없으면 아래에 있는 문장들 다 수행! 
	}

	//출력
	printf("학점 : %c\n", grade);

	return 0;
}