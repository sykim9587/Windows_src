#include <stdio.h>
#pragma warning (disable:4996)
#define ROOM 5

int main() {
	char names[ROOM] = { 0 };
	int menu, index;
	char name;

	while (1) { //무한루프
		//메뉴출력
		printf("\n\t====숙박관리 프로그램====\n");
		printf("1. 투숙 2. 퇴실 3. 객실현황 4.종료\n");
		printf("-------------------------------------------------\n");
		printf("menu = ");
		scanf("%d", &menu);

		switch (menu) {
			case 1: //투숙
			{
				do {
					printf("투숙할 방번호 = ");
					scanf("%d", &index);
				} while (index < 0 || index >= ROOM || names[index] != 0);
				getchar();
				printf("투숙객 이름 = ");
				scanf("%c", &names[index]);
				break;
			}
			case 2: //퇴실
			{
				do {
					printf("퇴실할 방번호 = ");
					scanf("%d", &index);
				} while (index < 0 || index >= ROOM || names[index] == 0);
				getchar();
				names[index] = 0;
				break;
			}
			case 3: //객실 현황
			{
				for (int i = 0; i < ROOM; i++) {
					printf("%d번방 투숙객 %c\n", i, names[i]);
				}
				break;
			}
			case 4: //작업종료
			{
				printf("프로그램 종료합니다\n");
				return 0;
			}
			default:
				printf("메뉴의 선택이 올바르지 않습니다.\n");

		}
	}

	return 0;
}
