/*
	공용체(Union)
	-형식은 구조체와 동일하다
	-구조체는 멤버들 각각의 메모리를 할당받아 처리한다.
	-공용체는 모든 멤버가 하나의 저장공간을 공유해서 사용한다.
	-잘 안쓴다.
*/
#include <stdio.h>

union Student {
	int num;				//4 
	double grade;	//8
};

struct Score {
	int num;
	double grade;
};

int main() {
	union Student s1 = {1}; //공용체는 하나씩 담는다
	struct Score s2 = {1,4.4};
	
	printf("학번: %d\n", s1.num);
	s1.grade = 4.4;
	printf("학점: %.1lf\n", s1.grade);//이렇게 하나씩 해야해서 안 쓴다.
	//printf("union의 크기 = %d\n", sizeof(s1)); //8바이트 
	//printf("struct의 크기 = %d\n", sizeof(s2)); //16바이트 


	
	return 0;
}