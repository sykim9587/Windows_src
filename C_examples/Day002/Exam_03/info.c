/*
	자기소개
	1. 이름
	2. 나이
	3. 혈액형
	4. 주소

	조건. 
	-반드시 printf() 사용
	-%d, %s, %c등
	-제어문자를 이용하여 출력
*/

#include <stdio.h>

int main() {

	printf("이름: %s\n", "김소영");
	printf("나이 : %d\n", 26);
	printf("혈액형: %c 형\n", 'B');
	printf("주소: %s\n", "대전 유성구 관평동 테크노벨리");
	printf("체중과 신장: 체중 (%.1fkg), 신장(%.1fcm)\n", 60.0, 167.5);

	return 0;
}