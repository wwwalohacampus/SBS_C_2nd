#include <stdio.h>

/* 
    ����ü ������
    : ������ ������ ����Ű�� �ִ� �ּҰ��� ����ü�� ������
    ( ����ü ������ �ּҰ��� �����ϰ� �մ� ������ ���� )

    * ������ : �ּҰ��� �����ϴ� ����
*/

typedef struct {
    char name[30];
    int age;
} Person;


int main(void) {
    // ����ü ���� ����
    Person boy = {"SBS", 30};
    // ����ü ������
    Person *ptr = &boy;

    // ȭ��ǥ ������ (->)
    // : ����ü �������� ��� ������ �����ϴ� ������
    printf("%s : %d\n", (*ptr).name, (*ptr).age);
    printf("%s : %d\n", ptr->name, ptr->age);
    
    return 0;
}