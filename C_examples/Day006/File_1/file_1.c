/*
	���� �����(file)
	1. ����(file) : ���������ġ�� ����Ǵ� �ּҴ���
	2. ��Ʈ��(stream) ��ü : ���
		-Input Stream : �Է°�ü
		-Output Stream : ��°�ü
	3. File ����ü  -> �̹� ��ǻ�Ϳ� ���� ó������ ����ü�� ��������ִ�
		typedef struct FILE{
		//������ ����� �ּ�
		//������ ����
		//���Ͽ� ����
		//���� ������ ����
		... 
		}FILE;

	4. ���� ���� �Ǵ� ������ ����
	-�ؽ�Ʈ ���� (Text file) :  *.txt, *.doc 
	- �� �� ��κ��� ���̳ʸ� (Binary File) : *.hwpw (�̹��� ���·� ����. �ѱ�), *.jpeg
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	// step 1. ���� ��ü ����
	FILE* fp; //�̹� ������� �ִ� FILE�� �̿��Ѵ�. �ּҸ� �̿��ϱ� ������ ����Ʈ ������ ����Ѵ�. 
	//step 2. ���� ��ü ���� �뵵 - ��°�ü / �Է°�ü
	fp = fopen("C:\\Sample\\a.txt", "wt");

	//���� �ȵǸ� ��ΰ� �ʹ� ���� �� �� �ִ�. 
	/*
		r(read only):�б� ����
		rt/rb : text file reading, binary file reading
		w(write only): ���� ���� 
		wt, wb
		a(append) :���� �ڿ� �߰� 
	*/
	if (fp == NULL) { //�ּҰ� �Ѿ���� �ʾҴ� = ������ �������� �ʴ´�
		printf("������ �������� �ʽ��ϴ�. \n");
		return 0;
	}

	printf("a.txt ������ ���Ƚ��ϴ�. \n");

	//step3. ���� �۾�
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	//step4. ���� ��ü �ݱ� (�� ������ �޸� ����)
	fclose(fp);

	return 0;
}