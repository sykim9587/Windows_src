/*
	조건문, 선택문, 비교판단문
	-반드시 조건은 그 결과가 참 또는 거짓으로 판정되어야 한다. 
	-조건식으로 관계식 논리식 등이 사용된다. 
	-관계식 >= > < <= == !=
	-논리식 논리값(true, false) 이용해서 계산 수행 -> 하나 이상의 관계식을 묶에서 계산할 때 사용
	&& || !(NOT)

	1.단순 if문
	2. if - else 문
	3. 다중if 문, else if 문
	 -> 하나의 조건문으로 판단 어려울 때 
	4. switch case break 문
	-> switch(수치 or 수식, 정수형)
*/

//하나의 정수를 입력받아 절대값으로 변환하여 출력하는 프로그램
//단순 if문

#include <stdio.h>
#pragma warning(disable: 4996)
 
int main()
{
	int num;
	printf("정수 = ");
	scanf("%d", &num);

	if (num < 0) {
		num = -num;
		//num *= -1;
	}

	printf("절대값 = %d\n", num);

	return 0;
}