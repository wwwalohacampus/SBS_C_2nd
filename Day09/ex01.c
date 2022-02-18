#include <stdio.h>

// 함수     : 특정 기능을 수행하는 코드의 모음
// 함수 정의
// 반환타입 함수명 (매개변수1, 매개변수2, ...) { 실행문; }

int sum(int a, int b) {
    int sum = a + b;
    return sum;
    // return (값);
    // 1. 함수를 종료
    // 2. (값)을 함수를 호출한 자리로 반환
}



int main(void) {
    
    int a = 30, b = 40;
    // 함수 호출
    // 함수명(전달인자1, 전달인자2);
    int result = sum(a, b);

    printf("a : %d, b : %d\n", a, b);
    printf("result : %d\n", result);
    return 0;
}

