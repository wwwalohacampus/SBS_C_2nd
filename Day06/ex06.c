#include <stdio.h>

int main(void) {
    // switch 문
    /*
        switch( 표현식, 조건 ) {
            case 값1:           // 조건의 결과가 '값1' 일 때, 실행
                    break;
            case 값2:           // 조건의 결과가 '값2' 일 때, 실행
                    break;
            case 값3:           // 조건의 결과가 '값3' 일 때, 실행
                    break;
            default:            // 어떤 케이스에도 해당되지 않을 때, 실행
                    break;
        }
    */
    int N;
    printf("메뉴 번호 : ");
    scanf("%d", &N);

    switch ( N ) {
        case 1:
                printf("아메리카노\n");
                break;
        case 2:
                printf("카페라떼\n");
                break;
        case 3:
                printf("아이스티\n");
                break;
        default:
                printf("없음\n");
                break;
    }
    return 0;
}