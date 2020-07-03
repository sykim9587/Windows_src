/*
	문자열 처리
	표준입력함수 : scanf() - 공백 처리 못한다. 
							gets() - 그래서 나온 것
							하지만 크기보다 더 큰 문자열 넣으면 처리되고 뒷 부분 소실되고 에러 메세지 나온다
							fgets(문자배열, 크기, 표준입력객체) - 그래서 나온 것

*/
#include <stdio.h>
#pragma warning(disable:4996) //string 에도 필요하다 strcmp도!

int main() {

	//char words[80]; //80byte -영문 79자, 한글 39자  
	char words[11];

	printf("문자열 =");
	//scanf("%s", words); //공백처리 불가능
	//gets(words); //공백 처리 가능

	fgets(words, sizeof(words), stdin);

	printf("입력문자열 : %s\n", words);

	//scanf("%s", words);
	//printf("입력버퍼에 남아있는 문자열: %s\n", words);
	
	return 0;
}