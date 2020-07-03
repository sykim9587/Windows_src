/*
	하나 문자 입력받아 출력 -> 대문자 출력 -> 반복여부 확인 후 작업 반복

	<입력 및 출력형식>
	문자 = k
	k == K
	계속(y/n) = y

	문자 = a
	a == A
	계속(y/n) = N
	프로그램 종료.

	A(65) => a(97) Z (90)=> z(122) // 32 difference
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	char ch;
	char check; // y or n 

	while (1) { //무한 loop
		printf("문자 = ");
		scanf("%c", &ch);


		if (ch >= 'A' && ch <= 'Z') {
			printf("%c ==> %c\n", ch, (char)ch + 32); // 대문자에서 소문자로
		}
		else {
			printf("%c ==> %c\n", ch, ch - 32); // 정수형 취급하기 때문에 숫자 빼는거 가능 
		}
		getchar(); // 버퍼 지우는 행위! 
		/*
			표준입출력 함수 
			printf, putchar (한 문자), puts (문자열 내보내라)
			scanf, getchar (한 문자 가져오기, 변수 필요없다), gets

		*/
		printf("계속 (y/n) = ");
		scanf("%c", &check);
		
		if (check == 'n' || check == 'N') break;
		getchar();
	}

	printf("종료!\n");
	return 0;
}


