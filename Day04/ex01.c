#include <stdio.h>

int main(void) {
    int age;
    char name[10];          

    printf("���̿� �̸��� �Է� : ");
    // �Է��Լ�
    scanf("%d %s", &age, name);
    printf("���� :  %d\n", age );
    printf("�̸� :  %s\n", name );
    return 0;   
}