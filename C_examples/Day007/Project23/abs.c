/* 
	�پ��� ������ �Լ�
*/

//�ٽ� �غ��� - �������� ����

#include <stdio.h>
#pragma warning(disable:4996)

int getPositive() {
	int pos;

	printf("���� = ");
	scanf("%d", &pos);

	if (pos < 0)
		return pos * -1;
	else
		return pos;

}

void charPrint(char ch, int cnt) {
	char a = ch;
	
	for (int i = 0; i < cnt; i++) {
		printf("%c", a);
	}
}

void title() {
	printf("\n���ϴ� �۾��� �����ϼ���. \n");
	printf("1.���밪 2.������� 3.�۾�����\n");
	printf("------------------------------\n");
}

int main() {
	int menu;
	char ch;
	int count;

	do {
		title();
		printf("menu = ");
		scanf("%d", &menu);

		switch (menu) { //���� �̷��� ��� switch case ���� �ʴ´� if �� �� ����. 
		case 1: 	
			printf("����: %d\n", getPositive()); // �̷������� �ϸ� ���� �����ʿ� ����. 
			break;
		case 2: 
		{
			getchar();
			printf("���� = ");
			scanf("%c", &ch);
			
			getchar();
			printf("Ƚ�� = ");
			scanf("%d", &count);
			charPrint(ch, count);
			getchar();
			break;
		}
		case 3: {
			return 0;
		}
		default:
			printf("�޴����� Ʋ��\n");
		}
	} while (menu != 3);

	return 0;
}