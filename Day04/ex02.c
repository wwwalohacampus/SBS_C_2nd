#include <stdio.h>

int main(void) {
    char ch;
    int num;
    double fnum;

    // &       : �ּҿ�����
    // &����    : ������ �ּҰ��� ��ȯ
    printf("���� : ");
    scanf("%c", &ch);

    printf("���� : ");
    scanf("%d", &num);

    printf("�Ǽ� : ");
    scanf("%lf", &fnum);

    printf("%c %d %lf \n", ch, num, fnum);
    return 0;
}