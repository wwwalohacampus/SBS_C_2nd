#include <stdio.h>
#include <string.h>

/* 
    ���ڿ� ó���Լ�
    : ���ڿ� ����, ���ڿ� ����/����/�� ���� ����� ����ϴ� �Լ�
    - string.h ������Ͽ� ���ǵǾ� �ִ�.

    * ����
    strlen(���ڿ�)                  : ���ڿ��� ���̸� ��ȯ
    strcpy(str1, str2)              : str2 �� str1 �� ����
    strncpy(str1, str2, count)      : str2 �� str1 �� count���� ��ŭ ����

*/
int main(void) {

    char str1[50] = "apple is good";
    char str2[50] = "berry is good";
    char str3[50];

    // �� ���ڿ��� ����
    printf("str1 �� ���� %d \n", strlen(str1));
    printf("str2 �� ���� %d \n", strlen(str2));

    // str1�� str3 �� �����ϱ�
    strcpy(str3, str1);

    // str1�� ���� �� 5���ڸ� str2 �� �����ϱ�
    strncpy(str2, str1, 5);

    printf("str1 : %s\n", str1);
    printf("str2 : %s\n", str2);
    printf("str3 : %s\n", str3);
    
    return 0;
}