#include <stdio.h>

/*
    �迭 ������
    : �迭�� ����Ű�� ������ ����
    - �迭�� �ּҰ��� ������ ������ ����

    ������ �迭 ���� : int *arr[3];
    �迭 ������ ���� : int (*arr)[3];
*/

int main(void) {

    // 2�� 3���� 2���� �迭
    int arr[2][3] =  {
                        {1, 2, 3},
                        {4, 5, 6}
                     };
    int i, j;
    // ���� 3���� 2���� �迭 ������
    int (*arrptr)[3] = arr;

    for (int i = 0; i < 2; i++) {   
        for (int j = 0; j < 3; j++) {
            printf("%d ", arrptr[i][j]);
        }
        printf("\n");
    }
    return 0;
}