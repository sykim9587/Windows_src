#include <stdio.h>

int main() {
	int num = -5;

	if(num>0){ //{} 없어도 한줄은 포한됨.
		printf("%d는 양수입니다.\n", num);
	}
	else {
		printf("%d는 음수입니다\n", num);
	}


	printf("프로그램 종료.\n");
	return 0;
}