#include <stdio.h>

int main(void) {
     int score = 0;
    char grade = 'F';
    printf("���� : ");
    scanf("%d", &score);

    // ���� : 90~100
    if( score >= 90 && score <= 100 ){
        grade = 'A';
    }
    // ���� : 80~89
    else if( score >= 80 ){
        grade = 'B';
    }
    // ���� : 70~79
    else if( score >= 70 ){
        grade = 'C';
    }
    // ���� : 60~69
    else if( score >= 60 ){
        grade = 'D';
    }
    // ���� : ~60
    else {
        grade = 'F';
    }
    printf("����� %c �Դϴ�.", grade);
    return 0;
}