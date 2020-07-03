/*
	구조체를 main 에서 분리하는 이유! 빼내려고

	3명의 성적을 입력받아 총점과 평균을 계산하여 출려하는 프로그래미 구현
	단, 정의된 구조체 Studnet 활용
*/

#include <stdio.h>
#include "Student.h" //사용자 정의 헤더파일은 " "
#pragma warning(disable:4996)

int main() {
	//Student stu; //학생 세명 하려면 배열로

	Student s[3];
	/*
	s[0]번 학생 s[1], s[2] 
	*/

	for (int i = 0; i < 3; i++) {
		printf("이름 = ");
		scanf("%s", s[i].name);
		printf("국어 = ");
		scanf("%d", &s[i].kor);
		printf("영어 = ");
		scanf("%d", &s[i].eng);
		printf("수학 = ");
		scanf("%d", &s[i].math);
		s[i].tot = s[i].kor + s[i].math + s[i].eng;
		s[i].avg = s[i].tot / 3.0;
	}

	for (int i = 0; i < 3; i++) {
		printf("%s님 성적결과는 다음과 같습니다. \n", s[i].name);
		printf("총점 = %d, 평균 = %.2lf\n", s[i].tot, s[i].avg);
	}
	return 0;
}