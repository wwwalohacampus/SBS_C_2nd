#include <stdio.h>

int main(void) {
    // for �������� ���ѹݺ�
    int n = 1;

    for( ; ; ) {
        printf(" n : %d\n", n);
        
        // ��������
        if( n == 30 )
            break;

        n++;
    }
    
    return 0;
}