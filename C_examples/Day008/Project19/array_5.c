/*
	char* title[] = {"����", "����", "����"} //������ �迭

	char str[80];
	char* name = "ȫ�浿"; //�ξ� ȿ����
	
	�����͹迭�� 2�����迭�� ����� �ǹ�. 
*/

#include <stdio.h>

int main() {

	char* p[5]; //������ �迭 ����
	
	p[0] = "dog"; //���ڻ���� ������ 
	p[1] = "elephant";
	p[2] = "horse";
	p[3] = "tiger";
	p[4] = "lion";

	for (int i = 0; i < 5; i++) {
		printf("%s\n", p[i]);
	}

	return 0;
}