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

    1. 투입되는 돈은 0보다 커야한다. 아니면 다시 입력
    2. 메뉴 출력되면 원하는 메뉴를 선택하도록 구현, 존재하지 않으면 "선택이 올바르지 않습니다"라고 메세지
    3. 금액이 부족할 경우 '금액이 부족합니다 라는 메세지 출력, 아니면 해당 금액 차감 후 잔액을 알려준다
    4. 구매가 정상적으로 처리된 후 계속 구매를 희망하는지 여부 확인 후 프로그램 동작한다. 
        xxx가 준비되었습니다.
        잔액은 xx입니다. 
        계속 구매하시겠습니까?
*/

#include<stdio.h>
#pragma warning(disable:4996);
void mainMenu() {

    printf("\n\n ==============Main Menu ==============\n");
    printf("1. Coffee(300원)\n");
    printf("2. Black (500원)\n");
    printf("3. Milk (700원)\n");
    printf("4. Ice (900원)\n");
    printf("===========================================\n");
}
int main() {
    int money; //투입되는 금액
    int menu; //선택된 메뉴
    char check ; //지속 여부

    //처리문
    while (1) { //무한 루프
        
        do {
            printf("투입구에 돈을 넣어주세요,\n");
            printf("money = ");
            scanf("%d", &money);
        } while ( money < 0 || money < 300 );

        mainMenu();
        
        printf("menu = ");
        scanf("%d", &menu);


        if (menu == 1) {
            money -= 300; // 커피가격만큼 차감
            printf("Coffee가 나왔습니다. \n");
            printf("고객님 잔액은 %d원 입니다. ", money);

            if (money < 300) {
                printf("안녕히가세요~~\n");
                return 0;
            }
            else { //잔액이 주문을 할 수 있는 금액일 경우
                getchar();
                printf("계속 (Y/N) = ");
                scanf("%c", &check);
                if (check == 'N' || check == 'n') break;

            }
        }
        else if (menu == 2) {
            if (money < 500) {
                printf("잔액이 부족\n");
                break;
            }
            else {
                money -= 500; // 커피가격만큼 차감
                printf("BLACK가 나왔습니다. \n");
                printf("고객님 잔액은 %d원 입니다. ", money);

                if (money < 300) {
                    printf("안녕히가세요~~\n");
                    return 0;
                }
                else { //잔액이 주문을 할 수 있는 금액일 경우
                    getchar();
                    printf("계속 (Y/N) = ");
                    scanf("%c", &check);
                    if (check == 'N' || check == 'n') break;

                }


            }

        }
        else if (menu == 3) {
            if (money < 700) {
                printf("잔액이 부족\n");
                break;
            }
            else {
                money -= 700; // 커피가격만큼 차감
                printf("Milk가 나왔습니다. \n");
                printf("고객님 잔액은 %d원 입니다. ", money);

                if (money < 300) {
                    printf("안녕히가세요~~\n");
                    return 0;
                }
                else { //잔액이 주문을 할 수 있는 금액일 경우
                    getchar();
                    printf("계속 (Y/N) = ");
                    scanf("%c", &check);
                    if (check == 'N' || check == 'n') break;

                }


            }


        }
        else if (menu == 4) {
            if (money < 900) {
                printf("잔액이 부족\n");
                break;
            }
            else {
                money -= 900; // 커피가격만큼 차감
                printf("ICE가 나왔습니다. \n");
                printf("고객님 잔액은 %d원 입니다. ", money);

                if (money < 300) {
                    printf("안녕히가세요~~\n");
                    return 0;
                }
                else { //잔액이 주문을 할 수 있는 금액일 경우
                    getchar();
                    printf("계속 (Y/N) = ");
                    scanf("%c", &check);
                    if (check == 'N' || check == 'n') break;

                }


            }


        }
        else {
            printf("메뉴의 선택이 올바르지 않습니다.\n");
        }

    }

    
    return 0;
}