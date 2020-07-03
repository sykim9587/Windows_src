/*
   ������ ���α׷�
   �� ���� ������ �Է¹޾� ū ������� �����Ͽ� ����ϴ� ���α׷��� �����Ͻÿ�.

   <�Է�����>
   ù��°�� =
   �ι�°�� =
   ����°�� =

   <�������>
   ū�� >= �߰��� >= ������

   <ó������>
   - �Լ��� �����͸� �̿��Ͽ� ������ ��.
*/

#include<stdio.h>
#pragma warning(disable:4996)

void list(int* max, int* med, int* min);
void swap(int* pa, int* pb); // �� ���� ������ �����ϴ� �Լ�

int main() {
    int first, second, third, tmp;

    printf("ù��°�� = ");
    scanf("%d", &first);
    printf("�ι�°�� = ");
    scanf("%d", &second);
    printf("����°�� = ");
    scanf("%d", &third);

    // �Լ�ȣ��
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

    printf("�ٲ�� %d >= %d >= %d\n", first, second, third);
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