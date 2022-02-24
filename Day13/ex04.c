#include <stdio.h>

/*
    typedef
    : ���� �ڷ����� ���ο� �̸��� �ο��ϴ� Ű����
    typedef �����ڷ��� ���ο��̸�;

    ex) typedef int INT;

        typedef struct ����ü�̸� {

        } ���ο��̸�;

        typedef struct ����ü�̸� ���ο��̸�;
    
    # ����ü ����
    - struct ����ü�̸� �����̸�;

    typdef ��� ��, ����ü ����
    - typdef struct ����ü�̸� ���ο��̸�;
    - ���� : ���ο��̸� �����̸�;
*/

// ����ü ���ǿ� ���ÿ� typedef ����
typedef struct {
    int x;
    int y;
} POINT;

// ����ü ����
struct person {
    char name[30];
    int age;
};

// ���ǵ� ����ü�� typdef ����
typedef struct person PERSON;


int main(void) {
    // typedef  ��� ��, ����ü ���� ������ ��,
    // �����ϰ� ����ü ������ ������ �� �ִ�.
    POINT position = {30, 40};
    // struct person p;
    PERSON p = {"���ڵ�", 10};

    printf("(x, y) = (%d, %d)\n", position.x, position.y);
    printf("%s : %d\n", p.name, p.age);

    return 0;
}