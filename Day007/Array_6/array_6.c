/*
	���ڿ��� �Է¹޾� �Էµ� ���ڿ��� �м��� �� ���ĺ��� ������ ����ϴ� ���α׷��� �����Ͻÿ�

	<�Է� �� ���>
	���ڿ�(�빮�ڸ�) = AAAABBBCCCEE
	A: 4��
	B: 3��
	C: 3�� 
	E: 2��
*/
//���� Ǭ��. ������ solution �� teacherSol.c �� �ִ�. 

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char str[80];
	int alpha[26] = { 0 };
	printf("���ڿ�(�빮�ڸ�) = ");
	scanf("%s", str);
	char letter = 'A';
	char letternum = 0;
	for (int i = 0; i <80; i++) {
	
		if (str[i] == letter) {  
			alpha[letternum] += 1;
			if (str[i + 1] != str[i]) {
				letter += 1;
				letternum += 1;
			}
		}
		else {
			letter += 1;
			letternum += 1;
		}

	}

	char finalletter = 'A';
	for (int i = 0; i < 26; i++) {
		printf("%c : %d\n", finalletter++, alpha[i]);
	}

	return 0;
}