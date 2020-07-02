#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char word[80];
	int alpha[26] = { 0 };
	printf("문자열(대문자만) = ");
	scanf("%s", word);

	int i = 0;
	while (word[i] != '\0') {

		alpha[word[i] - 'A']++; //이렇게 하면 더 간단하다. 
		i++;
	}

	for (int i = 0; i < 26; i++) {
		printf("%c : %d개\n", 'A' + i, alpha[i]);
	}
	return 0;
}