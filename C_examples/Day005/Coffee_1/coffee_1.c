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

    1. ���ԵǴ� ���� 0���� Ŀ���Ѵ�. �ƴϸ� �ٽ� �Է�
    2. �޴� ��µǸ� ���ϴ� �޴��� �����ϵ��� ����, �������� ������ "������ �ùٸ��� �ʽ��ϴ�"��� �޼���
    3. �ݾ��� ������ ��� '�ݾ��� �����մϴ� ��� �޼��� ���, �ƴϸ� �ش� �ݾ� ���� �� �ܾ��� �˷��ش�
    4. ���Ű� ���������� ó���� �� ��� ���Ÿ� ����ϴ��� ���� Ȯ�� �� ���α׷� �����Ѵ�. 
        xxx�� �غ�Ǿ����ϴ�.
        �ܾ��� xx�Դϴ�. 
        ��� �����Ͻðڽ��ϱ�?
*/

#include<stdio.h>
#pragma warning(disable:4996);
void mainMenu() {

    printf("\n\n ==============Main Menu ==============\n");
    printf("1. Coffee(300��)\n");
    printf("2. Black (500��)\n");
    printf("3. Milk (700��)\n");
    printf("4. Ice (900��)\n");
    printf("===========================================\n");
}
int main() {
    int money; //���ԵǴ� �ݾ�
    int menu; //���õ� �޴�
    char check ; //���� ����

    //ó����
    while (1) { //���� ����
        
        do {
            printf("���Ա��� ���� �־��ּ���,\n");
            printf("money = ");
            scanf("%d", &money);
        } while ( money < 0 || money < 300 );

        mainMenu();
        
        printf("menu = ");
        scanf("%d", &menu);


        if (menu == 1) {
            money -= 300; // Ŀ�ǰ��ݸ�ŭ ����
            printf("Coffee�� ���Խ��ϴ�. \n");
            printf("���� �ܾ��� %d�� �Դϴ�. ", money);

            if (money < 300) {
                printf("�ȳ���������~~\n");
                return 0;
            }
            else { //�ܾ��� �ֹ��� �� �� �ִ� �ݾ��� ���
                getchar();
                printf("��� (Y/N) = ");
                scanf("%c", &check);
                if (check == 'N' || check == 'n') break;

            }
        }
        else if (menu == 2) {
            if (money < 500) {
                printf("�ܾ��� ����\n");
                break;
            }
            else {
                money -= 500; // Ŀ�ǰ��ݸ�ŭ ����
                printf("BLACK�� ���Խ��ϴ�. \n");
                printf("���� �ܾ��� %d�� �Դϴ�. ", money);

                if (money < 300) {
                    printf("�ȳ���������~~\n");
                    return 0;
                }
                else { //�ܾ��� �ֹ��� �� �� �ִ� �ݾ��� ���
                    getchar();
                    printf("��� (Y/N) = ");
                    scanf("%c", &check);
                    if (check == 'N' || check == 'n') break;

                }


            }

        }
        else if (menu == 3) {
            if (money < 700) {
                printf("�ܾ��� ����\n");
                break;
            }
            else {
                money -= 700; // Ŀ�ǰ��ݸ�ŭ ����
                printf("Milk�� ���Խ��ϴ�. \n");
                printf("���� �ܾ��� %d�� �Դϴ�. ", money);

                if (money < 300) {
                    printf("�ȳ���������~~\n");
                    return 0;
                }
                else { //�ܾ��� �ֹ��� �� �� �ִ� �ݾ��� ���
                    getchar();
                    printf("��� (Y/N) = ");
                    scanf("%c", &check);
                    if (check == 'N' || check == 'n') break;

                }


            }


        }
        else if (menu == 4) {
            if (money < 900) {
                printf("�ܾ��� ����\n");
                break;
            }
            else {
                money -= 900; // Ŀ�ǰ��ݸ�ŭ ����
                printf("ICE�� ���Խ��ϴ�. \n");
                printf("���� �ܾ��� %d�� �Դϴ�. ", money);

                if (money < 300) {
                    printf("�ȳ���������~~\n");
                    return 0;
                }
                else { //�ܾ��� �ֹ��� �� �� �ִ� �ݾ��� ���
                    getchar();
                    printf("��� (Y/N) = ");
                    scanf("%c", &check);
                    if (check == 'N' || check == 'n') break;

                }


            }


        }
        else {
            printf("�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n");
        }

    }

    
    return 0;
}