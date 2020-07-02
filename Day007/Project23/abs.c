/* 
	다양한 형태의 함수
*/

//다시 해보기 - 오류있음 문자

#include <stdio.h>
#pragma warning(disable:4996)

int getPositive() {
	int pos;

	printf("정수 = ");
	scanf("%d", &pos);

	if (pos < 0)
		return pos * -1;
	else
		return pos;

}

void charPrint(char ch, int cnt) {
	for (int i = 0; i < cnt; i++) {
		printf("%c", ch);
	}
}

void title() {
	printf("\n원하는 작업을 선택하세요. \n");
	printf("1.절대값 2.문자출력 3.작업종료\n");
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

		switch (menu) { //원래 이렇게 길면 switch case 쓰지 않는다 if 가 더 낫다. 
		case 1: 	
			printf("절댓값: %d\n", getPositive()); // 이런식으로 하면 변수 만들필요 없다. 
			break;
		case 2: 
		{
			printf("문자 = ");
			scanf("%c", &ch);
			getchar();
			printf("횟수 = ");
			scanf("%d", &count);
			charPrint(ch, count);
			getchar();
			break;
		}
		case 3: {
			return 0;
		}
		default:
			printf("메뉴선택 틀림\n");
		}
	} while (menu != 3);

	return 0;
}