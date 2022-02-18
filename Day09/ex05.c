#include <stdio.h>
// 함수 선언
void print_char(char ch, int count);

int main(void) {
    
    print_char('A', 20);

    return 0;
}
// 반환타입이 없는 함수
// 입력받은 문자 ch 를 count 번 출력하는 함수
void print_char(char ch, int count) {
    int i;

    for (int i = 0; i < count; i++) {
        printf("%c", ch);
    }
    // 반환타입이 없을 때, 
    // return 을 사용하지 않아도 된다.
}