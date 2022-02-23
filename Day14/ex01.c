#include <stdio.h>
#include <string.h>

/*
    # ����ü
    : �پ��� �ڷ����� �������� ��� ������ ���ο� �ڷ���
    Ű���� : struct

    * ����ü ����
    struct ����ü�̸� {
        �ڷ���1 ����1;
        �ڷ���2 ����2;
        ...
    };

    * ����ü ����
    struct ����ü�̸� �����̸�;
*/

// ����ü ����
struct person {
    // �̸�, ����
    char name[30];
    int age;
};

int main(void) {
    
    // ����ü ����
    struct person boy, girl;

    // ��� ���� ������(.)
    // boy, girl�� name(�̸�)�� ���ڿ��� ����
    strcpy(boy.name, "���ڵ�");
    strcpy(girl.name, "���ڵ�");

    // boy, girl �� age(����)
    boy.age = 20;
    girl.age = 10;

    // ���
    printf("boy �� �̸��� %s, ���̴� %d \n", boy.name, boy.age);
    printf("girl �� �̸��� %s, ���̴� %d \n", girl.name, girl.age);

    return 0;
}