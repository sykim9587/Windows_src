#include <stdio.h>

//구조체 정의
typedef struct Point { //평면위의 한 점을 객체화하는 정의문
	int xpos; //x좌표
	int ypos;
}Point;

int main() {
	//구조체형 변수를 선언해야 구조체를 사용할 수 있다. 
	Point start;
	Point end;
	Point third;

	// Point p[3]; //묶을 수 있다.

	double distance; //두 점 사이 거리
	//구조체변수를 통해 멤버에 접근 :direct 연산자
	start.xpos = 0; //p[0].xpos
	start.ypos = 0; //p[0].ypos

	end.xpos = 10; // p[1].xpos
	end.ypos = 0; // p[1]. ypos


	printf("점1(x,y) = 점(%d, %d)\n", start.xpos, start.ypos);
	printf("점2(x,y) = 점(%d, %d)\n", end.xpos, end.ypos);
	return 0;
}