#include <stdio.h>

int main(void) {
    // for 문에서의 무한반복
    int n = 1;

    for( ; ; ) {
        printf(" n : %d\n", n);
        
        // 종료조건
        if( n == 30 )
            break;

        n++;
    }
    
    return 0;
}