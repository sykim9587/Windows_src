/*
	������
	-�������� ����ü�� �����. 
	-��, ����� ���� �� �ִ� ���� ������ ���� ��� ��ũ�� ����̴�. 
*/

#include <stdio.h>
//#define SPRING 1

enum season{SPRING, SUMMER, FALL, WINTER}; //�ʱⰪ �� �� �ִ�. 

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