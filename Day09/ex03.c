#include <stdio.h>

// void : ��ȯŸ���� ���� ���� �ǹ�
void coffe( int water,  int coffe, int temp ) {
    water *= 2;
    coffe -= 5;
    static int cup1 = 0;
    int result = water + coffe + temp;
    cup1++;

    printf("�ֹ� �� Ŀ�Ǵ� %d �Դϴ�.\n", result);
    printf("�ֹ� �� Ŀ�� ������ %d �Դϴ�.\n", cup1);
    printf("\n");
}

void juice( int water, int fruit ) {
    water *= 1.5;
    fruit += 10;
    static int cup2 = 0;
    int result = water + fruit;
    cup2++;

    printf("�ֹ� �� �ֽ��� %d �Դϴ�.\n", result);
    printf("�ֹ� �� �ֽ� ������ %d �Դϴ�.\n", cup2);
    printf("\n");
}

int main(void) {

    coffe(30, 20, 90);
    juice(30, 50);
    
    coffe(30, 20, 90);
    juice(30, 50);

    return 0;
}