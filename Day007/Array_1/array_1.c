/*
	배열(array)
	1.정의 : 동일한 자료형을 하나의 이름으로 묶어서 관리하는 자료구조
	-기억장소의 낭비를 줄인다.
	-연속된 공간에 데이터가 저장되기 때문에 처리속도가 빠르다
	-유사문구가 생성되어 반복문 처리가 가능하다

	2. 배열의 선언
		자료형 배열명[배열의 크기]
		int x[5];
	3. 배열은 첨자를 이용하여 사용된다. (0부터 시작)

	다섯명의 나이를 입력받아 배열에 저장한 후 평균 나이를 계산하여 출력하는 프로그램을 구현하시오.
	<입력 출력>
	다섯명의 나이를 입력해주세요.
	나이 = 10, 20,30,40,50

	입력된 다섯명의 나이 : 10 20 30 40 50
	평균 나이: 30.0입니다. 
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int age[5];
	int sum=0;
	double avg;

	printf("나이 = ");
	//scanf("%d %d %d %d %d", &age[0], &age[1], &age[2], &age[3], &age[4]);

	for (int i = 0; i < 5; i++) {
		scanf("%d", &age[i]);
		sum += age[i]; //scanf 에 연속으로 넣을 때 space랑 enter 키가 먹힌다. 
	}

	avg = sum / 5.0;
	printf("입력된 나이: ");
	for (int i = 0; i < 5; i++) {
		printf("%3d", age[i]);
	}
	printf("\n");
	printf("평균나이 = %.1lf\n", avg);




	return 0;
}

/*
	tot까지 배열에 넣고싶을때 
	int age[6] = {0} 초기화 시키기.
*/