#include <stdio.h>

// ���� ����
// : �Լ� �ܺο� ������ ����
//  - �Լ� ����/�ܺ� ��� �������� ������ �� �ִ�.
int X = 500;
int Y = 1000;

void sample() {
    int A = 100;
    int B = 200;

    printf("X : %d\n", X);
    printf("Y : %d\n", Y);
}

int main(void) {
  
    // ��������
    // : �Լ� ���ο� ������ ����
    //  - �Լ� ���ο����� ���� ����, �ܺο����� ���� �Ұ�
    // A = 300;  (���� �� �� ����.)
    // printf("A : %d\n", A);
    printf("main �Լ� ���� X, Y ����\n");
    printf("X : %d\n", X);
    printf("Y : %d\n", Y);
    
    printf("sample �Լ� ���� X, Y ����\n");
    sample();

    return 0;
}