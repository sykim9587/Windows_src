#include <stdio.h>

int main() {
	//char str[] = "APPLE"; //str �� A�� ����Ǿ��ִ� ���� �ּ�
	//char* p;
	//p = str; // p=&str[0]

	printf("apple ���ڿ��� ����� ���� �ּ� %d\n", "apple"); //�̷���� ���ڿ� ��ü�� �̸��̴�. 
	printf("apple ���ڿ����� a�� ���� ���� = %c\n", *"apple");
	printf("apple ���ڿ����� �ι�° ��ġ�� p�� �ּ� = %d\n", "apple" + 1);
	printf("apple ���ڿ����� �ι�° ��ġ�� p �� ���� = %c\n", *("apple" + 1));
	return 0;

}