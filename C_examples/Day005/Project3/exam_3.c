/*
	�迭�� �̿��� ���ڿ� ����
*/
#include <stdio.h>

int main() {
	char str[] = {'G', 'o' , 'o', 'd'}; // str[4]
	char str2[] = "Good"; // [5]

	printf("str�� ũ�� %d\n", sizeof(str));
	printf("str[0]�� ũ�� %d\n", sizeof(str[0]));
	return 0;
}
