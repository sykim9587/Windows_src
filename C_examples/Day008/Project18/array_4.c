/*
	����Ǵ� �������� ��ü �������� �� �ۼ�Ʈ�� �����ϴ��� ����Ͽ� ����ϴ� ���α׷�
*/

#include <stdio.h>
#include <string.h> //strlen
#pragma warning(disable:4996)

int main() {
	char animal[][10] = {"money", "elephant", "dog", "sheep", "pig", "lion", "tiger", "puma", "turtle", "fox"};
	int tot=0;
	int size;
	double per;
	size = sizeof(animal) / sizeof(animal[0]);

	//printf("%d", strlen(animal[0]));
	for (int i = 0; i < size; i++) {
		tot += (size-1 - strlen(animal[i]));
	}
	per = (double)tot / sizeof(animal) *100.0;
	printf("%.2lf �ۼ�Ʈ�� ����ȴ�. \n", per);
	return 0;
}