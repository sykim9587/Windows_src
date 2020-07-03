/* 
	초 입력받아 일, 시, 분, 초 계산

	입력 
	초=

	출력
	 일 시 분 초

	 힌트 
	 1분 = 60초
	 1시간 = 3600초
	 하루 = 86400초
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	int time, tmp;
	int day, hour, min, sec;

	printf("초 = ");
	scanf("%d", &time);

	day = time / 86400;
	tmp = time % 86400;
	hour = tmp / 3600;
	tmp = tmp % 3600;
	min = tmp / 60;
	sec = tmp % 60;

	printf("%d day %d hour %d min %d sec\n", day, hour, min, sec);

	return 0;
}