/*
	자동차의 정보를 담고잇는 객체를 구조체화 한 후 다음 주어진 기능을 구현
	<처리조건>
	1.자동차객체는 소유주이름, 현재연료, 현재속도를 멤버변수로 관리
	2.자동차의 가속과 감속시 연료와 속도의 변화를 출력하는 함수 구현
	3.자동차 최고속도 200, 한번 가속 시 속도 10 추가, 사용되는 연료는 2
	
*/

#include <stdio.h>

//매크로 상수 정의
#define MAX_SPEED 200
#define STEP 2
#define GAGE 10

//구조체 정의 -> 먼저 쓰여야 한다. 
typedef struct Car {
	char name[20]; //소유주 이름
	int carSpeed; //현재 속도
	int carGas; //현재 연료량
}Car;

//함수 선언부
void carExcel(Car* c); //엑셀패달 밟을 때 상황
void carBreak(Car* c ); //break 밟을 때 상황
void carDisp(Car* c); //현재상테


int main() {
	Car tico = { "티코", 0,100 };

	//현재상태 출력
	carDisp(&tico);
	printf("\n");

	//가속처리
	carExcel(&tico);
	carDisp(&tico);
	printf("\n");

	carBreak(&tico);
	carDisp(&tico);
	printf("\n");

	return 0;
}

void carDisp(Car* tico) {
	printf("소유자 : %s\n", tico->name);
	printf("현재속도: %d \n", tico->carSpeed);
	printf("현재 연료: %d\n", tico->carGas);
}

void carExcel(Car* tico) {
	/* 최고속도 200, 속도는 10씩 증가, 연료는 2씩 감소*/
	//1.연료가 있나?
	
	if (tico->carGas >= STEP) {
		tico->carGas -= STEP;
		if (tico->carSpeed + GAGE > 200) {
			tico->carSpeed = 200;
		}
		else {
			tico->carSpeed += GAGE;
		}
	}
}

void carBreak(Car* tico) {
	/* 속도 10 준다, 연료 2 준다, 속도는 양수*/
	if (tico->carGas >= STEP) {
		tico->carGas -= STEP;
		if (tico->carSpeed - GAGE <0) {
			tico->carSpeed = 0;
		}
		else {
			tico->carSpeed -= GAGE;
		}
	}
}