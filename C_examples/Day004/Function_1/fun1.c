/*
	함수(function)
	1. 정의 -> 명령어의 집합 , 모듛(modul)
	2. 형식
		반환형 함수명(매개변수){
			내용
			return;
		}
		-반환형 또는 결과형 리턴값: 호출안 곳으로 되돌려주는 값의 자료형
		-함수명 : 사용자 정의 규칙에 맞게 기술되며, 일반적 소문자 
		-return  값;
		-return 수식;
		-return ;

	3. 함수의 작성 순서 
		함수의 정의 : 함수 기술하는 것
		함수 호출
		함수 선언: main 앞에 함수의 존재를 알리는 것

	4. 함수의 호출
		call by name 
		call by value : 함수 호출시 특정 값을 가져가서 처리
		call by reference: 특정 값의 주소를 가져다가 처리하는 행위
	5. 함수의 구현 방법
		-반환형이 있다/없다 
		-매개변수가 있다/없다
		
*/

#include <stdio.h>
#pragma warning(disable:4996)

//함수정의부
void menu() { //단순 출력
	printf("===계산기 프로그램===\n");
	printf("1.더하기, 2. 빼기, 3.곱하기 4. 나누기\n");
	printf("-------------------------------------------------\n");
}

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	int res;
	res = x - y;
	return res;
}

int mul(int x, int y) {
	return x * y;

}

int div(int x, int y) {
	if (y == 0) y = 1;
	return x / y;
}

int main() {
	int su1, su2 = 0;

	int op;
	printf("첫번째 수 =");
	scanf("%d", &su1);
	printf("두번째 수 =");
	scanf("%d", &su2);

	menu();
	printf("연산자 = ");
	scanf("%d", &op);

	switch (op) {
	case 1:
	{//res = add(su1, su2); 
		printf("%d + %d = %d\n", su1, su2, add(su1, su2));
		break;
	}
	case 2: //res = sub(su1, su2);
		printf("%d - %d = %d\n", su1, su2, sub(su1, su2));
		break;
	case 3: //res = mul(su1, su2); 
		printf("%d * %d = %d\n", su1, su2, mul(su1, su2));
		break;
	case 4: //res = div(su1, su2);
		printf("%d / %d = %d\n", su1, su2, div(su1, su2));
	}

	//printf("결과값 %d\n", res);

	
	return 0;
}