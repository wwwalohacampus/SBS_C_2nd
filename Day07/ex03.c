#include <stdio.h>

int main(void) {
    int num;

    do {
        printf("1. �ֹ��ϱ�, 2. ��ٱ���, 0. ����\n");
        printf("�޴� ��ȣ : ");
        scanf("%d", &num);

        if( num == 1 )
            printf("�ֹ��Ǿ����ϴ�.\n");
        if( num == 2 )
            printf("��ٱ��Ͽ� �����ϴ�.\n");
        
    } while(num != 0);

    printf("�����մϴ�.\n");
    return 0;
}