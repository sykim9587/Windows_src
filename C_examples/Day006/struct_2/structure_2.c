#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


//구조체 정의
typedef struct Student {
	//Menber field 
	int sub[4]; //kor, eng, math, tot
	char name[20];
	double avg;

}Student;

int main() {
	//struct Student stu;

	////1st method
	//typedef struct Student Student; // 앞 자료형을 뒤로 줄이겠다
	//Student stu; //일반변수처럼

	//best method
	Student stu;

	stu.sub[0] = 90;
	stu.sub[1] = 87;
	stu.sub[2] = 88;
	strcpy(stu.name, "홍길동");

	stu.sub[3] = stu.sub[0] + stu.sub[1] + stu.sub[2];
	stu.avg = stu.sub[3] / 3.0;

	printf("%s님의 성적은 다음과 같습니다.\n", stu.name);
	printf("총점 : %d, 평균: %.2lf\n", stu.sub[3], stu.avg);

	return 0;
}