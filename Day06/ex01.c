#include <stdio.h>

int main(void) {
    
    int num;
    printf("���� �Է� : ");
    scanf("%d", &num);

    if( num < 3 )
        printf("���� num �� 3���� �۽��ϴ�. \n");

    if( num == 3 )
        printf("���� num �� 3 �Դϴ�. \n");

    if( num > 3 )
        printf("���� num �� 3���� Ů�ϴ�. \n");

    return 0;
}