/*
	���ڿ� ó��
	ǥ���Է��Լ� : scanf() - ���� ó�� ���Ѵ�. 
							gets() - �׷��� ���� ��
							������ ũ�⺸�� �� ū ���ڿ� ������ ó���ǰ� �� �κ� �ҽǵǰ� ���� �޼��� ���´�
							fgets(���ڹ迭, ũ��, ǥ���Է°�ü) - �׷��� ���� ��

*/
#include <stdio.h>
#pragma warning(disable:4996) //string ���� �ʿ��ϴ� strcmp��!

int main() {

	//char words[80]; //80byte -���� 79��, �ѱ� 39��  
	char words[11];

	printf("���ڿ� =");
	//scanf("%s", words); //����ó�� �Ұ���
	//gets(words); //���� ó�� ����

	fgets(words, sizeof(words), stdin);

	printf("�Է¹��ڿ� : %s\n", words);

	//scanf("%s", words);
	//printf("�Է¹��ۿ� �����ִ� ���ڿ�: %s\n", words);
	
	return 0;
}