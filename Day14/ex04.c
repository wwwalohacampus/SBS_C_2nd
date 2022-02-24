#include <stdio.h>
#include <string.h>

int main(void) {
    
    FILE *ifp, *ofp;        // 파일 포인터 선언
    char name[50];          // 입력 문자열 
    int C, JAVA, PYTHON;    // 점수
    int total = 0;          // 총점
    double avg = 0.0;       // 평균
    int res;

    // 파일 입력
    ifp = fopen("list.txt", "r");
    if( ifp == NULL ){
        printf("파일 읽기 실패\n");
        return 1;
    }

    // 파일 출력
    ofp = fopen("score.txt", "w");
    if( ifp == NULL ){
        printf("파일 생성 실패\n");
        return 1;
    }

    while(1) {

        // fscanf(파일포인터, "형식")
        // : 파일 데이터를 형식에 맞게 입력받는 함수
        // - 입력 실패 : EOF
        res = fscanf(ifp, "%s%d%d%d", name, &C, &JAVA, &PYTHON);
        if( res == EOF ) {
            break;
        }
        total = C + JAVA + PYTHON;  // 총점 계산
        avg = total / 3.0;          // 평균 계산
        // fprintf(파일포인터, "형식", 변수1, 변수2, ...)
        // : 형식에 맞게 파일에 데이터를 출력하는 함수
        fprintf(ofp, "%s%5d%7.2lf\n", name, total, avg);
    }

    // 파일 닫기
    fclose(ifp);
    fclose(ofp);

    return 0;
}