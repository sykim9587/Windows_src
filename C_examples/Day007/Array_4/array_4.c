/*
	문자열을 저장하는 문자배열 
	char word[4];
*/

#include <stdio.h>

int main() {
	char word[5];

	word[0] = 'L';
	word[1] = 'O';
	word[2] = 'V';
	word[3] = 'E';
	word[4] = '\0';

	for (int i = 0; i < 4; i++) {
		printf("%c", word[i]);
	}
	printf("\n");
	//이렇게 char로 저장하면 하나씩 출력해야한다. %s 하면 쓰레기값 나온다. 
	//쓰레기값 하기 싫으면 배열의 크기를 하나 더 크게 잡고 마지막에 Null sting 넣어준다. 

	printf("%s", word);

	return 0;
}