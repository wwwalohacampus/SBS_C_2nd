#include <stdio.h>

int main(void) {
    // 1~10 ���� �հ踦 ���Ͻÿ�.
    int i = 1;
    int sum = 0;

    // sum = 1+2+3+4+5+6+7+8+9+10;

    while( i <= 10 ) {
        sum += i;           // sum = sum + i;
        i++;                // i = i + 1;
        // sum = 0 + 1;
        // sum = 1 + 2;
        // sum = (1 + 2) + 3;
        // ...
        // sum + 1+2+3+..+10;
    }
    
    printf("�հ� : %d\n", sum);
    return 0;
}