#include <stdio.h>

int main(void) {
    // for �ݺ���
    // for( �ʱ�� ; ���ǽ� ; ������ ) { �ݺ��� ���๮; }
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 1���� 10������ �հ�
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;           // sum = sum + i;
    }
    printf("�հ� : %d\n", sum);

    return 0;
}