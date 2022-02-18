#include <stdio.h>

int main(void) {
    // 구구단 2단 부터 5까지의 결과를 2차원배열에 저장하고 출력하시오.
    int gugu[4][9];

    // i = 0 ~ 3
    // (i+2) = 2 ~ 5
    for (int i = 0; i < 4; i++) {
        // j = 0 ~ 8
        // (j+1) = 1 ~ 9
        for (int j = 0; j < 9; j++) {
            // gugu[0][0] =  2 * 1   
            // gugu[0][1] =  2 * 2   
            // gugu[0][2] =  2 * 3
            // ..
            // gugu[0][8] = 2 * 9   
            gugu[i][j] = (i+2) * (j+1);
        }
    }

    for (int i = 0; i < 4; i++) {
       for (int j = 0; j < 9; j++) {
            printf("%d ", gugu[i][j]);
        }
        printf("\n");
    }
    return 0;
}