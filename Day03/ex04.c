#include <stdio.h>

int main(void) {

    double a = 12.34;
    int b;
    b = (int) a;        // ����� ����ȯ
    // �Ҽ��κп� ���� ������ �ս��� �߻�

    printf("a : %f \n", a);
    printf("b : %d \n", b);

    printf("%d\n", (short) 3.1415);
    printf("%d\n", (int) 3.1415);
    printf("%f\n", (double) 10);
    printf("%f\n", (float) 10);

  
    return 0;
}