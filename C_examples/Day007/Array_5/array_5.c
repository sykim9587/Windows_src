/*
	scanf() 함수를 통해 문자열 입력받아 배열에 저장 후 출력
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char word[80]; //기본적으로 크게 잡는다. 
	int size = 0;
	printf("문자열 = ");
	scanf("%s", word);

	printf("입력된 문자열은 %s\n", word);

	for (int i = 0; i < 80; i++) {
		if (word[i] == '\0') break;
		else {
			size++;
		}
	}
	printf("%s 단어의 길이는 %d자 입니다.\n", word, size);


	return 0;
}