/* 
	계산기 프로그램
	두 개의 정수와 하나의 연산자를 입력받아 해당 연산의 계산을 수행한 후 결과를 출력하는 프로그램을 구현

	<입력>
	첫번째 수 =
	연산자(+, -, *, /, %) =
	두번째 수 =

	<처리조건>
	1. 주어진 연산자 이외의 값이 들어오면 다시 입력
	2. 연산자가 '/' 이고, 두번째수가 0이면 수 다시 입력
	3. 기타 조건은 프로그램의 흐름에 맞게 구현
	<주의>
	입력버퍼를 통해 입력된 값은 엔터 주의

*/

#include <stdio.h>
#pragma warning(disable : 4996)

int main() {

	int su1, su2, res;
	char op;  // 연산자


	printf("첫번째 수 = ");
	scanf("%d", &su1);
	getchar();

	do {
		printf("연산자 = ");
		scanf("%c", &op);
		getchar();
	} while (op != '+' && op != '-' && op != '*' && op != '/');

	do {
		printf("두번째 수 = ");
		scanf("%d", &su2);
	} while (op == '/' && su2 == 0);

	switch ((int)op) {
	case '+': res = su1 + su2; break;
	case '-': res = su1 - su2; break;
	case '*': res = su1 * su2; break;
	case '/': res = su1 / su2;
	}

	printf("%d %c %d = %d\n", su1, op, su2, res);
	return 0;
}