#include<stdio.h>
#pragma warning(disable:4996)

void mainMenu() {
    printf("\n\n ==============Main Menu ==============\n");
    printf("1. Coffee(300��)\n");
    printf("2. Black (500��)\n");
    printf("3. Milk (700��)\n");
    printf("4. Ice (900��)\n");
    printf("5. Exit\n");
    printf("===========================================\n");
}

//����ڰ� ������ �޴��� �ش��ϴ� ���Ḧ �����ϴ� ó�� ����
void process(int menu, int* money) {

    switch (menu) {
    case 1: //coffee
    {
        if(product(money, 300) == 0) return; //�׳� money �� ���°�??
        
        printf("Coffee�� ���Խ��ϴ�.\n");
        printf("������ �ܾ��� %d�� �Դϴ�. \n", *money);
        break;
    }
    case 2: //black
    {
        if (product(money, 500) == 0) return;
        printf("Black�� ���Խ��ϴ�.\n");
        printf("������ �ܾ��� %d�� �Դϴ�. \n", *money);
        break;
    }
    case 3: //milk
    {
        if (product(money, 700) == 0) return;
        printf("Milk�� ���Խ��ϴ�.\n");
        printf("������ �ܾ��� %d�� �Դϴ�. \n", *money);
        break;
    }
    case 4://ice cofee 
    {
        if (product(money, 900) == 0) return;
        printf("ICE�� ���Խ��ϴ�.\n");
        printf("������ �ܾ��� %d�� �Դϴ�. \n", *money);
        break;
    }

    }


}

int product(int* money, int price) {
    if (*money < price) {
        printf("�ܾ��� �����մϴ�.\n");
        return 0; // ���� ȣ�� �� ������ ���ư���
    }
    *money -= price;
    return 1;

}

int main() {
    int menu; //���ϴ� �޴��� ����
    int money =0;
    char ch = 'Y';

    do {
        printf("���Ա��� ���� �����ϼ���\n");
        printf("money =");
        scanf("%d", &money);
    } while (money < 300);

    while (ch == 'Y' || ch =='y') {

        mainMenu();
        printf("menu =");
        scanf("%d", &menu);

        //����ڰ� ������ �޴��� ���� ���� ����
        process(menu, &money); //call by reference ������ ���� ȣ��

        if (money < 300) {
            printf("�ȳ��� ������\n");
            return 0; // ����
        }
        else {
            getchar();
            printf("��� (Y/N) = ");
            scanf("%c", &ch);
        }

    }

    return 0;

}