#include <stdio.h>

int main(void) {
    int num;

    // ���ѹݺ� : ������ ��(1)�� �ָ� ������ �ݺ��ȴ�.
    while(1) {
        printf("1. �ֹ��ϱ�, 2. ��ٱ���, 0. ����\n");
        printf("�޴� ��ȣ : ");
        scanf("%d", &num);

        // ���� ����
        if( num == 0 ) {
            printf("�����մϴ�.\n");
            break;                      
            // break : ���� ���� ���ǹ�, �ݺ����� ����� ���
        }
        if( num == 1 )
            printf("�ֹ��Ǿ����ϴ�.\n");
        if( num == 2 )
            printf("��ٱ��Ͽ� �����ϴ�.\n");
        
    }
    return 0;
}