#include <stdio.h>


// 전역 변수
int N = 10;

// 사용자 정의 함수
// [반환타입] [함수명] (매개변수1, 매개변수2) { 실행문; }
int sum(int a, int b) {
    int result = a + b;
    printf("sum() 에서 N : %d\n", N);
    return result;
}

// main 함수
// : 프로그램 실행 시, 가장 먼저 실행되는 함수
int main(void) {

    // 지역변수
    int x = 10;
    int y = 20;
    int result = sum(x, y);

    printf("main() 에서 N : %d\n", N);
    printf("합계 : %d\n", result);
    return 0;
}