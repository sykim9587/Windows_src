/*
	����ü(Union)
	-������ ����ü�� �����ϴ�
	-����ü�� ����� ������ �޸𸮸� �Ҵ�޾� ó���Ѵ�.
	-����ü�� ��� ����� �ϳ��� ��������� �����ؼ� ����Ѵ�.
	-�� �Ⱦ���.
*/
#include <stdio.h>

union Student {
	int num;				//4 
	double grade;	//8
};

struct Score {
	int num;
	double grade;
};

int main() {
	union Student s1 = {1}; //����ü�� �ϳ��� ��´�
	struct Score s2 = {1,4.4};
	
	printf("�й�: %d\n", s1.num);
	s1.grade = 4.4;
	printf("����: %.1lf\n", s1.grade);//�̷��� �ϳ��� �ؾ��ؼ� �� ����.
	//printf("union�� ũ�� = %d\n", sizeof(s1)); //8����Ʈ 
	//printf("struct�� ũ�� = %d\n", sizeof(s2)); //16����Ʈ 


	
	return 0;
}