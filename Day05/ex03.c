#include <stdio.h>

int main(void) {
    // �� ������
    int a = 10;
    int b = 11;
    // �� ���� ��, ����� ���̸� 1, �����̸� 0
    printf("a > b : %d\n", a > b);      // a�� b���� ũ�� 1
    printf("a < b : %d\n", a < b);      // a�� b���� ������ 1
    printf("a >= b : %d\n", a >= b);    // a�� b���� ũ�ų� ������ 1
    printf("a <= b : %d\n", a <= b);    // a�� b���� �۰ų� ������ 1
    printf("a == b : %d\n", a == b);    // a�� b�� ������ 1
    printf("a != b : %d\n", a != b);    // a�� b�� �ٸ��� 1
    
    return 0;
}