#include <stdio.h>
#pragma warning (disable:4996)
#define ROOM 5

int main() {
	char names[ROOM] = { 0 };
	int menu, index;
	char name;

	while (1) { //���ѷ���
		//�޴����
		printf("\n\t====���ڰ��� ���α׷�====\n");
		printf("1. ���� 2. ��� 3. ������Ȳ 4.����\n");
		printf("-------------------------------------------------\n");
		printf("menu = ");
		scanf("%d", &menu);

		switch (menu) {
			case 1: //����
			{
				do {
					printf("������ ���ȣ = ");
					scanf("%d", &index);
				} while (index < 0 || index >= ROOM || names[index] != 0);
				getchar();
				printf("������ �̸� = ");
				scanf("%c", &names[index]);
				break;
			}
			case 2: //���
			{
				do {
					printf("����� ���ȣ = ");
					scanf("%d", &index);
				} while (index < 0 || index >= ROOM || names[index] == 0);
				getchar();
				names[index] = 0;
				break;
			}
			case 3: //���� ��Ȳ
			{
				for (int i = 0; i < ROOM; i++) {
					printf("%d���� ������ %c\n", i, names[i]);
				}
				break;
			}
			case 4: //�۾�����
			{
				printf("���α׷� �����մϴ�\n");
				return 0;
			}
			default:
				printf("�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n");

		}
	}

	return 0;
}
