/*
	���� ��üȭ�ϴ� ����ü�� �����Ͽ� ���α׷��� �Ͻÿ�.
*/


#include <stdio.h>
#pragma warning(disable: 4996)

//���� �ڷ����� ����. 
#define PI 3.14
#define SIZE 5 //���� ��ü �� 


typedef struct Circle {
	int radius;
	double area;
}Circle;

/*
	���� ��ü�� 5�� �Է¹޾� ���� ������ ����� �� ������ 100�̻� 200������ ��ü���� ����ϴ� ���α׷� ����

	�������� �Է¹޾� ���� ��ü�� ����, �Էµ� �������� 0�̸� �Է� ��ģ��. 
	���� ������ ��� �� 100��200�� ��ü �� ����ϴ� ���α׷� �����Ͻÿ�. 
	-> �����Ҵ�� ���� �� �� �ִ�. 
*/

int main() {
	Circle ac;
	Circle c[80]; //�⺻������ 80�� �־��ش�. 

	//double area;
	int count = 0; //���������� �ʱ�ȭ 

	int i = 0;
	while(1){
		printf("������ = ");
		scanf("%d", &c[i].radius);
		if (c[i].radius == 0) break;
		c[i].area = (double)c[i].radius * c[i].radius * PI; 
		// casting �����ָ� ��� �� �����. PI�� �ڷ����� ���� �տ� int �̴ϱ� �ڵ� casting ���. 
		//printf("%lf\n", area);
		if (c[i].area >= 100 && c[i].area <= 200) count++;
		i++;
	}


	//printf("������ %d�� ���� = %.2lf\n", ac.radius, area);
	printf("100�̻� 200������ ��ü�� = %d\n", count);

	return 0;

}