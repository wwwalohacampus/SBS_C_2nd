#include <stdio.h>

// �Լ� ����
double plus(double a, double b);
double minus(double a, double b);
double mul(double a, double b);
double div(double a, double b);

int main(void) {
    // double �� ��/��� ��� ���Ĺ��� : %lf
    double a, b;
    printf("a : ");
    scanf("%lf", &a);

    printf("b : ");
    scanf("%lf", &b);

    printf("a + b = %lf\n", plus(a, b) );
    printf("a - b = %lf\n", minus(a, b) );
    printf("a * b = %lf\n", mul(a, b) );
    printf("a / b = %lf\n", div(a, b) );
    
    return 0;
}

// �Լ� ����

double plus(double a, double b) {
    double result = a + b;
    return result;
}
double minus(double a, double b) {
    double result = a - b;
    return result;
}
double mul(double a, double b) {
    double result = a * b;
    return result;
}
double div(double a, double b) {
    double result = a / b;
    return result;
}