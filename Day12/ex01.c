#include <stdio.h>


// ���� ����
int N = 10;

// ����� ���� �Լ�
// [��ȯŸ��] [�Լ���] (�Ű�����1, �Ű�����2) { ���๮; }
int sum(int a, int b) {
    int result = a + b;
    printf("sum() ���� N : %d\n", N);
    return result;
}

// main �Լ�
// : ���α׷� ���� ��, ���� ���� ����Ǵ� �Լ�
int main(void) {

    // ��������
    int x = 10;
    int y = 20;
    int result = sum(x, y);

    printf("main() ���� N : %d\n", N);
    printf("�հ� : %d\n", result);
    return 0;
}