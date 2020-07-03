/*
	문자열을 입력받아 입력된 문자열을 분석한 후 알파벳의 개수를 출력하는 프로그램을 구현하시오

	<입력 및 출력>
	문자열(대문자만) = AAAABBBCCCEE
	A: 4개
	B: 3개
	C: 3개 
	E: 2개
*/
//내가 푼것. 교수님 solution 은 teacherSol.c 에 있다. 

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char str[80];
	int alpha[26] = { 0 };
	printf("문자열(대문자만) = ");
	scanf("%s", str);
	char letter = 'A';
	char letternum = 0;
	for (int i = 0; i <80; i++) {
	
		if (str[i] == letter) {  
			alpha[letternum] += 1;
			if (str[i + 1] != str[i]) {
				letter += 1;
				letternum += 1;
			}
		}
		else {
			letter += 1;
			letternum += 1;
		}

	}

	char finalletter = 'A';
	for (int i = 0; i < 26; i++) {
		printf("%c : %d\n", finalletter++, alpha[i]);
	}

	return 0;
}