#include <stdio.h>
// �Լ� ����
void print_char(char ch, int count);

int main(void) {
    
    print_char('A', 20);

    return 0;
}
// ��ȯŸ���� ���� �Լ�
// �Է¹��� ���� ch �� count �� ����ϴ� �Լ�
void print_char(char ch, int count) {
    int i;

    for (int i = 0; i < count; i++) {
        printf("%c", ch);
    }
    // ��ȯŸ���� ���� ��, 
    // return �� ������� �ʾƵ� �ȴ�.
}