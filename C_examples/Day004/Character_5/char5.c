/* 
	ǥ�� ����� �Լ� : printf(), scanf()
	���� ���� : putchar(), getchar()
	���ڿ� ���� :puts(char �迭��), gets(char �迭��) -> ��ĭ�� �����Ѵ�. �׸��� �̰� puts�̿��ϴ°� ����. enter�θ� ��Ÿ����

*/

#include<stdio.h>
#pragma warning(disable: 4996)
#include <string.h>

int main() {
	//int a, b;
	char pass[10];

	//printf("���� �ΰ� =");
	//scanf("%d %d", &a, &b); // �������� space

	//printf("a= %d, b= %d\n", a, b);

	printf("10 ������ ���ڿ� = ");
	//scanf("%s", pass);
	gets(pass);

	printf("�Էµ� ���ڿ� : %s\n", pass);

	return 0;
}