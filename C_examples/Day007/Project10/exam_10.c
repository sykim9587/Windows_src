/*
	�ݺ��� : �����ϰų� ������ ���� ���� ���� �ݺ� ó��
	1. for :Ƚ�� ����
	2. while: ����� ���� ����
		while(1) �� ���ѷ���

	3. do while: ���ǽ��� �����̶� �� �ѹ��� �����Ѵ�. 
		
	�칰�� ���̴� 3m �̰� �����̴� �Ϸ翡 55cm �ö�´�. ���� �����̰� �̲������� �ʴ´ٸ� ��ĥ �ȿ� �칰 �����?

	-> ����: �칰�� ���̸� �Է¤�������
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int move=0;
	int day = 0;
	int depth;

	do {
		printf("�칰�� ���� (m) : ");
		scanf("%d", &depth);
	} while (depth <= 0);

	while (move < depth*100) {
		move += 55;
		day++;
	}
	printf("��ĥ = %d", day);

	return 0;
}

/* �̷��Ե� ����

int height = 0;
int days = 0;

do{
	height +=55;
	days += 1;

}while(height<300);

printf("height: %d", days);
return0;
*/