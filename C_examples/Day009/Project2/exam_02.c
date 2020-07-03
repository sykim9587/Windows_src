#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

/*
	양수를 입력받아 작업을 수행하다가 입력값이 0이나 음수이면 종료
*/

int main() {
	int* ip; //동적으로 할당받은 공간을 연결할 포인터변수
	int count = 0; //입력받은 양수의 개수를 누적할 변수
	int num; 
	int size = 5; //한번에 할당받을 동적공간의 크기
	//int i = 0;
	//동적할당
	ip = (int*)calloc(size, sizeof(int)); //5개의 공간 할당됨

	//반복처리를 위한 로직 구현
	while (1) { //무한루프
		printf("양수 =");
		scanf("%d", &num);
		if (num <= 0) break;

		//할당 된 공간의 크기를 벗어났는지 확인 
		if (count < size) {
			ip[count++] = num;
		}
		else { //할당된 공간의 크기 벗어나면
			size += 5;
			ip = (int*)realloc(ip, size*sizeof(int)); //다시 사이즈 설정
			ip[count++] = num;
		}
	}

	for (int i = 0; i < count; i++) {
		printf("%d\n", ip[i]);
	}

	free(ip); //동적할당 해제
	return 0;
}