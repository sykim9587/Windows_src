/*
	���ڿ��� �����ϴ� ���ڹ迭 
	char word[4];
*/

#include <stdio.h>

int main() {
	char word[5];

	word[0] = 'L';
	word[1] = 'O';
	word[2] = 'V';
	word[3] = 'E';
	word[4] = '\0';

	for (int i = 0; i < 4; i++) {
		printf("%c", word[i]);
	}
	printf("\n");
	//�̷��� char�� �����ϸ� �ϳ��� ����ؾ��Ѵ�. %s �ϸ� �����Ⱚ ���´�. 
	//�����Ⱚ �ϱ� ������ �迭�� ũ�⸦ �ϳ� �� ũ�� ��� �������� Null sting �־��ش�. 

	printf("%s", word);

	return 0;
}