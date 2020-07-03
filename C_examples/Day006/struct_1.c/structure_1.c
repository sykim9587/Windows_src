#include <stdio.h>
#include <string.h> //strcpy 쓰기 위해서!
#pragma warning(disable: 4996)

//구조체 정의  - 첫글자는 대부분 대문자
//main 안에도 구조체 정의 가능하지만 대부분 main 밖에 정의한다. 
struct Point {
	int xpos;
	int ypos;

};

struct Person {
	char name[20]; //20 byte - 영문자 19, 한글 9글자
	int age;
	double weight;
};

struct Student {
	//int kor, eng, math, tot;
	int sub[4];
	char name[20];
	//char* name; // 이름 넣을때는 포인트 변수 넣는게 제일 좋다. 
	double avg;
};

int main() {
	//구조체형 변수 선언
	struct Point ap; 
	struct Student stu;

	//구조체형 변수 이용하여 멤버에 접근
	ap.xpos = 1;
	ap.ypos = 1;

	stu.sub[0] = 80;
	stu.sub[1] = 90;
	stu.sub[2] = 70;
	stu.sub[3] = stu.sub[0]+stu.sub[1]+stu.sub[2];

	stu.avg = stu.sub[3] / 3.0;
	printf("점 (%d, %d)\n", ap.xpos, ap.ypos);
	//stu.name = "홍길동";
	strcpy(stu.name, "홍길동");

	// 구조체 출력
	printf("점 (%d, %d)\n", ap.xpos, ap.ypos);
	printf("average:%lf\n", stu.avg);
	printf("name:%s\n", stu.name);


	return 0;
}