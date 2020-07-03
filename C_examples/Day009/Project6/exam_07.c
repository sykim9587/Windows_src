/*
	열거형
	-선언방식은 구조체와 비슷핟. 
	-단, 멤버로 가질 수 있는 것은 정수형 값을 담는 매크로 상수이다. 
*/

#include <stdio.h>
//#define SPRING 1

enum season{SPRING, SUMMER, FALL, WINTER}; //초기값 줄 수 있다. 

int main() {
	enum season ss;

	int x = 2;
	switch (x) {
	case SPRING: printf("spring\n");  break;
	case SUMMER: printf("summer\n");  break;
	case FALL: printf("fall\n");  break;
	case WINTER: printf("winter\n");  break;
	}
	return 0;
}