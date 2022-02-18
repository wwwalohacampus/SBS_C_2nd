#include <stdio.h>
void func(int *a, int *b) {
    *a = 100;
    *b = 200;
}

int main(void) {
    
    int a = 10, b = 20;
    printf("func() 함수 호출 전\n");
    printf("a : %d, b : %d\n", a, b);

    // 참조에 의한 전달 (call by reference)
    // : 변수의 값을 전달하는게 아니라,
    //   해당 변수에 접근할 수 있는 주소값을 전달
    func(&a, &b);

    printf("func() 함수 호출 후\n");
    printf("a : %d, b : %d\n", a, b);

    return 0;
}