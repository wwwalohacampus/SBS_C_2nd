#include <stdio.h>
#include <string.h>

/*
    # ����ü �迭
    : �迭�� ��Ұ� ����ü�� �̷���� �迭
    
    * �迭 : ���� �ڷ����� ���� ���� �����͸� �����ϴ� ����
*/

// ����ü ����
struct person {
    // �̸�, ����
    char name[30];
    int age;
};

int main(void) {
    
    // ����ü �迭 ����
    struct person boy[5] = {
        {"���ڵ�", 12},
        {"���ڵ�", 14},
        {"���ڵ�", 16},
        {"���ڵ�", 18},
        {"���ڵ�", 20}
    };

    // ����ü �迭 ����
    struct person girl[5];
    strcpy( girl[0].name, "���ڵ�");
    strcpy( girl[1].name, "���ڵ�");
    strcpy( girl[2].name, "���ڵ�");
    strcpy( girl[3].name, "���ڵ�");
    strcpy( girl[4].name, "���ڵ�");

    girl[0].age = 12;
    girl[1].age = 14;
    girl[2].age = 16;
    girl[3].age = 18;
    girl[4].age = 20;

    // ���
    for (int i = 0; i < 5; i++) {
        printf("boy �� �̸��� %s, ���̴� %d \n", boy[i].name, boy[i].age);
        printf("girl �� �̸��� %s, ���̴� %d \n", girl[i].name, girl[i].age);
    }
    return 0;
}