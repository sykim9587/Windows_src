#include <stdio.h>
#include <string.h> //strcpy ���� ���ؼ�!
#pragma warning(disable: 4996)

//����ü ����  - ù���ڴ� ��κ� �빮��
//main �ȿ��� ����ü ���� ���������� ��κ� main �ۿ� �����Ѵ�. 
struct Point {
	int xpos;
	int ypos;

};

struct Person {
	char name[20]; //20 byte - ������ 19, �ѱ� 9����
	int age;
	double weight;
};

struct Student {
	//int kor, eng, math, tot;
	int sub[4];
	char name[20];
	//char* name; // �̸� �������� ����Ʈ ���� �ִ°� ���� ����. 
	double avg;
};

int main() {
	//����ü�� ���� ����
	struct Point ap; 
	struct Student stu;

	//����ü�� ���� �̿��Ͽ� ����� ����
	ap.xpos = 1;
	ap.ypos = 1;

	stu.sub[0] = 80;
	stu.sub[1] = 90;
	stu.sub[2] = 70;
	stu.sub[3] = stu.sub[0]+stu.sub[1]+stu.sub[2];

	stu.avg = stu.sub[3] / 3.0;
	printf("�� (%d, %d)\n", ap.xpos, ap.ypos);
	//stu.name = "ȫ�浿";
	strcpy(stu.name, "ȫ�浿");

	// ����ü ���
	printf("�� (%d, %d)\n", ap.xpos, ap.ypos);
	printf("average:%lf\n", stu.avg);
	printf("name:%s\n", stu.name);


	return 0;
}