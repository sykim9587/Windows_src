///*
//	3명의 성적 입력받아 총점과 평균을 계산하는 프로그램 작성
//
//	<입력 출력>
//	1.학생등록
//	2. 점수확인
//	3. 작업종료
//	메뉴 = 
//
//
//	국어 =
//	영어 = 
//	수학 =
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
//		printf("성적관리 프로그램\n");
//		printf("1. 학생등록\n2.점수확인\n3. 작업종료\n메뉴 = ");
//		scanf("%d", &menu);
//		
//
//		if (menu == 1) {
//			cnt++;
//			if (cnt > 3) {
//				printf("등록안됨.\n");
//				break;
//			}
//			else {
//				printf("국어 =");
//				scanf("%d", &kor);
//				printf("영어 =");
//				scanf("%d", &eng);
//				printf("수학 =");
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
//			printf("종료\n");
//			return 0;
//		
//		}
//		else {
//			printf("틀림\n");
//		}
//
//
//
//
//	printf("총점 = %d, 평균 = %.2lf\n", tot, avg);
//
//	return 0;
//}

/*
  3명의 성적을 입력받아 총점과 평균을 계산하여 출력하는 프로그램을 구현하시오.

  <입력형식 및 출력형식>
  1. 학생등록
  2. 점수확인
  3. 작업종료
  메뉴 =
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
    // 선언문
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
        printf("학생 성적 관리 프로그램\n");
        printf("1. 학생등록\n");
        printf("2. 점수확인\n");
        printf("3. 작업종료\n");
        printf("메뉴 = ");
        scanf("%d", &menu);

        if (menu == 1) { // 학생등록
            cnt++;
            if (cnt > 3) {
                printf("등록인원이 초과하였습니다.\n");
                //break;
            }
            else {
                printf("국어 = ");
                scanf("%d", &kor);
                printf("영어 = ");
                scanf("%d", &eng);
                printf("수학 = ");
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
        else if (menu == 2) { // 점수확인
            if (cnt == 1) {
                printf("총점 = %d, 평균 = %.2lf\n", tot1, avg1);
            }
            else if (cnt == 2) {
                printf("총점 = %d, 평균 = %.2lf\n", tot1, avg1);
                printf("총점 = %d, 평균 = %.2lf\n", tot2, avg2);
            }
            else if (cnt == 3) {
                printf("총점 = %d, 평균 = %.2lf\n", tot1, avg1);
                printf("총점 = %d, 평균 = %.2lf\n", tot2, avg2);
                printf("총점 = %d, 평균 = %.2lf\n", tot3, avg3);
            }
            else {
                printf("등록된 학생이 존재하지 않습니다.\n");
            }

        }
        else if (menu == 3) { // 작업종료
            printf("시스템을 종료합니다.\n");
            return 0;
        }
        else {
            printf("메뉴의 선택이 올바르지 않습니다.\n");
        }
    }





    // 출력문

    return 0;
}