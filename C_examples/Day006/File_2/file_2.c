/*
	���Ϸκ��� �����͸� �о���� �۾�
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	FILE* fp; //file ��ü ����
	int ch;

	fp = fopen("c:\\Sample\\a.txt", "wt"); //fp�� �ּҸ� ������ �ȴ�

	/* 
	 ���ϰ��߸��(mode): r, w, a(���������ε� �ڿ� ���ٿ���)
	 ����: rt, rd, wt,wd
	 
	 ���� �Ⱦ���..
	 r+:�а� ���� 
	 w+: �а� ����
	 a+: �а� �����̱�
	
	������ file ����� ���� �� ����. ������ �����ͺ��̽� �̿�
	*/

	if (fp == NULL) {
		printf("a.txt ���� ���� ����!!\n");
		return 0;
	}

	//file �۾�
	for (int i = 0; i < 3; i++) {
		ch = fgetc(fp); //return ���� int �� ���� ������ -1 return �Ѵ�.
		printf("%c\n", ch);
	}

	//file �ݱ�
	fclose(fp);
	return 0;
}