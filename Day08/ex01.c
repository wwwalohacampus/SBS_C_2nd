#include <stdio.h>

int main(void) {
    // �迭
    // : ���� �ڷ����� ���� ���� ���� �����͸� ������ �� �ִ� ����
    // ����
    // - �ڷ��� ������[����];
    // - �ڷ��� ������[] = {1,2,3};

    // �迭 ���� ���� �� �ʱ�ȭ
    int num[3] = {1,2,3};

    char ch[] = {'a','b','c','d'};

    // �迭�� �����ϱ�
    // index (������ȣ)
    // : 0 ���� �����ϴ� �迭 ����� ��ġ�� ��Ÿ���� ��ȣ
    printf("num[%d] = %d\n", 0, num[0]);
    printf("num[%d] = %d\n", 1, num[1]);
    printf("num[%d] = %d\n", 2, num[2]);
    printf("\n");

    printf("ch[%d] = %c\n", 0, ch[0]);
    printf("ch[%d] = %c\n", 1, ch[1]);
    printf("ch[%d] = %c\n", 2, ch[2]);
    printf("ch[%d] = %c\n", 3, ch[3]);
    printf("\n");

    return 0;
}