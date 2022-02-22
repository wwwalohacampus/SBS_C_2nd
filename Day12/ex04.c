#include <stdio.h>

// 전역 변수
int number = 100;

void printNumber(void) {
    printf("전역 변수 number 는 %d\n", number);
}

// 변수의 이름이 동일한 경우,
// : 현재 { } 블록에서 선언된 지역변수가 우선된다.
int main(void) {
    // 지역 변수
    // : 선언된 중괄호 { } 블록 안에서만 접근 가능
    int number = 200;
    printf("지역 변수 number 는 %d\n", number);

    if( number > 10 ) {
        int number = 300;
        printf("(조건문) 지역 변수 number 는 %d\n", number);
    }

    // 함수 호출
    printNumber();
    return 0;
}