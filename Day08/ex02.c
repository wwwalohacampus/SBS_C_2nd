#include <stdio.h>

int main(void) {
    // 학생의 수 N을 입력받고,
    // 각 학생의 성적을 N개만큼 입력받아서,
    // 성적의 합계와 평균을 구하시오.
    int N;
    printf("학생의 수 : ");
    scanf("%d", &N);
    
    int student[N];
    int sum = 0;            // 합계
    double avg = 0.0;       // 평균
    for (int i = 0; i < N; i++) {
        printf("학생 %d의 성적 : ", i+1);
        scanf("%d", &student[i]);
        sum = sum + student[i];
    }
    // (평균) = (합계) / (개수)
    avg = (double) sum / N;

    printf("학생 성적의 합계 : %d\n", sum );
    printf("학생 성적의 평균 : %f\n", avg );

    return 0;
}