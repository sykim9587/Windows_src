/*
	낭비되는 기억공간이 전체 기억공간의 몇 퍼센트를 차지하는지 계산하여 출력하는 프로그램
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
	printf("%.2lf 퍼센트가 낭비된다. \n", per);
	return 0;
}