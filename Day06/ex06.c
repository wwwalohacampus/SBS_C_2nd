#include <stdio.h>

int main(void) {
    // switch ��
    /*
        switch( ǥ����, ���� ) {
            case ��1:           // ������ ����� '��1' �� ��, ����
                    break;
            case ��2:           // ������ ����� '��2' �� ��, ����
                    break;
            case ��3:           // ������ ����� '��3' �� ��, ����
                    break;
            default:            // � ���̽����� �ش���� ���� ��, ����
                    break;
        }
    */
    int N;
    printf("�޴� ��ȣ : ");
    scanf("%d", &N);

    switch ( N ) {
        case 1:
                printf("�Ƹ޸�ī��\n");
                break;
        case 2:
                printf("ī���\n");
                break;
        case 3:
                printf("���̽�Ƽ\n");
                break;
        default:
                printf("����\n");
                break;
    }
    return 0;
}