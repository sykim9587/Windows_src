/*
	반복문 : 동일하거나 유사한 성격 가진 문장 반복 처리
	1. for :횟수 제어
	2. while: 사용자 행위 제어
		while(1) 은 무한루프

	3. do while: 조건식이 거짓이라도 딱 한번은 수행한다. 
		
	우물의 깊이는 3m 이고 달팽이는 하루에 55cm 올라온다. 만약 달팽이가 미끄러지지 않는다면 며칠 안에 우물 벗어날까?

	-> 변형: 우물의 깊이를 입력ㅂ다으면
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int move=0;
	int day = 0;
	int depth;

	do {
		printf("우물의 깊이 (m) : ");
		scanf("%d", &depth);
	} while (depth <= 0);

	while (move < depth*100) {
		move += 55;
		day++;
	}
	printf("며칠 = %d", day);

	return 0;
}

/* 이렇게도 가능

int height = 0;
int days = 0;

do{
	height +=55;
	days += 1;

}while(height<300);

printf("height: %d", days);
return0;
*/