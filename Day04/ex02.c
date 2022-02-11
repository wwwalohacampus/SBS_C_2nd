#include <stdio.h>

int main(void) {
    char ch;
    int num;
    double fnum;

    // &       : 주소연산자
    // &변수    : 변수의 주소값을 반환
    printf("문자 : ");
    scanf("%c", &ch);

    printf("정수 : ");
    scanf("%d", &num);

    printf("실수 : ");
    scanf("%lf", &fnum);

    printf("%c %d %lf \n", ch, num, fnum);
    return 0;
}