#include <stdio.h>

int main(void) {
    
    int num, absolute;

    printf("정수 입력 : ");
    // 입력문 - scanf("형식문자", &변수);
    // & : 주소연산자 - 변수의 주소값을 가져온다
    scanf("%d", &num);

    // 조건 연산자 (삼항 연산자)
    //   (조건) ? (참 일때) : (거짓 일때);
    absolute = num > 0 ? num : -num;
    printf("절댓값 : %d\n", absolute);

    return 0;
}