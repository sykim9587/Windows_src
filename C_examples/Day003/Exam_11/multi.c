/* 
	��Ƽ���α׷��� �����Ͻÿ�
	<�Է� �� �������>
	===== �޴� =====
	1. �ִ밪
	2. ������
	3. ������
	4. ����
	5. ��	   �� 
	==============
	�޴� = 


	<ó������>
	1. ���α׷� ���� �� ȭ�� ���̵���
	2. �޴� ��ȣ �Է��ؼ� ����
	3. �ִ밪: �� ���� �޾� ū�� ���
	4. ������: �� ������ �ڿ��� ��
	5. ������: �� ���� ���� �޾� ū ������� ����
	6. ����: �� ������ �ϳ��� ������ �Է� -> ��� ����
	7. ����ڰ� ���� ���ý� ���α׷� ����

	������:  1,5 �Է½� 1+2+3+4+5
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int menu;
	int su1, su2, res, tmp;

	while (1) {
		printf("===== �޴� =====\n1. �ִ밪\n2. ������\n3. ������\n4. ����\n5. ��	   ��\n================\n�޴� = ");
		scanf("%d", &menu);
		res = 0;

		if (menu == 1) { //�ִ밪
			printf("��1 = ");
			scanf("%d", &su1);
			printf("��2 = ");
			scanf("%d", &su2);

			if (su1 >= su2) {
				res = su1;
			}
			else {
				res = su2;
			}
			printf("�ִ밪 = %d\n\n", res);
		}
		else if (menu == 2) { //������
			printf("��1 = ");
			scanf("%d", &su1);
			printf("��2 = ");
			scanf("%d", &su2);
			
			if (su1 >= su2) { //su1 �� �۾ƾ� �ϹǷ�
				tmp= su1;
				su1 = su2;
				su2 = tmp;
			}

			for (int i = su1; i <= su2; i++) {
				res += i;
			}
			printf("������: %d\n\n", res);
		}
		else if (menu == 3) {// ������ -> HW
			int su1, su2, su3, max, min, mid;
			printf("��1 = ");
			scanf("%d", &su1);
			printf("��2 = ");
			scanf("%d", &su2);
			printf("��3 = ");
			scanf("%d", &su3);

			if (su1 > su2 && su1 > su3) {
				max = su1;
				if (su2 > su3) {
					mid = su2;
					min = su3;
				}
				else {
					mid = su3;
					min = su2;
				}
			}
			else if (su2 > su1 && su2 > su3) {
				max = su2;
				if (su1 > su3) {
					mid = su1;
					min = su3;
				}
				else {
					mid = su3;
					min = su1;
				}
			}
			else {
				max = su3;
				if (su1 > su2) {
					mid = su1;
					min = su2;
				}
				else {
					mid = su2;
					min = su1;
				}
			}

			printf("max = %d, mid = %d, min = %d\n\n", max, mid, min);


		}
		else if (menu == 4) { //���� -> HW
			int su1, su2, res;
			char op;

			printf("��1 = ");
			scanf("%d", &su1);
			getchar();
			do {
				printf("������ =");
				scanf("%c", &op);
			} while (op != '+' && op != '-' && op != '*' && op != '/' && op != '%');

			do {
				printf("��2 = ");
				scanf("%d", &su2);
			} while (op == '/' && su2 == 0);

			switch (op) { // switch �� char ����
			case '+': res = su1 + su2; break;
			case '-': res = su1 - su2; break;
			case '*': res = su1 * su2; break;
			case '/': res = su1 / su2;
			}

			printf("%d %c %d = %d\n\n", su1, op, su2, res);
	
			



		}
		else if (menu == 5) {//����
			printf(" finished \n");
			return 0;
		}
		else { // Ʋ�� �� �Է�
			printf("type again\n");
		}
	}

	return 0;
}