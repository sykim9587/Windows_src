/*
	ǥ�� �Է� �Լ�: scanf()
	1. ���� 
		scanf("�Է¼���", &������);
		Ű���带 ���� �Է¼��Ŀ� �´� �����͸� ���� �ش� ������ �ּҸ� (�ش� �ý��ƿ�)���Ͻ����ִ� �Լ�
	2. ����
		- Visual Studio 2013���� ���ĺ��� scanf �Լ� ���Ȱ� ������ ���� ���� MS��� scanf_s()�Լ��� �������.
		- MS VS������. 

		-ù ���: �ش� ������Ʈ���� ������ư Ŭ�� -> �Ӽ� -> /c++ -> ��ó���� -> ��ó�� ���� ���� ���� + ;_CRT_...; ���δ� 
		(���� �޼����� �ߴ� ��)

		-�ι�° ���: ���� �溸 ���� : �ش�������Ʈ �� -> �Ӽ� -> c/c++ -> �Ϲ��ǿ��� SDL �׸��� '�ƴϿ�' ��� ����
		Secruity Development Lifecycle (2019 ver)

		-����°���: ��ũ�λ�� ����
		#pragma warning(disable: 4996)  -> most common method


*/

// �ΰ��� ���ڸ� �Է¹޾� ������ ����� �� �� ����� ����ϴ� ���α׷� 

#include <stdio.h>
#pragma warning(disable: 4996)  //��ũ�� ���

int main() {

	int su1, su2;
	int sum;

	//printf("�� �� �Է�:");
	//scanf("%d %d", &su1, &su2);
	printf("first: ");
	scanf("%d", &su1);	
	printf("second: ");
	scanf("%d", &su2);



	sum = su1 + su2;
	printf("%d + %d = %d\n", su1, su2, sum);
	return 0;
}