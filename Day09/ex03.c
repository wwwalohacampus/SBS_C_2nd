#include <stdio.h>

// void : 반환타입이 없는 것을 의미
void coffe( int water,  int coffe, int temp ) {
    water *= 2;
    coffe -= 5;
    static int cup1 = 0;
    int result = water + coffe + temp;
    cup1++;

    printf("주문 된 커피는 %d 입니다.\n", result);
    printf("주문 된 커피 개수는 %d 입니다.\n", cup1);
    printf("\n");
}

void juice( int water, int fruit ) {
    water *= 1.5;
    fruit += 10;
    static int cup2 = 0;
    int result = water + fruit;
    cup2++;

    printf("주문 된 주스는 %d 입니다.\n", result);
    printf("주문 된 주스 개수는 %d 입니다.\n", cup2);
    printf("\n");
}

int main(void) {

    coffe(30, 20, 90);
    juice(30, 50);
    
    coffe(30, 20, 90);
    juice(30, 50);

    return 0;
}