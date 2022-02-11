#include <stdio.h>

int main(void) {
    // 복합 대입 연산
    int x = 10;
    int y = 20;

    x += 10;        // x = x + 10;
    y -= 10;        // y = y - 10;
    printf("x : %d\n", x);
    printf("y : %d\n", y);

    x *= 2;         // x = x * 2;
    y /= 2;         // y = y / 2;
    printf("x : %d\n", x);
    printf("y : %d\n", y);

    return 0;
}