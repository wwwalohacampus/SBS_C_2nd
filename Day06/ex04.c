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
    if( score >= 80 && score < 90 ){
        grade = 'B';
    }
    // ���� : 70~79
    if( score >= 70 && score < 80 ){
        grade = 'C';
    }
    // ���� : 60~69
    if( score >= 60 && score < 70 ){
        grade = 'D';
    }
    // ���� : ~60
    if( score < 60 ){
        grade = 'F';
    }
    printf("����� %c �Դϴ�.", grade);
    return 0;
}