#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

/*
	����� �Է¹޾� �۾��� �����ϴٰ� �Է°��� 0�̳� �����̸� ����
*/

int main() {
	int* ip; //�������� �Ҵ���� ������ ������ �����ͺ���
	int count = 0; //�Է¹��� ����� ������ ������ ����
	int num; 
	int size = 5; //�ѹ��� �Ҵ���� ���������� ũ��
	//int i = 0;
	//�����Ҵ�
	ip = (int*)calloc(size, sizeof(int)); //5���� ���� �Ҵ��

	//�ݺ�ó���� ���� ���� ����
	while (1) { //���ѷ���
		printf("��� =");
		scanf("%d", &num);
		if (num <= 0) break;

		//�Ҵ� �� ������ ũ�⸦ ������� Ȯ�� 
		if (count < size) {
			ip[count++] = num;
		}
		else { //�Ҵ�� ������ ũ�� �����
			size += 5;
			ip = (int*)realloc(ip, size*sizeof(int)); //�ٽ� ������ ����
			ip[count++] = num;
		}
	}

	for (int i = 0; i < count; i++) {
		printf("%d\n", ip[i]);
	}

	free(ip); //�����Ҵ� ����
	return 0;
}