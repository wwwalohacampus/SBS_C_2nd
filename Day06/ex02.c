#include <stdio.h>

int main(void) {
    char ch;
    printf("�� ���ڸ� �Է��ϼ��� : ");
    scanf("%c", &ch);

    if( ch == 'A' )
        printf("�Է��� ���ڴ� %c �Դϴ�.", ch);
    else 
        printf("�Է��� ���ڴ� A �� �ƴմϴ�.");

    return 0;
}