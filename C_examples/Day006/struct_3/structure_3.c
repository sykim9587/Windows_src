#include <stdio.h>

//����ü ����
typedef struct Point { //������� �� ���� ��üȭ�ϴ� ���ǹ�
	int xpos; //x��ǥ
	int ypos;
}Point;

int main() {
	//����ü�� ������ �����ؾ� ����ü�� ����� �� �ִ�. 
	Point start;
	Point end;
	Point third;

	// Point p[3]; //���� �� �ִ�.

	double distance; //�� �� ���� �Ÿ�
	//����ü������ ���� ����� ���� :direct ������
	start.xpos = 0; //p[0].xpos
	start.ypos = 0; //p[0].ypos

	end.xpos = 10; // p[1].xpos
	end.ypos = 0; // p[1]. ypos


	printf("��1(x,y) = ��(%d, %d)\n", start.xpos, start.ypos);
	printf("��2(x,y) = ��(%d, %d)\n", end.xpos, end.ypos);
	return 0;
}