#include <stdio.h>

int main(void) {
    // ���ڿ� ���� ǥ��
    // - �迭�� ���ڿ� ����
    // '' (���� ����ǥ)     : �� ����
    // "" (ū ����ǥ)       : ���ڿ� (���� ����)
    char greet[] = "Hello, C~!";
    printf("���ڿ��� ���� : %s\n", greet);

    // sizeof() �Լ�
    // : �ش� ������ byte ������ ũ�⸦ ��ȯ
    printf("���ڿ��� ũ�� : %d\n", sizeof(greet));

    // �� ����
    // \0       : ���ڿ� �������� ���ԵǴ� ����
    // �ǹ�     : ������ ����, ���ڿ��� ���� ����
    // [H][e][l][l][o][,][C][~][!][\0]

    char mind[30] = "I Love Programming!";
    printf("%s\n", mind);

    // 'P' �� '\0' ���� ��ü
    mind[7] = '\0';             // 8��° ��ҿ� \0 �߰�
    printf("%s\n", mind);

    mind[1] = '\0';             // 2��° ��ҿ� \0 �߰�
    printf("%s\n", mind);

    return 0;
}