/*
	성적처리 프로그램

	<입력>
	국어 = 
	영어 =
	수학 =

	<출력>
	총점 = xx, 평균 = xx.xx , 학점 = xx

	<처리조건>
	1. 변수의 자료형과 이름을 임의로 구현
	2. 평균은 총점이용, 소숫점 2자리까지
	3. 학점은 평균 이용, 90이상 A, 80-> B, 70-> C, 60-> D, else F
	4. 학점 switch ~ case 문 이용
	5. 각 과목의 점수는 0-100, 범위 벗어나면 다시 입력받기 
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	int kor, eng, math, tot;
	double avg; //기본형이니까 double 
	char level;

	do {
		printf("국어 = ");
		scanf("%d", &kor);
	} while (kor < 0 || kor >100);

	do {
		printf("영어 = ");
		scanf("%d", &eng);
	} while (eng < 0 || eng >100);

	do {
		printf("수학 = ");
		scanf("%d", &math);
	} while (math < 0 || math >100);

	//printf("국어 = ");
	//scanf("%d", &kor);
	//printf("영어 = ");
	//scanf("%d", &eng);
	//printf("수학 = ");
	//scanf("%d", &math);

	
	tot = kor + eng + math;
	avg = tot / 3.0;

	switch ((int)avg / 10) {
	case 10: case 9: level = 'A'; break;
	case 8: level = 'B'; break;
	case 7: level = 'C'; break;
	case 6: level = 'D'; break;
	default: level = 'F';
	}
	printf("총점 = %d, 평점 =%.2lf , 학점 =%c", tot, avg, level); 

	/*
		int => %d, long => %ld
		float => %f, double => %lf 
	*/
	return 0;
}