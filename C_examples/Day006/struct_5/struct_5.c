/*
	����ü �迭�� �ʱ�ȭ
*/
#include <stdio.h>
typedef struct Person {
	char name[20];
	char phone[14];// NULL ����Ʈ �ڸ��� ����Ѵ� 
	int age;
}Person;

int main() {
	Person p[3] = { {"ȫ�浿", "010-1234-5678", 19},
							{"�庸��", "010-3333-4343", 21},
							{"�̼���", "010-4343-3424", 20} }; //����ü ���Ŀ��� �����ݷ�

	//����ü ������ ����
	Person* cp = p; // &p[0]

	////�Ϲ���
	//for (int i = 0; i < 3; i ++ ) {
	//	printf("%s : %s: %d\n", p[i].name, p[i].phone, p[i].age);
	//}
	
	//������ ���� 
	for (int i = 0; i < 3; i++) {
		printf("%s : %s: %d\n", (cp+i)->name, (cp+i)->phone, (cp+i)->age); //->:������ ������ 
	}
							
							
	return 0;
}