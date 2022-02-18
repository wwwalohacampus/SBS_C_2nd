#include <stdio.h>

// 함수 선언
// 반환타입과 매개변수 모두 없는 함수
void print_line(void);

int main(void) {
    
    print_line();
    printf("학번\t이름\t전공\n");
    printf("001\t학생1\t소프트웨어학과\n");
    printf("002\t학생2\t로봇공학과\n");
    printf("003\t학생3\tIT공학과\n");
    print_line();
    return 0;
}

// 함수 정의
void print_line(void) {
    for (int i = 0; i < 50; i++) {
        printf("-");
    }
    printf("\n");
}