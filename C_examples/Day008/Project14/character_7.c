/*
	gets = get string ���ڿ� �Է� �����Լ�
	puts = put string ���ڿ� ��� �����Լ�
	scanf => %s
	printf => %s
	//scanf("%s", str); //�����̳� ���ʹ� �� ����.

	����!!
	���ڿ��� ������� ���� �������̰� ��Ȯ�� fgets()�� fputs() �Լ��� ����ϴ� ���� �����Ѵ�. 
	fgets
	fputs
*/

#include <stdio.h>
//#include <string.h>
#pragma warning(disable:4996)

int main() {
	char str[20]; //20byte - ������ 19, �ѱ� 9��

	printf("���ڿ� = ");
	//scanf("%s", str);												//������ �� ����. 
	//gets(str);															//����ó������

	//scanf("%s", str);												//ũ�⺸�� ū�ſ��� �׳� �Է��ϰ� �� �ڿ� ������� �ڸ��� data�� �ҽ�
	//gets(str);															//ũ�⺸�� ū�ſ��� �׳� �Է��ϰ� �� �ڿ� ������� �ڸ��� data�� �ҽ�

	fgets(str, 20, stdin);											//�Է��� ��������� ���� �Ҵ��� ������ ũ�⸸ŭ��! 
	printf("�Է��� ���ڿ� : %s\n", str);

	return 0;
}