#include<stdio.h>
#pragma warning(disable:4996)

void mainMenu() {
    printf("\n\n ==============Main Menu ==============\n");
    printf("1. Coffee(300원)\n");
    printf("2. Black (500원)\n");
    printf("3. Milk (700원)\n");
    printf("4. Ice (900원)\n");
    printf("5. Exit\n");
    printf("===========================================\n");
}

//사용자가 선택한 메뉴에 해당하는 음료를 제공하는 처리 로직
void process(int menu, int* money) {

    switch (menu) {
    case 1: //coffee
    {
        if(product(money, 300) == 0) return; //그냥 money 만 쓰는거??
        
        printf("Coffee가 나왔습니다.\n");
        printf("고객님의 잔액은 %d원 입니다. \n", *money);
        break;
    }
    case 2: //black
    {
        if (product(money, 500) == 0) return;
        printf("Black가 나왔습니다.\n");
        printf("고객님의 잔액은 %d원 입니다. \n", *money);
        break;
    }
    case 3: //milk
    {
        if (product(money, 700) == 0) return;
        printf("Milk가 나왔습니다.\n");
        printf("고객님의 잔액은 %d원 입니다. \n", *money);
        break;
    }
    case 4://ice cofee 
    {
        if (product(money, 900) == 0) return;
        printf("ICE가 나왔습니다.\n");
        printf("고객님의 잔액은 %d원 입니다. \n", *money);
        break;
    }

    }


}

int product(int* money, int price) {
    if (*money < price) {
        printf("잔액이 부족합니다.\n");
        return 0; // 원래 호출 한 곳으로 돌아가기
    }
    *money -= price;
    return 1;

}

int main() {
    int menu; //원하는 메뉴를 선택
    int money =0;
    char ch = 'Y';

    do {
        printf("투입구에 돈을 투입하세요\n");
        printf("money =");
        scanf("%d", &money);
    } while (money < 300);

    while (ch == 'Y' || ch =='y') {

        mainMenu();
        printf("menu =");
        scanf("%d", &menu);

        //사용자가 선택한 메뉴에 대한 서비스 진행
        process(menu, &money); //call by reference 참조에 의한 호출

        if (money < 300) {
            printf("안녕히 가세요\n");
            return 0; // 종료
        }
        else {
            getchar();
            printf("계속 (Y/N) = ");
            scanf("%c", &ch);
        }

    }

    return 0;

}