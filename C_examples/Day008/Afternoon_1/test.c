#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

int main() {
	char str[80];

	printf("$ ");
	scanf("%s", str);

	printf("%s : %d\n", str, strlen(str));
	return 0;
}