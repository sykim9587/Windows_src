/*
	1. ǥ�� ����� �Լ�: stdio.h ������Ͽ� ����� ��ü
	-printf()
	-scanf()
	-����¼���: %��ȣ�� �Բ� ���ȴ�. 
	%d( %o, %x), %ld(long) , %c, %f, %lf(double), %s
	-����� 
	\ ��ȣ�� �Բ� ����. \n , \t(tab 8ĭ ����), \r (carriage return) : ����ϴ� �����ٿ� �� ������ Ŀ�� �̵�,
	\b: backspace (��ĭ �ڷ�), \a: alert
*/

#include<stdio.h>
#pragma warning (disable:4996)

int main() {
	int age;
	char blood_type;

	printf("���� = ");
	scanf("%d", &age);
	//run time error: ���ۿ� �ִ� ����Ű(Ư������) �νĵ�. 
	getchar();
	printf("������ = ");
	scanf("%c", &blood_type);

	printf("���� = %d, ������ = %c\n", age, blood_type);
	return 0;
}