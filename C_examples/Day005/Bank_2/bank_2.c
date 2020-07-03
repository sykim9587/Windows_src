/*
5명의 고객을 등록하여 입금 및 출금처리가 가능하도록 프로그램을 구현하시오.
단, 등록할 고객의 정보는 배열에 저장하되, 고객 식별 id는 배열의 index를
이용할 것.

int cust[5];
cust[0], cust[1], cust[2], cust[3], cust[4]
*/

#include<stdio.h>
#pragma warning(disable:4996)

// 매크로상수
#define MAX 5

// 함수 선언부
void menu();        // 메뉴출력  
void make(int balance[], int id);        // 계좌개설
void input(int balance[], int size);       // 입금처리
void output(int balance[], int size);      // 출금처리
void show();        // 모든 고객의 계좌출력

int main() {
    // 선언부
    //int id, balance;
    int check;
    int cust[MAX] = { 0 };

    for (int i = 0; i <= MAX; i++) { // 등록가능한 인원수에 맞춰 반복수행
        // 메뉴출력
        menu();

        // 사용자의 선택에 따른 작업을 위한 로직
        printf("menu = ");
        scanf("%d", &check);

        if (check == 1) {
            make(cust, i);
        }
        else if (check == 2) {
            input(cust, MAX);
            i--;
        }
        else if (check == 3) {
            output(cust, MAX);
            i--;
        }
        else if (check == 4) { // 전체고객의 정보 출력
            printf("전체 고객의 잔액정보 출력\n");
            for (int a = 0; a < i; a++) {
                printf("%d 고객님 잔액 %d 원입니다.\n", a, cust[a]);
            }
            i--;  // 고객 등록을 수행한 것이 아니므로
        }
        else if (check == 5) {
            printf("프로그램을 종료합니다.\n");
            return 0;
        }
        else {
            printf("메뉴의 선택이 올바르지 않습니다.\n");
            i--; // 고객을 등록한 것이 아니므로 
        }
    }

    return 0;
}

// 함수 정의부
void menu() {
    printf("== <Bank Menu> ==\n");
    printf("1. 계좌개설\n");
    printf("2. 입금처리\n");
    printf("3. 출금처리\n");
    printf("4. 전체고객정보\n");
    printf("5. 작업종료\n");
    printf("=================\n");
}

void make(int balance[], int id) { // 계좌개설
    /*
      지역변수는 지역을 벗어나면 의미가 소멸된다.
    */
    printf("== 계좌개설 ==\n");
    printf("계좌번호 = %d\n", id);
    do {
        printf("입금금액 = ");
        scanf("%d", &balance[id]);
    } while (balance[id] < 0);

    printf("계좌개설이 완료되었습니다.\n");
}

void input(int balance[], int size) { // 입금처리
    int sid, money;   // 사용자가 입력할 id와 입금금액

    printf("== 입금처리 ==\n");
    printf("id = ");
    scanf("%d", &sid);

    // 등록한 고객에 한해서만 존재여부를 판단해야 한다.
    for (int j = 0; j < size; j++) {
        if (balance[j] != 0 && sid == j) { // 해당고객을 찾았다면
            printf("입금금액 = ");
            scanf("%d", &money);
            balance[sid] += money;
            printf("입금처리가 완료되었습니다.\n");
            printf("현재 고객님의 잔액은 %d원 입니다.\n", balance[sid]);
            return;
        }
        //else {
            //printf("입력하신 계좌와 일치하는 고객이 없습니다.\n");
        //}
    }

    printf("입력하신 계좌와 일치하는 고객이 없습니다.\n");
}

void output(int balance[], int size) { // 출금처리
    int sid, money;   // 사용자가 입력할 id와 입금금액

    printf("== 출금처리 ==\n");
    printf("id = ");
    scanf("%d", &sid);

    // 등록한 고객에 한해서만 존재여부를 판단해야 한다.
    for (int j = 0; j < size; j++) {
        if (balance[j] != 0 && sid == j) { // 해당고객을 찾았다면
            printf("출금금액 = ");
            scanf("%d", &money);
            if (balance[sid] < money) {
                printf("잔액이 부족합니다.\n");
                printf("현재 고객님의 잔액은 %d원 입니다.\n", balance[sid]);
                return;
            }
            balance[sid] -= money;
            printf("출금처리가 완료되었습니다.\n");
            printf("현재 고객님의 잔액은 %d원 입니다.\n", balance[sid]);
            return;
        }
        //else {
            //printf("입력하신 계좌와 일치하는 고객이 없습니다.\n");
        //}
    }

    printf("입력하신 계좌와 일치하는 고객이 없습니다.\n");
}