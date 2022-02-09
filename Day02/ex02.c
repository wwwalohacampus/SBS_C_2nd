#include <stdio.h>

int main(void) {

    short sh = 32767;       // short 형의 최댓값으로 초기화
    int in = 2147483647;        // 약 21억의 최댓값을 담을 수 있다.
    long ln = 2147483647;
    long long lln = 123451234512345;

    printf("sh : %d\n", sh);
    printf("in : %d\n", in);
    printf("ln : %ld\n", ln);       // long 형의 형식문자 %ld
    printf("lln : %lld\n", lln);    // long long 형의 형식문자 %lld
  
    return 0;
}