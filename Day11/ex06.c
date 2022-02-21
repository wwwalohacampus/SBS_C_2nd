#include <stdio.h>

/*
    EOF(End of File) 
    : �ؽ�Ʈ ������ ���� ǥ���ϱ� ���� ���

    getchar() �Է��Լ��� EOF ��ȯ�ϴ� ���
    1. �Լ� ȣ�� ���� : �о���� �����Ͱ� ���� ��
    2. ctrl + Z �� �Է��ϴ� ���

    EOF : �Է��Լ��� ���ؼ� ���� �Է��� �����ϴ� �ǹ�
*/

int main(void) {
    char ch;
    while(1) {
        ch = getchar();

        if( ch == EOF ) 
            break;      
        
        putchar(ch);
    }
    return 0;
}