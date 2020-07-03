/*
	표준 입력 함수: scanf()
	1. 형식 
		scanf("입력서식", &변수명);
		키보드를 통해 입력서식에 맞는 데이터를 담을 해당 변수의 주소를 (해당 시스탬에)리턴시켜주는 함수
	2. 주의
		- Visual Studio 2013버전 이후부터 scanf 함수 보안과 안전성 문제 관련 MS사는 scanf_s()함수를 만들었다.
		- MS VS에서만. 

		-첫 방법: 해당 프로젝트명에서 우측버튼 클릭 -> 속성 -> /c++ -> 전처리기 -> 전처리 정의 기존 내용 + ;_CRT_...; 붙인다 
		(오류 메세지에 뜨는 것)

		-두번째 방법: 보안 경보 무시 : 해당프로젝트 명 -> 속성 -> c/c++ -> 일반탭에서 SDL 항목을 '아니오' 라고 변경
		Secruity Development Lifecycle (2019 ver)

		-세번째방법: 매크로상수 지정
		#pragma warning(disable: 4996)  -> most common method


*/

// 두개의 숫자를 입력받아 덧셈을 계산한 후 그 결과를 출력하는 프로그램 

#include <stdio.h>
#pragma warning(disable: 4996)  //매크로 상수

int main() {

	int su1, su2;
	int sum;

	//printf("두 수 입력:");
	//scanf("%d %d", &su1, &su2);
	printf("first: ");
	scanf("%d", &su1);	
	printf("second: ");
	scanf("%d", &su2);



	sum = su1 + su2;
	printf("%d + %d = %d\n", su1, su2, sum);
	return 0;
}