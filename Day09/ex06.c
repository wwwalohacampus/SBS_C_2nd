#include <stdio.h>

// �Լ� ����
// ��ȯŸ�԰� �Ű����� ��� ���� �Լ�
void print_line(void);

int main(void) {
    
    print_line();
    printf("�й�\t�̸�\t����\n");
    printf("001\t�л�1\t����Ʈ�����а�\n");
    printf("002\t�л�2\t�κ����а�\n");
    printf("003\t�л�3\tIT���а�\n");
    print_line();
    return 0;
}

// �Լ� ����
void print_line(void) {
    for (int i = 0; i < 50; i++) {
        printf("-");
    }
    printf("\n");
}