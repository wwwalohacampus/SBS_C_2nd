#include <stdio.h>

// 전역 변수
// : 함수 외부에 선언한 변수
//  - 함수 내부/외부 모든 영역에서 접근할 수 있다.
int X = 500;
int Y = 1000;

void sample() {
    int A = 100;
    int B = 200;

    printf("X : %d\n", X);
    printf("Y : %d\n", Y);
}

int main(void) {
  
    // 지역변수
    // : 함수 내부에 선언한 변수
    //  - 함수 내부에서만 접근 가능, 외부에서는 접근 불가
    // A = 300;  (접근 할 수 없다.)
    // printf("A : %d\n", A);
    printf("main 함수 에서 X, Y 접근\n");
    printf("X : %d\n", X);
    printf("Y : %d\n", Y);
    
    printf("sample 함수 에서 X, Y 접근\n");
    sample();

    return 0;
}