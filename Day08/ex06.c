#include <stdio.h>

int main(void) {
    
    int M, N;           // (MxN) 2���� �迭
    printf("M : ");
    scanf("%d", &M);
    
    printf("N : ");
    scanf("%d", &N);

    int arr[M][N];

    // �Է� 
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // ��� 
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}