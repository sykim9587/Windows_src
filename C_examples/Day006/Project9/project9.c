#include <stdio.h>

typedef struct Permanent {
	char name[20];
	int salary;

}Permanent;

void disp(Permanent* p) {
	for (int i = 0; i < 5; i++) {
		printf("%s: %d\n", (p+i)->name, (p+i)->salary);
		//p++ 으로 하면 p가 이동한다. 
	}
}

int main() {
	Permanent p[5] = { {"aaa",10000},{"bbb",20000},{"ccc",30000},{"ddd",40000},{"eee",50000} }; //5명 관리
	
	disp(p);

	return 0;
}