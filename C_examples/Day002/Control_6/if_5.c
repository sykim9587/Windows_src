/*
	������ 1���� �Է¹޾� �ش� �����ڰ� �빮������ �ҹ������� �Ǵ��Ͽ� ����ϴ� ���α׷�

	<�Է�����>
	���� = k

	<��¹��>
	k�� �ҹ��� �Դϴ�. 

	<��Ʈ>
	�ƽ�Ű�ڵ尪 : A(65)- Z(90), a (97)- z(122) �̿�


*/
#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	//char letter;
	int ch;
	//int ch �޾Ƽ� 

	printf("���� = "); // int �������� ���ڷ� �־��ش�!
	//scanf("%c", &letter);
	scanf("%d", &ch);  //�̷��� �Ǿ������ϱ� ���ڷ�!
	//scanf("%d", &ch); int �� ó���ϰ� 

	if (ch >= 'A' && ch < 'Z') {
		printf("%c �� �빮�� �Դϴ�", ch);
	}
	else if (ch >= 97 && ch < 123){
		printf("%c �� �ҹ��� �Դϴ�", ch);
	}
	else {
		printf("���ڰ� �ƴմϴ�.");
	}


	return 0;
}