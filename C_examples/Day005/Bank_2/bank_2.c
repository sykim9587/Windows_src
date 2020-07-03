/*
5���� ���� ����Ͽ� �Ա� �� ���ó���� �����ϵ��� ���α׷��� �����Ͻÿ�.
��, ����� ���� ������ �迭�� �����ϵ�, �� �ĺ� id�� �迭�� index��
�̿��� ��.

int cust[5];
cust[0], cust[1], cust[2], cust[3], cust[4]
*/

#include<stdio.h>
#pragma warning(disable:4996)

// ��ũ�λ��
#define MAX 5

// �Լ� �����
void menu();        // �޴����  
void make(int balance[], int id);        // ���°���
void input(int balance[], int size);       // �Ա�ó��
void output(int balance[], int size);      // ���ó��
void show();        // ��� ���� �������

int main() {
    // �����
    //int id, balance;
    int check;
    int cust[MAX] = { 0 };

    for (int i = 0; i <= MAX; i++) { // ��ϰ����� �ο����� ���� �ݺ�����
        // �޴����
        menu();

        // ������� ���ÿ� ���� �۾��� ���� ����
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
        else if (check == 4) { // ��ü���� ���� ���
            printf("��ü ���� �ܾ����� ���\n");
            for (int a = 0; a < i; a++) {
                printf("%d ���� �ܾ� %d ���Դϴ�.\n", a, cust[a]);
            }
            i--;  // �� ����� ������ ���� �ƴϹǷ�
        }
        else if (check == 5) {
            printf("���α׷��� �����մϴ�.\n");
            return 0;
        }
        else {
            printf("�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n");
            i--; // ���� ����� ���� �ƴϹǷ� 
        }
    }

    return 0;
}

// �Լ� ���Ǻ�
void menu() {
    printf("== <Bank Menu> ==\n");
    printf("1. ���°���\n");
    printf("2. �Ա�ó��\n");
    printf("3. ���ó��\n");
    printf("4. ��ü������\n");
    printf("5. �۾�����\n");
    printf("=================\n");
}

void make(int balance[], int id) { // ���°���
    /*
      ���������� ������ ����� �ǹ̰� �Ҹ�ȴ�.
    */
    printf("== ���°��� ==\n");
    printf("���¹�ȣ = %d\n", id);
    do {
        printf("�Աݱݾ� = ");
        scanf("%d", &balance[id]);
    } while (balance[id] < 0);

    printf("���°����� �Ϸ�Ǿ����ϴ�.\n");
}

void input(int balance[], int size) { // �Ա�ó��
    int sid, money;   // ����ڰ� �Է��� id�� �Աݱݾ�

    printf("== �Ա�ó�� ==\n");
    printf("id = ");
    scanf("%d", &sid);

    // ����� ���� ���ؼ��� ���翩�θ� �Ǵ��ؾ� �Ѵ�.
    for (int j = 0; j < size; j++) {
        if (balance[j] != 0 && sid == j) { // �ش���� ã�Ҵٸ�
            printf("�Աݱݾ� = ");
            scanf("%d", &money);
            balance[sid] += money;
            printf("�Ա�ó���� �Ϸ�Ǿ����ϴ�.\n");
            printf("���� ������ �ܾ��� %d�� �Դϴ�.\n", balance[sid]);
            return;
        }
        //else {
            //printf("�Է��Ͻ� ���¿� ��ġ�ϴ� ���� �����ϴ�.\n");
        //}
    }

    printf("�Է��Ͻ� ���¿� ��ġ�ϴ� ���� �����ϴ�.\n");
}

void output(int balance[], int size) { // ���ó��
    int sid, money;   // ����ڰ� �Է��� id�� �Աݱݾ�

    printf("== ���ó�� ==\n");
    printf("id = ");
    scanf("%d", &sid);

    // ����� ���� ���ؼ��� ���翩�θ� �Ǵ��ؾ� �Ѵ�.
    for (int j = 0; j < size; j++) {
        if (balance[j] != 0 && sid == j) { // �ش���� ã�Ҵٸ�
            printf("��ݱݾ� = ");
            scanf("%d", &money);
            if (balance[sid] < money) {
                printf("�ܾ��� �����մϴ�.\n");
                printf("���� ������ �ܾ��� %d�� �Դϴ�.\n", balance[sid]);
                return;
            }
            balance[sid] -= money;
            printf("���ó���� �Ϸ�Ǿ����ϴ�.\n");
            printf("���� ������ �ܾ��� %d�� �Դϴ�.\n", balance[sid]);
            return;
        }
        //else {
            //printf("�Է��Ͻ� ���¿� ��ġ�ϴ� ���� �����ϴ�.\n");
        //}
    }

    printf("�Է��Ͻ� ���¿� ��ġ�ϴ� ���� �����ϴ�.\n");
}