// �پ��� ������ ��������

#include <stdio.h>

int main() {
	int cnt;

	for (cnt = 0; cnt < 3; cnt++) { // �ȿ� �����ϰ� cnt ++ ���������� �ϰ� ���� ���� ����. 
		int num = 0; //�������� 
		num++;
		printf("%d��° �ݺ�, �������� num = %d\n", cnt, num);
	}

	if (cnt == 3) {
		int num = 7;
		num++;
		printf("if�� ���� �����ϴ� �������� num = %d\n", num);
	}
	return 0;
}