#include <stdio.h>

// 1. ��ȯ�� X, �Ű����� X
void func1(void) {
    printf("��ȯ�� X, �Ű����� X\n");
}

// 2. ��ȯ�� O, �Ű����� X
int func2(void) {
    // ��ȯ���� ���� ��,
    // �ݵ�� return �� �ۼ�
    printf("��ȯ�� O, �Ű����� X\n");
    return 100;
}

// 3. ��ȯ�� X, �Ű����� O
void func3(int a, int b) {
    printf("��ȯ�� X, �Ű����� O\n");
    printf("a + b = %d\n", a + b);
}

// 4. ��ȯ�� O, �Ű����� O
int func4(int a, int b) {
    int sum = a + b;
    printf("��ȯ�� O, �Ű����� O\n");
    return sum;
}


int main(void) {
    // �Լ� ȣ��
    // : �Լ��� �����ϵ��� ��û�ϴ� ���
    // 1.
    func1();

    // 2.
    int result1 = func2();

    // 3.
    func3(10, 20);

    //  4.
    int result2 = func4(10, 20);

    printf("result1 : %d\n", result1);
    printf("result2 : %d\n", result2);
  
    return 0;
}