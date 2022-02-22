#include <stdio.h>
#include <stdlib.h>     // ���� �Ҵ� �Լ��� ���ǵǾ� ����

/*
    malloc(size)
    : �޸𸮸� size(byte) ��ŭ �������� �Ҵ��ϴ� �Լ�
    - �Ҵ�� �޸� ������ �ּҰ��� ��ȯ (void*)
    - ��ȯ�� �ּҰ��� ������ ������ �����ϱ� ���ؼ�
      ���� ����ȯ�� ����ؾ��Ѵ�.
*/

int main(void) {
    
    // int ���� �޸𸮰��� 5�� (4x5Byte)�� �Ҵ�
    int *ptr = (int *) malloc( sizeof(int) * 5 );

    // double ���� �޸𸮰��� 3�� (8x3Byte)�� �Ҵ�
    double *dptr = (double *) malloc( sizeof(double) * 3 );

    // �ʱ�ȭ
    for (int i = 0; i < 5; i++) {
        ptr[i] = (i+1) * 10;            // 10 20 30 40 50
    }

    for (int i = 0; i < 3; i++) {
        dptr[i] = (i+1) * 1.5;            // 1.5, 3.0, 4.5
    }

    // ���
    for (int i = 0; i < 5; i++) {
       printf("%d ", ptr[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%f ", dptr[i]);
    }
    printf("\n");

    // free(������)     : ���� �Ҵ��� �޸� ������ �����ϴ� �Լ�
    // �������� �Ҵ�� �޸𸮸� ����
    if( ptr != NULL ) {
        free(ptr);
    }    
    if( dptr != NULL ) {
        free(dptr);
    }    

    return 0;
}