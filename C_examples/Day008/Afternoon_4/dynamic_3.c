/*
	�����Ҵ��� Ȱ���� ���ڿ�ó��
		printf("���ڿ� = ");
		scanf("%s", cp+i);
		-> �̷��� ������ �൵ ���� �ȵȴ�. 

		char str[80];
		printf("���ڿ� = ");
     	scanf("%s", str);
    	strcpy(*(cp+i), str);
		-> �̷��� ���� str�� ���� �־��൵ ������ �ȵȴ� 

		=> ���:
		�����Ҵ�


*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)

//������ ���ڿ��� �Է¹޾� ������ �� ����ϴ� ���α׷� �ۼ�
//�Ʒ� ���α׷��� �� ���ư���. �׷��� �����Ҵ� �ؾ���
//int main() {
//
//	char* cp[3];
//	char str[80];
//
//	for (int i = 0; i < 3; i++) {
//		printf("���ڿ� = ");
//		scanf("%s", str);
//		strcpy(*(cp+i), str); 
//	}
//
//	for (int i = 0; i < 3; i++) {
//		printf("%s", *(cp + i));
//	}
//	return 0;
//}


int main() {

	char* cp[3]; //�̰� 80����Ʈ 3���� �ƴϴ�. �׷��� �������� �Ҵ��ض�
	char str[80];

	for (int i = 0; i < 3; i++) {
		printf("���ڿ� = ");
		scanf("%s", str);
		//�����Ҵ�
		cp[i] = (char*)malloc(strlen(str) + 1);  //size �� �����ϱ� �����Ҵ� �ϰ� �־���� �Ѵ�. 
		strcpy(cp[i], str);
	}

	for (int i = 0; i < 3; i++) {
		printf("%s\n", *(cp + i));
	}
	return 0;
}

/*
	str �� 3���� ������ �־�� �Ѵ�. ���� cp[i] = str �ϰ� ������.. 
*/