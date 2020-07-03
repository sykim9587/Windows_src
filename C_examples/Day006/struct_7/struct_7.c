/*
	다음 주어진 입출력형식에 맞게 구현하시오.

	<입력 및 출력형식>
	====[도형 생성하기]====
	1. 점 2.원 3.사각형  4.종료
	-------------------------------------
	선택 =

	[1]
	x=5
	y=5
	점 (x,y) = (5,5)

	[2]
	h = 7
	w = 6
	높이(h) = 7, 너비(w) = 6

	<처리조건>
	1. 점, 원, 사각형은 각각 구조체 객체로 선언하여 처리
	2. 점은 멤버필드로 x,y 좌표값을 같는다
	3. 원은 멤버필드로 반지름 r을 갖는다
	4. 사각형은 멤버필드로 높이와 너비를 갖는다

*/

#include <stdio.h>
#pragma warning(disable:4996)
//구조체 정의
typedef struct Point {
	int x;
	int y;
}Point;

typedef struct Circle {
	int r;
}Circle;

typedef struct Rect {
	int w;
	int h;
}Rect;

//열거형
enum TYPE{ POINT=1, CIRCLE, RECT, EXIT}; //1쓰지 않으면 0부터 1,2,3,...


int main() {
	int choice;
	enum TYPE type; //이 부분 다시 보기! 

	while (1) {
		printf("\n==[도형생성]==\n");
		printf("1.점 2.원 3.사각형 4.종료\n");
		printf("선택 =");
		scanf("%d", &choice);

		switch (choice) {
		case POINT:
		{
			Point p;
			printf("x = ");
			scanf("%d", &p.x);
			printf("y= ");
			scanf("%d", &p.y);

			printf("\n점 (x,y) = (%d, %d)\n", p.x, p.y);
			break;
		}
		case CIRCLE:
		{
			Circle cp;
			printf("r = ");
			scanf("%d", &cp.r);

			printf("\n반지름 (r) = %d\n", cp.r);
			break;
		}
		case RECT:
		{
			Rect cr;
			printf("w = ");
			scanf("%d", &cr.w);
			printf("h = ");
			scanf("%d", &cr.h);
			printf("\n높이(h) 너비(w) = %d\n", cr.h, cr.w);
			break;
		}
		case EXIT:
			printf("종료\n");
			return 0;
		default:
			printf("선택이 올바르지 않습니다.\n");
		}

	}

	return 0;
}