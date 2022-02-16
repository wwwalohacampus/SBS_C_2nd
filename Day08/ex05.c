#include <stdio.h>

int main(void) {
    
    // 2차원 배열 선언
    int arr[2][3] = { {1,2,3}, {4,5,6} };

    // (int : 4byte) X (6개) = 24 byte
    printf("전체 개수 : %d\n", sizeof(arr) / sizeof(int) );         // 배열 요소의 개수 구하기
    printf("행의 개수 : %d\n", sizeof(arr) / sizeof(arr[0]) );      // 1차원 배열 요소의 개수
    printf("열의 개수 : %d\n", sizeof(arr[0]) / sizeof(int) );      // 2차원 배열 요소의 개수

    // sizeof(arr)      : 24 byte
    // sizeof(arr[0])   : 12 byte
    // sizeof(int)      : 4 byte
    int row = sizeof(arr) / sizeof(arr[0]);         // 행의 개수
    int col = sizeof(arr[0]) / sizeof(int);         // 열의 개수 

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}