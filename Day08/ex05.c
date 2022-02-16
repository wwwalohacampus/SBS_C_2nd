#include <stdio.h>

int main(void) {
    
    // 2���� �迭 ����
    int arr[2][3] = { {1,2,3}, {4,5,6} };

    // (int : 4byte) X (6��) = 24 byte
    printf("��ü ���� : %d\n", sizeof(arr) / sizeof(int) );         // �迭 ����� ���� ���ϱ�
    printf("���� ���� : %d\n", sizeof(arr) / sizeof(arr[0]) );      // 1���� �迭 ����� ����
    printf("���� ���� : %d\n", sizeof(arr[0]) / sizeof(int) );      // 2���� �迭 ����� ����

    // sizeof(arr)      : 24 byte
    // sizeof(arr[0])   : 12 byte
    // sizeof(int)      : 4 byte
    int row = sizeof(arr) / sizeof(arr[0]);         // ���� ����
    int col = sizeof(arr[0]) / sizeof(int);         // ���� ���� 

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}