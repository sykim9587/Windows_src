/*
	원을 객체화하는 구조체를 선언하여 프로그래밍 하시오.
*/


#include <stdio.h>
#pragma warning(disable: 4996)

//현재 자료형이 없다. 
#define PI 3.14
#define SIZE 5 //원의 객체 수 


typedef struct Circle {
	int radius;
	double area;
}Circle;

/*
	원의 객체를 5개 입력받아 원의 면적을 계산한 후 면적이 100이상 200이하인 객체수를 출력하는 프로그램 구현

	반지름을 입력받아 원의 객체를 생성, 입력된 반지름이 0이면 입력 마친다. 
	원의 면적을 계산 후 100ㅡ200인 객체 수 출력하는 프로그램 구현하시오. 
	-> 동적할당과 연결 될 수 있다. 
*/

int main() {
	Circle ac;
	Circle c[80]; //기본적으로 80개 넣어준다. 

	//double area;
	int count = 0; //누적변수는 초기화 

	int i = 0;
	while(1){
		printf("반지름 = ");
		scanf("%d", &c[i].radius);
		if (c[i].radius == 0) break;
		c[i].area = (double)c[i].radius * c[i].radius * PI; 
		// casting 안해주면 녹색 줄 생긴다. PI는 자료형이 없고 앞에 int 이니까 자동 casting 경고. 
		//printf("%lf\n", area);
		if (c[i].area >= 100 && c[i].area <= 200) count++;
		i++;
	}


	//printf("반지름 %d의 면적 = %.2lf\n", ac.radius, area);
	printf("100이상 200이하인 객체수 = %d\n", count);

	return 0;

}