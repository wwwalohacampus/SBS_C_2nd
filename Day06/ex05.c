#include <stdio.h>

int main(void) {
     int score = 0;
    char grade = 'F';
    printf("점수 : ");
    scanf("%d", &score);

    // 점수 : 90~100
    if( score >= 90 && score <= 100 ){
        grade = 'A';
    }
    // 점수 : 80~89
    else if( score >= 80 ){
        grade = 'B';
    }
    // 점수 : 70~79
    else if( score >= 70 ){
        grade = 'C';
    }
    // 점수 : 60~69
    else if( score >= 60 ){
        grade = 'D';
    }
    // 점수 : ~60
    else {
        grade = 'F';
    }
    printf("등급은 %c 입니다.", grade);
    return 0;
}