/*
    제어문!

    1. 제어문: 프로그램의 흐름이나 순서 제어할 대 사용하는 문장
        -일반적으로 프로그램은 위에서 아래로 진행된다
        -별도의 제어가 없다면 한번 수행


    2. 선택문/ 조건문
        -여러개의 문장 중 하나를 선택한다, 문장의 수행 여부를 선택한다, 조건에 따라 수행할 문장 선택한다.
        1) 단순 if문
            if(논리조건식){
                조건식이 참일때 실행하는 문장;
            } 
        2) if else문: 삼항연산자
            if(논리조건식){
                조건식이 참일때;
            }
            else{
                조건식이 거짓일때;
            }
        3) 다중 if문 : if 문 안에 또 다른 if문 담고 있는 문장
            if(논리조건문1){
                condition 1 true;
            }
            else if(condition2){
                condition 2 true;
            }
            else if(condition3){
                condition 3 true;
            }
            else{
                all false;
            }
        4) switch case 문:  다중 if 문 간소화한 형태, 조건식에 해당하는 결과값으로 이동한 수 수행
            switch(value 수치나 값){
               case val1: value == val1;
               case val2: value == val2;
               case val3: value == val3;
               default: 해당 수치나 값이 case에 존재 x;
            }
            -value 는 무조건 정수형

    3. 반복문
        -주어진 조건이나 횟수만큼 반복 수행
        -동일한 문장이나  유사한 문장만 반복할 수 있다. 
         유사한 문장 -> 일정한 규칙 가지고 있는 문장 
        1) for 문
            - 형식
              for(초기식;조건식;증감식){
                    반복할 문장;
              }
        2) while 문
            - 사용자의 행위에 의해 반복을 제어할 때 사용한다. 
            -형식
              while(논리조건문){
                    반복할 문장;
              }
        3) do~ while 문
            -문장 먼저 수행 후 조건 비교한다,즉 조건이 거짓이라 해도 한번은 수행된다. 
            -형식
                do{
                    반복할 문장;
                }while(논리조건문);   

    4.기타제어문
        1)break
            -가장 가까운 제어문에서 벗어난다
        2)continue
            -이하생략의 의미


*/

int main() {
    return 0;
}