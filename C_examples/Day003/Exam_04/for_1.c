/* 
	반복문 : 동일하거나 유사한 성격을 가지고 있는 문장을 반복할 때 사용하는 문 ( 일정한 규칙을 가지고 있다)
	for 문: 횟수 제어에 사용
		1) 형식 
			for(초기;조건;증감){
				반복하는 문장
			}
	while 문: 사용자에 의해 반복을 제어할 때 주로 사용된다
		1) 형식
			while(조건){
				반복;
			}
	do~while문: 조건이 거짓이라도 딱 한번은 수행된다. 
		1) 형식
			do{

			}while(조건); 

*/

#include <stdio.h>

int main() {
	int i;
	/*printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);*/

	//for (int i = 1; i <= 10; i++) { // for(;i<=10;i++) 이렇게 생략도 가능하지만 위에 선언문에서 int i=1 이렇게 해두어야 한다. 
	//	printf("%d\n", 1);
	//}


	i = 1;
	/*while (i <= 10) {
		printf("%d\n", 1);
		i++;
	}*/

	do {
		printf("%d\n", 1);
		i++;
	} while (i <= 10);

	return 0;
}