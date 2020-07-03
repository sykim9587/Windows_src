/* 
	멀티프로그램을 구현하시오
	<입력 및 출력형식>
	===== 메뉴 =====
	1. 최대값
	2. 사이합
	3. 수나열
	4. 계산기
	5. 종	   료 
	==============
	메뉴 = 


	<처리조건>
	1. 프로그램 실행 시 화면 보이도록
	2. 메뉴 번호 입력해서 동작
	3. 최대값: 두 정수 받아 큰거 출력
	4. 사이합: 두 정수의 자연수 합
	5. 수나열: 세 개의 정수 받아 큰 순서대로 나열
	6. 계산기: 두 정수와 하나의 연산자 입력 -> 결과 수행
	7. 사용자가 종료 선택시 프로그램 종료

	사이합:  1,5 입력시 1+2+3+4+5
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int menu;
	int su1, su2, res, tmp;

	while (1) {
		printf("===== 메뉴 =====\n1. 최대값\n2. 사이합\n3. 수나열\n4. 계산기\n5. 종	   료\n================\n메뉴 = ");
		scanf("%d", &menu);
		res = 0;

		if (menu == 1) { //최대값
			printf("수1 = ");
			scanf("%d", &su1);
			printf("수2 = ");
			scanf("%d", &su2);

			if (su1 >= su2) {
				res = su1;
			}
			else {
				res = su2;
			}
			printf("최대값 = %d\n\n", res);
		}
		else if (menu == 2) { //사이합
			printf("수1 = ");
			scanf("%d", &su1);
			printf("수2 = ");
			scanf("%d", &su2);
			
			if (su1 >= su2) { //su1 이 작아야 하므로
				tmp= su1;
				su1 = su2;
				su2 = tmp;
			}

			for (int i = su1; i <= su2; i++) {
				res += i;
			}
			printf("사이합: %d\n\n", res);
		}
		else if (menu == 3) {// 수나열 -> HW
			int su1, su2, su3, max, min, mid;
			printf("수1 = ");
			scanf("%d", &su1);
			printf("수2 = ");
			scanf("%d", &su2);
			printf("수3 = ");
			scanf("%d", &su3);

			if (su1 > su2 && su1 > su3) {
				max = su1;
				if (su2 > su3) {
					mid = su2;
					min = su3;
				}
				else {
					mid = su3;
					min = su2;
				}
			}
			else if (su2 > su1 && su2 > su3) {
				max = su2;
				if (su1 > su3) {
					mid = su1;
					min = su3;
				}
				else {
					mid = su3;
					min = su1;
				}
			}
			else {
				max = su3;
				if (su1 > su2) {
					mid = su1;
					min = su2;
				}
				else {
					mid = su2;
					min = su1;
				}
			}

			printf("max = %d, mid = %d, min = %d\n\n", max, mid, min);


		}
		else if (menu == 4) { //계산기 -> HW
			int su1, su2, res;
			char op;

			printf("수1 = ");
			scanf("%d", &su1);
			getchar();
			do {
				printf("연산자 =");
				scanf("%c", &op);
			} while (op != '+' && op != '-' && op != '*' && op != '/' && op != '%');

			do {
				printf("수2 = ");
				scanf("%d", &su2);
			} while (op == '/' && su2 == 0);

			switch (op) { // switch 에 char 가능
			case '+': res = su1 + su2; break;
			case '-': res = su1 - su2; break;
			case '*': res = su1 * su2; break;
			case '/': res = su1 / su2;
			}

			printf("%d %c %d = %d\n\n", su1, op, su2, res);
	
			



		}
		else if (menu == 5) {//종료
			printf(" finished \n");
			return 0;
		}
		else { // 틀린 값 입력
			printf("type again\n");
		}
	}

	return 0;
}