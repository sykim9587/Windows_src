/*
   수나열 프로그램
   세 개의 정수를 입력받아 큰 순서대로 나열하여 출력하는 프로그램을 구현하시오.

   <입력형식>
   첫번째수 =
   두번째수 =
   세번째수 =

   <출력형식>
   큰수 >= 중간수 >= 작은수

   <처리조건>
   - 함수와 포인터를 이용하여 구현할 것.
*/

#include<stdio.h>
#pragma warning(disable:4996)

void list(int* max, int* med, int* min);
void swap(int* pa, int* pb); // 두 개의 정수를 변경하는 함수

int main() {
    int first, second, third, tmp;

    printf("첫번째수 = ");
    scanf("%d", &first);
    printf("두번째수 = ");
    scanf("%d", &second);
    printf("세번째수 = ");
    scanf("%d", &third);

    // 함수호출
    list(&first, &second, &third);

    /*if (second >= first && second >= third) {
        tmp = first;
        first = second;
        second = tmp;
    }
    else if (third >= first && third >= second) {
        tmp = first;
        first = third;
        third = tmp;
    }

    if (third >= second) {
        tmp = second;
        second = third;
        third = tmp;
    }*/

    printf("바뀐거 %d >= %d >= %d\n", first, second, third);
    return 0;
}

void swap(int* pa, int* pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

void list(int* max, int* med, int* min) {
    // first=max, second=med, third=min
    if (*med >= *max && *med >= *min) {
        swap(max, med);
        return;
    }

    else if (*min >= *max && *min >= *med) {
        swap(max, min);
        return;
    }

    if (*min >= *med) {
        swap(med, min);
        return;
    }
}