#include <stdio.h>

int main(void) {
  
    // ���� ����
    FILE *fp;           // FILE ����ü ������ ���� ����
    char ch;
    
    // fopen("���/�����̸�", "���");
    // - ��� : r(�б�), w(����), a(�߰�)
    // - ���� �б� ���� : NULL ��ȯ
    fp = fopen("test.txt", "r");
    if( fp == NULL ) {
        printf("���� �б� ����!\n");
        return 1;
    } 

    printf("���� ���� ����\n");

    // �ؽ�Ʈ ������ ���� ��������
    while(1) {
        // fgetc() : ���� �Է� �Լ�
        // - ���Ͽ��� �ϳ��� ���ڸ� �Է¹޾� ��ȯ�ϴ� �Լ�
        ch = fgetc(fp);
        // EOF : ������ �������� �ǹ�
        if( ch == EOF ) {
            break;
        }
        putchar(ch);        // ���� ��� �Լ�
    }

    // ���� �ݱ�
    fclose(fp);

    return 0;
}