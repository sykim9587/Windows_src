/*
  3���� ������ �Է¹޾� ������ ����� ����Ͽ� ����ϴ� ���α׷��� �����Ͻÿ�.

  <�Է����� �� �������>
  1. �л����
  2. ����Ȯ��
  3. �۾�����
  �޴� =
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
    // ����
    int kor[3], eng[3], math[3], tot[3];
    double avg[3];
    int menu, cnt = 0;

    while (1) {
        printf("�л� ���� ���� ���α׷�\n");
        printf("1. �л����\n");
        printf("2. ����Ȯ��\n");
        printf("3. �۾�����\n");
        printf("�޴� = ");
        scanf("%d", &menu);

        if (menu == 1) { // �л����
            if (cnt == 0) {
                printf("���� = ");
                scanf("%d", &kor[0]);
                printf("���� = ");
                scanf("%d", &eng[0]);
                printf("���� = ");
                scanf("%d", &math[0]);

                tot[0] = kor[0] + eng[0] + math[0];
                avg[0] = tot[0] / 3.0;
                cnt++;
            }
            else if (cnt == 1) {
                printf("���� = ");
                scanf("%d", &kor[cnt]);
                printf("���� = ");
                scanf("%d", &eng[1]);
                printf("���� = ");
                scanf("%d", &math[1]);

                tot[1] = kor[1] + eng[1] + math[1];
                avg[1] = tot[1] / 3.0;
                cnt++;
            }
            else if (cnt == 2) {
                printf("���� = ");
                scanf("%d", &kor[2]);
                printf("���� = ");
                scanf("%d", &eng[2]);
                printf("���� = ");
                scanf("%d", &math[2]);

                tot[2] = kor[2] + eng[2] + math[2];
                avg[2] = tot[2] / 3.0;
                cnt++;
            }
            else {
                printf("��Ϲ����� �ʰ��Ͽ����ϴ�.\n");
            }

        }
        else if (menu == 2) { // ����Ȯ��
            for (int i = 0; i < cnt; i++) {
                printf("���� = %d, ��� = %.2lf\n", tot[i], avg[i]);
            }

        }
        else if (menu == 3) { // �۾�����
            printf("�ý����� �����մϴ�.\n");
            return 0;
        }
        else {
            printf("�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n");
        }
    }


    // ��¹�

    return 0;
}