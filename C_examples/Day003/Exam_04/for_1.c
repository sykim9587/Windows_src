/* 
	�ݺ��� : �����ϰų� ������ ������ ������ �ִ� ������ �ݺ��� �� ����ϴ� �� ( ������ ��Ģ�� ������ �ִ�)
	for ��: Ƚ�� ��� ���
		1) ���� 
			for(�ʱ�;����;����){
				�ݺ��ϴ� ����
			}
	while ��: ����ڿ� ���� �ݺ��� ������ �� �ַ� ���ȴ�
		1) ����
			while(����){
				�ݺ�;
			}
	do~while��: ������ �����̶� �� �ѹ��� ����ȴ�. 
		1) ����
			do{

			}while(����); 

*/

#include <stdio.h>

int main() {
	int i;
	/*printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);
	printf("%d\n", 1);*/

	//for (int i = 1; i <= 10; i++) { // for(;i<=10;i++) �̷��� ������ ���������� ���� ���𹮿��� int i=1 �̷��� �صξ�� �Ѵ�. 
	//	printf("%d\n", 1);
	//}


	i = 1;
	/*while (i <= 10) {
		printf("%d\n", 1);
		i++;
	}*/

	do {
		printf("%d\n", 1);
		i++;
	} while (i <= 10);

	return 0;
}