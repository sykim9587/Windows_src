/*
	ȭ���� ���� �����͸� �Է¹޾� ���Ͽ� ����ϴ� �۾�
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char name[7]; 
	int grade;
	char major[7];

	//step1. ��ü����
	FILE* fp;

	fp = fopen("c:\\Sample\\studnet.txt","wt");

	for (int i = 0; i < 3; i++) {
		printf("�̸� �г� �а� ������ �Է� : ");
		scanf("%s %d %s", name, &grade, major);
		getchar();
		fprintf(fp, "%s %d %s\n", name, grade, major);

	}

	fclose(fp);




	return 0;
}

