/*
	�ֹε�Ϲ�ȣ : 123456 - abcdefg
	������� : 12/34/56
	�������� : a
					-1800��� : 0(����), 9(����)
					-1900��� : 2(����), 1(����)
					-2000���: 4(����), 3(����)
	������� : b
					- 0 : ����, ���
					-1 : ����
					-2: ���� �泲
					-3: ���
					-4: ���
					-5:�泲
					-6:����
					-7: ����
					-9: ���ֵ� 

	�ֹι�ȣ 8��° (a) �Է¹޾� ������ ����⵵

	<�Է�>
	8��° ���� �ϳ� =
	<���>
	����⵵ : xxxx�⵵
	����: ���� or ����

	<ó������>
	1. ��������: jumincode, year, gender
	2. �־��� ���Ŀ� �°�

*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int jumincode, year;
	char gender;
	//gender = int �ؼ� Ǯ��
	//gender = jumincode �ϰ� ���߿� %2 �ϰ� ¦�� Ȧ�� 

	printf("8��° ���� �ϳ�= ");
	scanf("%d", &jumincode);

	if (jumincode % 2 == 0) {
		gender = 'F';
		if (jumincode == 0) {
			year = 1800;
		}
		else if (jumincode == 2) {
			year = 1900;
		}
		else {
			year = 2000;
		}
	}
	else {
		gender = 'M';
		if (jumincode == 9) {
			year = 1800;
		}
		else if (jumincode == 1) {
			year = 1900;
		}
		else {
			year = 2000;
		}
	}

//����⵵: xxxx�⵵
//���� : ���� or ����

	printf("����⵵: %d �⵵\n", year);
	printf("����: %s", (gender == 'F') ? "����" : "����");

	return 0;
}
