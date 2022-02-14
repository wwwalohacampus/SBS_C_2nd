#include <stdio.h>

int main(void) {
    // for 반복문
    // for( 초기식 ; 조건식 ; 증감식 ) { 반복할 실행문; }
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 1부터 10까지의 합계
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;           // sum = sum + i;
    }
    printf("합계 : %d\n", sum);

    return 0;
}