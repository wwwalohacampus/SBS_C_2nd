#include <stdio.h>
#include <string.h>  
/*
    ���ڿ� ó�� �Լ�
    : ���ڿ��� ����, ���ڿ� ����/����/�� ���� ����� ����ϴ� �Լ�

    - string.h ������Ͽ� ���� �Ǿ��ִ�.

    *����
    strcat(str1, str2)              : str2 �� str1 �ڿ� ����
    strncat(str1, str2, count)      : str2 �� str1 �ڿ� count ������ŭ ����

    strcmp(str1, str2)              : �� ���ڿ��� ���Ͽ�, ������ 0, �ƴϸ� 0 �� �ƴ� ��
    strncmp(str1, str2, count)      : �� ���ڿ��� ���Ͽ�, �տ������� count ���� ��ŭ ��
                                      ������ 0, �ƴϸ� 0�� �ƴ� ��
*/

int main(void) {
    
    char str1[50] = "28�� ����";
    char str2[50] = "28�� ����";

    // str1 ���ڿ��� "�Դϴ�." ���ڿ� �����ϱ�
    strcat(str1, "�Դϴ�.");
    printf("%s\n", str1);

    // str1 ���ڿ��� "�Դϴ�. ��ſ� �ָ� �Ǽ���" �� 
    // 4����(7byte) �Դϴ�<6byte> + .<1byte> �� ����
    strncat(str2, "�Դϴ�. ��ſ� �ָ� �Ǽ���", 7);
    printf("%s\n", str2);

    // str1 �� str2 ���ڿ� ��
    printf("���ڿ� �� ��� 1 : %d\n", strcmp(str1, str2));
    printf("���ڿ� �� ��� 1 : %d\n", strcmp(str1, "����ϼ̽��ϴ�."));

    return 0;
}