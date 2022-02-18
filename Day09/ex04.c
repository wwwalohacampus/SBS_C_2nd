#include <stdio.h>

// 함수 선언
// : 프로그램 상단에 사용할 함수를 컴파일러에 알려주도록 지정하는 것
//  - 반환타입 함수명 (매개변수);
int get_num(void);

int main(void) {
    int result;

    result = get_num();
    printf("반환값 : %d\n", result);
    return 0;
}

// 매개변수 없는 함수
int get_num(void) {
    int num;

    printf("정수 입력 : ");
    scanf("%d", &num);

    return num;
}