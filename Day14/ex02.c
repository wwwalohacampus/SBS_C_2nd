#include <stdio.h>

int main(void) {
    
    FILE *fp;           // FILE ����ü ������ ���� ����
    char str[30];
    int i;              
    
    printf("�Է� : ");
    gets(str);          // ���ڿ� ���� �Է� �Լ�

    fp = fopen("output.txt", "w");      // ���� ���� ���� ����
    if( fp == NULL ) {
        printf("���� ���� ����!\n");
        return 1;
    }

    i = 0;
    while( str[i] != '\0' ) {
        // fputc(����, ����������);
        // : �� ���ڸ� ���Ϸ� ����ϴ� �Լ�
        // - ��� ���� : ��µ� �� ���ڸ� ��ȯ
        // - ��� ���� : EOF �� ��ȯ
        fputc(str[i], fp);          // ���ڸ� ���Ͽ� ���
        i++;
    }
    fputc('\n', fp);                // �ٹٲ�
    fclose(fp);                     // ���� �ݱ�

    return 0;
}