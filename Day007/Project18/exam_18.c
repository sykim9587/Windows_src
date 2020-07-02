#include <stdio.h>

int main() {
	
	for (int i = 0; i < 5; i++)printf("#");
	printf("\n");
	printf("\n");
	for (int k = 0; k < 5; k++) {
		for (int i = 0; i < 5; i++)printf("#");
		printf("\n");
	}
	printf("\n");
	printf("\n");
	for (int k = 1; k <= 5; k++) {
		for (int i = 0; i < k; i++)printf("#");
		printf("\n");
	}
	//¹Ý´ë·Î
	printf("\n\n");
	for (int k = 0; k < 5; k++) {
		for (int i = 5; i > k; i--)printf("#");
		printf("\n");
	}



	return 0;
}