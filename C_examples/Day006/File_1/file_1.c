/*
	파일 입출력(file)
	1. 파일(file) : 보조기억장치에 저장되는 최소단위
	2. 스트림(stream) 객체 : 통로
		-Input Stream : 입력객체
		-Output Stream : 출력객체
	3. File 구조체  -> 이미 컴퓨터에 파일 처리위한 구조체가 만들어져있다
		typedef struct FILE{
		//파일이 저장된 주소
		//파일의 형식
		//파일에 내용
		//파일 버퍼의 내용
		... 
		}FILE;

	4. 파일 형식 또는 파일의 종료
	-텍스트 파일 (Text file) :  *.txt, *.doc 
	- 그 외 대부분은 바이너리 (Binary File) : *.hwpw (이미지 형태로 저장. 한글), *.jpeg
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	// step 1. 파일 객체 생성
	FILE* fp; //이미 만들어져 있는 FILE을 이용한다. 주소를 이용하기 때문에 포인트 변수를 사용한다. 
	//step 2. 파일 객체 생성 용도 - 출력객체 / 입력객체
	fp = fopen("C:\\Sample\\a.txt", "wt");

	//실행 안되면 경로가 너무 깊을 수 도 있다. 
	/*
		r(read only):읽기 전용
		rt/rb : text file reading, binary file reading
		w(write only): 쓰기 전용 
		wt, wb
		a(append) :파일 뒤에 추가 
	*/
	if (fp == NULL) { //주소가 넘어오지 않았다 = 파일이 존재하지 않는다
		printf("파일이 존재하지 않습니다. \n");
		return 0;
	}

	printf("a.txt 파일이 열렸습니다. \n");

	//step3. 파일 작업
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	//step4. 파일 객체 닫기 (안 닫으면 메모리 누수)
	fclose(fp);

	return 0;
}