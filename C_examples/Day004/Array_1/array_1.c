///*
//	3���� ���� �Է¹޾� ������ ����� ����ϴ� ���α׷� �ۼ�
//
//	<�Է� ���>
//	1.�л����
//	2. ����Ȯ��
//	3. �۾�����
//	�޴� = 
//
//
//	���� =
//	���� = 
//	���� =
//*/
//
//#include <stdio.h>
//#pragma warning(disable:4996)
//
//int main() {
//
//	int kor, eng, math, tot;
//	double avg;
//	int menu, cnt=0;
//	int kor1, eng1, math1, tot1;
//	int kor2, eng2, math2, tot2;
//	int kor3, eng3, math3, tot3;
//	double avg1;
//	double avg2;
//	double avg3;
//
//	while (1) {
//		printf("�������� ���α׷�\n");
//		printf("1. �л����\n2.����Ȯ��\n3. �۾�����\n�޴� = ");
//		scanf("%d", &menu);
//		
//
//		if (menu == 1) {
//			cnt++;
//			if (cnt > 3) {
//				printf("��Ͼȵ�.\n");
//				break;
//			}
//			else {
//				printf("���� =");
//				scanf("%d", &kor);
//				printf("���� =");
//				scanf("%d", &eng);
//				printf("���� =");
//				scanf("%d", &math);
//
//				tot = kor + eng + math;
//				avg = tot / 3.0;
//
//				if (cnt == 1) {
//					tot1 = tot;
//					avg1 = avg;
//				}
//				else if (cnt == 2) {
//					tot2 = tot;
//					avg2 = avg;
//				}
//				else {
//					tot3 = tot;
//					avg3 = avg;
//				}
//			}
//		}
//		else if (menu == 2) {
//
//
//		}
//		else if (menu == 3) {
//			printf("����\n");
//			return 0;
//		
//		}
//		else {
//			printf("Ʋ��\n");
//		}
//
//
//
//
//	printf("���� = %d, ��� = %.2lf\n", tot, avg);
//
//	return 0;
//}

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
    int kor, eng, math, tot, menu, cnt = 0;
    double avg;
    int kor1, eng1, math1, tot1;
    int kor2, eng2, math2, tot2;
    int kor3, eng3, math3, tot3;
    double avg1, avg2, avg3;

  /*  int kor[3], eng[3], math[3], tot[3];
    double avg[3];
    int menu, cnt = 0; */

    while (1) {
        printf("�л� ���� ���� ���α׷�\n");
        printf("1. �л����\n");
        printf("2. ����Ȯ��\n");
        printf("3. �۾�����\n");
        printf("�޴� = ");
        scanf("%d", &menu);

        if (menu == 1) { // �л����
            cnt++;
            if (cnt > 3) {
                printf("����ο��� �ʰ��Ͽ����ϴ�.\n");
                //break;
            }
            else {
                printf("���� = ");
                scanf("%d", &kor);
                printf("���� = ");
                scanf("%d", &eng);
                printf("���� = ");
                scanf("%d", &math);

                tot = kor + eng + math;
                avg = tot / 3.0;

                if (cnt == 1) {
                    kor1 = kor;
                    eng1 = eng;
                    math1 = math;
                    tot1 = tot;
                    avg1 = avg;
                }
                else if (cnt == 2) {
                    kor2 = kor;
                    eng2 = eng;
                    math2 = math;
                    tot2 = tot;
                    avg2 = avg;
                }
                else {
                    kor3 = kor;
                    eng3 = eng;
                    math3 = math;
                    tot3 = tot;
                    avg3 = avg;
                }
            }

        }
        else if (menu == 2) { // ����Ȯ��
            if (cnt == 1) {
                printf("���� = %d, ��� = %.2lf\n", tot1, avg1);
            }
            else if (cnt == 2) {
                printf("���� = %d, ��� = %.2lf\n", tot1, avg1);
                printf("���� = %d, ��� = %.2lf\n", tot2, avg2);
            }
            else if (cnt == 3) {
                printf("���� = %d, ��� = %.2lf\n", tot1, avg1);
                printf("���� = %d, ��� = %.2lf\n", tot2, avg2);
                printf("���� = %d, ��� = %.2lf\n", tot3, avg3);
            }
            else {
                printf("��ϵ� �л��� �������� �ʽ��ϴ�.\n");
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