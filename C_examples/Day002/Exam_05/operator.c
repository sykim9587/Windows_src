/* 
Operator(������) : ��� ����
	1. �������� ������ ���� : ���׿�����, ���� ������
		- ����: +/- , !(��������), ~(��Ʈ����), ++/-- (����)
		- ����: ���������, ���迬����, ����������, ��Ʈ������
	2. ������ �켱����
		-�ֿ켱: +/-, [], (), !, ~, ++/-- ����������
		-���: ��Ģ���� + %
		-����: �� ���� ��Ұ��� ��, ���� <, >, <=, >=, ==, !=
		-���������� : ������( true, false) �̿��ؼ�  ��, ���� && (������), ||(������), !(��������)
		-��Ʈ������ : ��Ʈ�� ��ȯ �� ��� ����
			~ (NOT), & (AND), | (OR) -> ��Ʈ ������ ��ȣ�� ����ȴ�
		-���� ������
		������ ? ��1: ��2;
		���̸� -> ��1, ���� -> ��2
		-��Ÿ������
		���ſ����� (,) : ���� ���� ���� ������ �� ����Ѵ�. 
		���Կ�����(=) : �ں��� ������ ����
			����� �������� �������� ����
		���������� (++/-- ����): ���� ���߿� 

*/

#include <stdio.h>

int main() {

	int su1 = 9, su2 = 7;

	printf("%d + %d = %d\n", su1, su2, su1 + su2);
	printf("%d - %d = %d\n", su1, su2, su1 - su2);
	printf("%d * %d = %d\n", su1, su2, su1 * su2);
	printf("%d / %d = %d\n", su1, su2, su1 / su2);
	printf("%d %% %d = %d\n", su1, su2, su1 % su2);

	return 0;
}
