/*
	Ű���带 ���� �̸��� ���� �׸��� ������ �޾� ����ϴ� ���α׷�
	<�Է�>
	�̸� =
	���� =
	���� =

	<���>
	ȫ�浿���� ���̴� 19���̰� ������ 178.9�̱���!!!

*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

int main() {
	char name[80]; //�Ϲ��� ������ ����
	/* �迭���� �迭�� �����ּҸ� ���Ѵ�.*/
	int age;
	double height;

	printf("�̸� = ");
	//name = gets(); //�̷��� �� ����
	/*���ڿ��� ���Կ����ڸ� ����� �� ����
		getchar()  : get character, �� ���ڸ� �Է¹޾ƶ�
		gets(): get string ���ڿ��� �Է¹޾ƶ�
	*/
	gets(name);
	//strcpy(name, gets());
	//scanf("%s", name);
	/*printf("���� = ");
	scanf("%d", &age);
	printf("���� =");
	scanf("%lf", &height);*/

	//printf("%s���� ���̴� %d���̰� ������ %.1lf�̱���!!\n", name, age, height);
	printf("%s�� ȯ���մϴ�.\n", name);
	return 0;
}
