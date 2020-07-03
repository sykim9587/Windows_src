/*
	영문자 1개를 입력받아 해당 영문자가 대문자인지 소문자인지 판단하여 출력하는 프로그램

	<입력형식>
	문자 = k

	<출력방식>
	k는 소문자 입니다. 

	<힌트>
	아스키코드값 : A(65)- Z(90), a (97)- z(122) 이용


*/
#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	//char letter;
	int ch;
	//int ch 받아서 

	printf("문자 = "); // int 넣을때는 숫자로 넣어준다!
	//scanf("%c", &letter);
	scanf("%d", &ch);  //이렇게 되어있으니까 숫자로!
	//scanf("%d", &ch); int 로 처리하고 

	if (ch >= 'A' && ch < 'Z') {
		printf("%c 는 대문자 입니다", ch);
	}
	else if (ch >= 97 && ch < 123){
		printf("%c 는 소문자 입니다", ch);
	}
	else {
		printf("문자가 아닙니다.");
	}


	return 0;
}