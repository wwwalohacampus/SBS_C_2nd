#include <stdio.h>

/* ����/���ڿ� ���� �Լ�
    1. ���� ���� ����� �Լ�
    - getchar()     : �ϳ��� ���ڸ� �Է¹޴� ǥ�� �Է��Լ�
    - putchar()     : �ϳ��� ���ڸ� ����ϴ� ǥ�� ����Լ�

*/
int main(void) {

    char ch1, ch2;

    ch1 = getchar();            // 'A'
    ch2 = getchar();            // [ENTER]
    // ���� ���� �ϳ��� ���ڷ� ó���Ǿ� �Էµȴ�.

    putchar(ch1);
    putchar(ch2);
  
    return 0;
}