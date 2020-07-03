/*
    �ڵ��Ǹű� ���α׷�
    �־��� ����� ���Ŀ� �´� ���α׷��� �����Ͻÿ�.

    <�Է� �� �������>
    ���Ա��� ���� �Է��ϼ���.
    money = 0
    money = -1000
    money = 1000

    ===========================================================
    1.coffee(300)  2.black(400)  3. milk(500)   4. ice(700)
    ===========================================================
    menu = 1

    coffee�� ���Խ��ϴ�.
    ���� ���� �ܾ��� 700���Դϴ�.

    ���Ű��(y/n) = y
    ===========================================================
    1.coffee(300)  2.black(400)  3. milk(500)   4. ice(700)
    ===========================================================
    menu = 4

    ice coffee�� ���Խ��ϴ�.
    ���� ���� �ܾ��� 0���Դϴ�.

    �ȳ������ο�.
*/

#include <stdio.h>
#pragma warning(disable:4996)

void printMenu(int* menu);
void insert(int* money); //�� �Է�
void buy(int* menu, int* money, int price); //������ ���� �޴� ��� + �ܾ� ���
void cont(char* yORn); //continue buying

int main() {
    int menu, money;
    char yORn = 'y';
    int price[4] = { 300, 400, 500, 700 };
    //�� �Է�
    insert(&money);
    while (1) {
        //�޴� ��� - >����
        printMenu(&menu);
        //�����->���� �޴� ��� -> �ܾ� ���
        buy(&menu, &money, price);
        //continue ���� ����� - �ƴϸ� ����
        if (money > 300){ //�ܾ� ������ ��� �ʿ䰡 �����ϱ�.
            cont(&yORn);
        }
        if (yORn == 'n' ||yORn =='N'|| money <300) break;
     }
    //���� �޼���
    printf("�ȳ���������.\n");
    return 0;
}


void insert(int* money) {//�� �Է� 
    do {
        printf("���Ա��� ���� �Է��ϼ���.\n");
        scanf("%d", money);
        printf("money = %d��\n", *money);
    } while (*money<300);
}

void printMenu(int* menu) {
    printf("==============================================================\n");
    printf("1.coffee(300)  2.black(400)  3. milk(500)   4. ice(700)\n");
    printf("==============================================================\n");
    do {
        printf("menu = ");
        scanf("%d", menu);
    } while (*menu != 1 && *menu != 2 && *menu != 3 && *menu != 4 && *menu != 5); //�ٸ� �� �Է��ϸ� �ٽ� �Է�
}

void buy(int* menu, int* money, int* price) {//������ ���� �޴� ��� + �ܾ� ��� //�迭 ������??
 
    if (*money < price[*menu - 1]) { //�� �޴����� ���� ������
        do {
            printf("�ܾ��� �����մϴ�. �ٽ� �Է����ּ���.\n");
            printMenu(menu);
        } while (*money < price[*menu - 1]);
    }
    *money -= price[*menu - 1];
    switch (*menu) {
    case 1: {
        printf("coffee ���Խ��ϴ�.\n");
        break;
    }
    case 2: {
        printf("black ���Խ��ϴ�.\n");
        break;
    }
    case 3: {
        printf("milk ���Խ��ϴ�.\n");
        break;
    }
    case 4: {
        printf("ice ���Խ��ϴ�.\n");
        break;
    }
    }
    printf("���� ���� �ܾ��� %d �Դϴ�.\n", *money);
} 


void cont(char* yORn) {//continue buying
    getchar();
    printf("���Ű��(y / n) = ");
    scanf("%c", yORn);
}