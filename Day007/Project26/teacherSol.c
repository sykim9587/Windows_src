#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char word[80];
	int alpha[26] = { 0 };
	printf("���ڿ�(�빮�ڸ�) = ");
	scanf("%s", word);

	int i = 0;
	while (word[i] != '\0') {

		alpha[word[i] - 'A']++; //�̷��� �ϸ� �� �����ϴ�. 
		i++;
	}

	for (int i = 0; i < 26; i++) {
		printf("%c : %d��\n", 'A' + i, alpha[i]);
	}
	return 0;
}