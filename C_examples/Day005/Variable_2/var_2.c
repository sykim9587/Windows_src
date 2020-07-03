// 다양한 형태의 지역변수

#include <stdio.h>

int main() {
	int cnt;

	for (cnt = 0; cnt < 3; cnt++) { // 안에 내용하고 cnt ++ 마지막으로 하고 조건 비교후 나감. 
		int num = 0; //지역변수 
		num++;
		printf("%d번째 반복, 지역변수 num = %d\n", cnt, num);
	}

	if (cnt == 3) {
		int num = 7;
		num++;
		printf("if문 내에 존재하는 지역변수 num = %d\n", num);
	}
	return 0;
}