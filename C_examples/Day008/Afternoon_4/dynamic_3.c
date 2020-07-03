/*
	동적할당을 활용한 문자열처리
		printf("문자열 = ");
		scanf("%s", cp+i);
		-> 이렇게 포인터 줘도 저장 안된다. 

		char str[80];
		printf("문자열 = ");
     	scanf("%s", str);
    	strcpy(*(cp+i), str);
		-> 이렇게 따로 str을 만들어서 넣어줘도 저장이 안된다 

		=> 방법:
		동적할당


*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)

//세개의 문자열을 입력받아 저장한 후 출력하는 프로그램 작성
//아래 프로그램은 안 돌아간다. 그래서 동적할당 해야함
//int main() {
//
//	char* cp[3];
//	char str[80];
//
//	for (int i = 0; i < 3; i++) {
//		printf("문자열 = ");
//		scanf("%s", str);
//		strcpy(*(cp+i), str); 
//	}
//
//	for (int i = 0; i < 3; i++) {
//		printf("%s", *(cp + i));
//	}
//	return 0;
//}


int main() {

	char* cp[3]; //이건 80바이트 3개가 아니다. 그래서 동적으로 할당해라
	char str[80];

	for (int i = 0; i < 3; i++) {
		printf("문자열 = ");
		scanf("%s", str);
		//동적할당
		cp[i] = (char*)malloc(strlen(str) + 1);  //size 가 없으니까 동적할당 하고 넣어줘야 한다. 
		strcpy(cp[i], str);
	}

	for (int i = 0; i < 3; i++) {
		printf("%s\n", *(cp + i));
	}
	return 0;
}

/*
	str 도 3개의 공간이 있어야 한다. 만약 cp[i] = str 하고 싶으면.. 
*/