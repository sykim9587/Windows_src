#pragma once
#include "class.h"
//�������� ����
Member* mem;
Book* book;
int size = 20;							//å ����ü �����Ҵ� ������
int msize = 20;						//ȸ�� ����ü �����Ҵ� ������
int bookIndex = 0;				//å ��� �ε���
int memIndex = 0;				//ȸ�� ��� �ε���
int numberofBooks = 0;		//���� ��ϵǾ��ִ� å ����
int numberofMems = 0;		//���� ��ϵǾ��ִ� ȸ�� ��
int cont;									//��� �ϴ��� ����� ����
int bsearchidx = -1;              //Book Search �Լ����� �Էµ� å�� ã���� �������ִ� ����. (��ã������ -1�� �ʱ�ȭ)

enum { BLIST = 1, BSEARCH, MREGISTER, RENT, RETURN, STAFF, END };			//customer �޴� ������
enum { BREG = 10, BDELETE, MLIST, BMFILE, GOBACK, FINISH };						//staff �޴� ������