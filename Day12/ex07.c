#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // �Ҵ�� �޸� �ּҰ��� ������ ������
    int *ptr;
    // �Է� ������ ����
    int count = 0;
    // �Ҵ���� �޸� ũ��
    int maxSize = 3;
    int num;

    // �޸� ���� �Ҵ�
    // calloc() �Լ�
    // : calloc( ����, ũ�� )
    // �Ҵ��ϰ����ϴ� �޸� ������ ����, �޸� ������ ũ��(byte)
    // �Ҵ���� �޸� �ּҰ��� ��ȯ (*void)
    // �Ҵ�� �޸� ������ ��� ��Ʈ�� 0���� �ʱ�ȭ
    ptr = (int*) calloc( maxSize, sizeof(int) );

    while(1) {
        printf("������ �Է��ϼ���(����:0) : ");
        scanf("%d", &num);
        if( num == 0 )
            break;
        
        // �޸� ������ �ʰ��� ���, ���Ҵ��� ���� �޸� ���� Ȯ��
        if( count == maxSize ) {
            maxSize += maxSize; // 3 + 3, �޸� ����� 2���
            // �޸� ���Ҵ�
            // : realloc( �Ҵ��� ������, ���Ҵ��� ������ )
            ptr = (int*) realloc( ptr, maxSize * sizeof(int) );
        }

        // �Է��� ���� ����
        ptr[count++] = num;
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    if( ptr != NULL ) {
        // �޸� ���� ����
        free(ptr);
    }

    return 0;
}