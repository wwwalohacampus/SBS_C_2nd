#include <stdio.h>

int main(void) {
    int income = 0;                     // ����
    double tax;                         // ����
    const double tax_rate = 0.12;       // ����
    // const    : ����� �����ϴ� Ű����
    //            ����� ����� ���ÿ� �ʱ�ȭ
    //            ���� �ٲ� �� ����.
    // tax_rate = 0.20;  (���� �߻�)

    income = 1000;
    tax = income * tax_rate;        // 1000 ���� ���� 12%

    // %f           : float Ÿ�� ���Ĺ���
    // %lf          : double Ÿ�� ���Ĺ���
    // %.����lf     :  �Ҽ� �� �Ʒ� '����' ��ŭ ǥ���Ѵ�. 
    printf("������ %.3lf �Դϴ�. \n", tax);

    return 0;
}