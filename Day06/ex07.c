#include <stdio.h>

int main(void) {
    
    int score;
    printf("���� : ");
    scanf("%d", &score);

    switch (score) {
        case 100:
        case 90:
                    printf("������ A �Դϴ�.");
                    break;
        case 80:
        case 70:
                    printf("������ B �Դϴ�.");
                    break;
        case 60:
        case 50:
                    printf("������ C �Դϴ�.");
                    break;
    
        default:    printf("������ F �Դϴ�.");
                    break;
    }


    return 0;
}