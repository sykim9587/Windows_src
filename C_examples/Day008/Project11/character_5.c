/*
	strcpy(���ڿ�1, ���ڿ�2) 2�� 1�� ������

	strcat : �� ���� ���ڿ��� ���̴� �Լ� string concatenation 
*/

#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main() {
	char str1[20] = "apple";
	char str2[20] = "apple";

	char tmp[20]; //���ڿ��� ���Կ����� �� ����.
	int len;

	strcpy(tmp, str1); 
	strcpy(str1, str2);
	strcpy(str2, tmp); 
	
	len = strlen(str2);


	printf("str1 = %s, str2 = %s\n", str1, str2);
	printf("str2�� ���ڼ� = %d\n", len);

	if (strcmp(str1, str2) == 0)
		printf("str1�� str2�� ���� ���ڿ��Դϴ�. \n");
	else
		printf("���� �ٸ� ���ڿ�\n");
	return 0;
}