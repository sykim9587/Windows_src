/*
	������ �Է¹޾� ������ ����ϴ� ���α׷� ���� 
	90 �̻� 'A'   80->B 70->C 60->D �� �ܴ� F ���

*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	//����
	int jumsu;
	char grade;

	//�Է�
	printf("�����Է�:");
	scanf("%d", &jumsu);

	//ó��
	/*if (jumsu >= 90) grade = 'A';
	else if (jumsu >= 80) grade = 'B';
	else if (jumsu >= 70) grade = 'C';
	else if (jumsu >= 60) grade = "D";
	else grade = 'F';*/

	switch (jumsu/10) { //����ȭ �ϱ� ���ؼ� 
	case 10: // grade = 'A'; //�̰� ��� ��������.
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F'; //break not necessary 
	//break ������ �Ʒ��� �ִ� ����� �� ����! 
	}

	//���
	printf("���� : %c\n", grade);

	return 0;
}