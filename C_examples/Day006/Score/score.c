/*
	����ü�� main ���� �и��ϴ� ����! ��������

	3���� ������ �Է¹޾� ������ ����� ����Ͽ� ����ϴ� ���α׷��� ����
	��, ���ǵ� ����ü Studnet Ȱ��
*/

#include <stdio.h>
#include "Student.h" //����� ���� ��������� " "
#pragma warning(disable:4996)

int main() {
	//Student stu; //�л� ���� �Ϸ��� �迭��

	Student s[3];
	/*
	s[0]�� �л� s[1], s[2] 
	*/

	for (int i = 0; i < 3; i++) {
		printf("�̸� = ");
		scanf("%s", s[i].name);
		printf("���� = ");
		scanf("%d", &s[i].kor);
		printf("���� = ");
		scanf("%d", &s[i].eng);
		printf("���� = ");
		scanf("%d", &s[i].math);
		s[i].tot = s[i].kor + s[i].math + s[i].eng;
		s[i].avg = s[i].tot / 3.0;
	}

	for (int i = 0; i < 3; i++) {
		printf("%s�� ��������� ������ �����ϴ�. \n", s[i].name);
		printf("���� = %d, ��� = %.2lf\n", s[i].tot, s[i].avg);
	}
	return 0;
}