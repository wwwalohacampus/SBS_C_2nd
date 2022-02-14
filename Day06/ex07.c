#include <stdio.h>

int main(void) {
    
    int score;
    printf("점수 : ");
    scanf("%d", &score);

    switch (score) {
        case 100:
        case 90:
                    printf("성적은 A 입니다.");
                    break;
        case 80:
        case 70:
                    printf("성적은 B 입니다.");
                    break;
        case 60:
        case 50:
                    printf("성적은 C 입니다.");
                    break;
    
        default:    printf("성적은 F 입니다.");
                    break;
    }


    return 0;
}