/*
	�ϳ� ���� �Է¹޾� ��� -> �빮�� ��� -> �ݺ����� Ȯ�� �� �۾� �ݺ�

	<�Է� �� �������>
	���� = k
	k == K
	���(y/n) = y

	���� = a
	a == A
	���(y/n) = N
	���α׷� ����.

	A(65) => a(97) Z (90)=> z(122) // 32 difference
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	char ch;
	char check; // y or n 

	while (1) { //���� loop
		printf("���� = ");
		scanf("%c", &ch);


		if (ch >= 'A' && ch <= 'Z') {
			printf("%c ==> %c\n", ch, (char)ch + 32); // �빮�ڿ��� �ҹ��ڷ�
		}
		else {
			printf("%c ==> %c\n", ch, ch - 32); // ������ ����ϱ� ������ ���� ���°� ���� 
		}
		getchar(); // ���� ����� ����! 
		/*
			ǥ������� �Լ� 
			printf, putchar (�� ����), puts (���ڿ� ��������)
			scanf, getchar (�� ���� ��������, ���� �ʿ����), gets

		*/
		printf("��� (y/n) = ");
		scanf("%c", &check);
		
		if (check == 'n' || check == 'N') break;
		getchar();
	}

	printf("����!\n");
	return 0;
}


