#include <stdio.h>
void func(int *a, int *b) {
    *a = 100;
    *b = 200;
}

int main(void) {
    
    int a = 10, b = 20;
    printf("func() �Լ� ȣ�� ��\n");
    printf("a : %d, b : %d\n", a, b);

    // ������ ���� ���� (call by reference)
    // : ������ ���� �����ϴ°� �ƴ϶�,
    //   �ش� ������ ������ �� �ִ� �ּҰ��� ����
    func(&a, &b);

    printf("func() �Լ� ȣ�� ��\n");
    printf("a : %d, b : %d\n", a, b);

    return 0;
}