/*
	사이합 계산하는 프로그램

	<입력형식>
	첫번째수 =
	두번째수 =

	<출력>
	사이합 =

*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int su1, su2, res=0; //누적변수는 초기화를 해줘야 한다. 
	int i;
	int tmp; 

	printf("1st = ");
	scanf("%d", &su1);

	printf("2nd = ");
	scanf("%d", &su2);


	//이건 효율적이지 않다
	//for (i = su1; i <= su2; i++) { // su1< = su2
	//	res += i;
	//}

	//for (i = su1; i >= su2; i--) { // su1 >= su2
	//	res += i;
	//}

	if (su1 >= su2) { //뒤에 값이 작은 경우
		tmp = su1;
		su1 = su2;
		su2 = tmp;
	}

	for (i = su1; i <= su2; i++) { // su1< = su2
		res += i; 
	}

	printf("%d ~ %d 사이합 = %d\n", su1, su2, res);
	return 0;
}