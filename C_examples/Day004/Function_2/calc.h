#pragma once
#include <stdio.h>
#pragma warning(disable:4996)

//global
int kor = 0, eng = 0, math = 0, tot = 0;
double avg = 0.0;

void input() {

	printf("kor = ");
	scanf("%d", &kor);
	printf("eng = ");
	scanf("%d", &eng);
	printf("math = ");
	scanf("%d", &math);
	

}

void process() {
	tot = kor + eng + math;
	avg = tot / 3.0;
}

void output() {
	printf(" ÃÑÁ¡ = %d  Æò±Õ = %.2lf\n", tot, avg);

}

