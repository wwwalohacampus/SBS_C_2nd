#include <stdio.h>

// �Լ�     : Ư�� ����� �����ϴ� �ڵ��� ����
// �Լ� ����
// ��ȯŸ�� �Լ��� (�Ű�����1, �Ű�����2, ...) { ���๮; }

int sum(int a, int b) {
    int sum = a + b;
    return sum;
    // return (��);
    // 1. �Լ��� ����
    // 2. (��)�� �Լ��� ȣ���� �ڸ��� ��ȯ
}



int main(void) {
    
    int a = 30, b = 40;
    // �Լ� ȣ��
    // �Լ���(��������1, ��������2);
    int result = sum(a, b);

    printf("a : %d, b : %d\n", a, b);
    printf("result : %d\n", result);
    return 0;
}

