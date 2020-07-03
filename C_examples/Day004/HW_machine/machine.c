/*
    자동판매기 프로그램
    주어진 입출력 형식에 맞는 프로그램을 구현하시오.

    <입력 및 출력형식>
    투입구에 돈을 입력하세요.
    money = 0
    money = -1000
    money = 1000

    ===========================================================
    1.coffee(300)  2.black(400)  3. milk(500)   4. ice(700)
    ===========================================================
    menu = 1

    coffee가 나왔습니다.
    현재 고객님 잔액은 700원입니다.

    구매계속(y/n) = y
    ===========================================================
    1.coffee(300)  2.black(400)  3. milk(500)   4. ice(700)
    ===========================================================
    menu = 4

    ice coffee가 나왔습니다.
    현재 고객님 잔액은 0원입니다.

    안녕히가셰요.
*/

#include <stdio.h>
#pragma warning(disable:4996)

void printMenu(int* menu);
void insert(int* money); //돈 입력
void buy(int* menu, int* money, int price); //돈계산과 나온 메뉴 출력 + 잔액 출력
void cont(char* yORn); //continue buying

int main() {
    int menu, money;
    char yORn = 'y';
    int price[4] = { 300, 400, 500, 700 };
    //돈 입력
    insert(&money);
    while (1) {
        //메뉴 출력 - >선택
        printMenu(&menu);
        //돈계산->나온 메뉴 출력 -> 잔액 출력
        buy(&menu, &money, price);
        //continue 구매 물어보기 - 아니면 종료
        if (money > 300){ //잔액 없으면 물어볼 필요가 없으니까.
            cont(&yORn);
        }
        if (yORn == 'n' ||yORn =='N'|| money <300) break;
     }
    //종료 메세지
    printf("안녕히가세요.\n");
    return 0;
}


void insert(int* money) {//돈 입력 
    do {
        printf("투입구에 돈을 입력하세요.\n");
        scanf("%d", money);
        printf("money = %d원\n", *money);
    } while (*money<300);
}

void printMenu(int* menu) {
    printf("==============================================================\n");
    printf("1.coffee(300)  2.black(400)  3. milk(500)   4. ice(700)\n");
    printf("==============================================================\n");
    do {
        printf("menu = ");
        scanf("%d", menu);
    } while (*menu != 1 && *menu != 2 && *menu != 3 && *menu != 4 && *menu != 5); //다른 값 입력하면 다시 입력
}

void buy(int* menu, int* money, int* price) {//돈계산과 나온 메뉴 출력 + 잔액 출력 //배열 포인터??
 
    if (*money < price[*menu - 1]) { //고른 메뉴보다 돈이 적으면
        do {
            printf("잔액이 부족합니다. 다시 입력해주세요.\n");
            printMenu(menu);
        } while (*money < price[*menu - 1]);
    }
    *money -= price[*menu - 1];
    switch (*menu) {
    case 1: {
        printf("coffee 나왔습니다.\n");
        break;
    }
    case 2: {
        printf("black 나왔습니다.\n");
        break;
    }
    case 3: {
        printf("milk 나왔습니다.\n");
        break;
    }
    case 4: {
        printf("ice 나왔습니다.\n");
        break;
    }
    }
    printf("현재 남은 잔액은 %d 입니다.\n", *money);
} 


void cont(char* yORn) {//continue buying
    getchar();
    printf("구매계속(y / n) = ");
    scanf("%c", yORn);
}