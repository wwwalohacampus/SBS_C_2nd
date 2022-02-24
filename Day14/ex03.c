#include <stdio.h>
#include <string.h>

int main(void) {
    
    FILE *ifp, *ofp;    // 파일 포인터 선언
    char str[100];      // 입력 문자열 
    char *res;          

    // 파일 입력
    ifp = fopen("test.txt", "r");
    if( ifp == NULL ){
        printf("파일 읽기 실패\n");
        return 1;
    }

    // 파일 출력
    ofp = fopen("copy.txt", "w");
    if( ifp == NULL ){
        printf("파일 생성 실패\n");
        return 1;
    }

    while(1) {
        // fgets(입력배열, 배열의크기, 파일포인터)
        // : 파일을 한 줄씩 입력받는 함수
        // - 입력 실패 : NULL 반환
        // test.txt 의 텍스트를 한 줄씩 읽어와서 str 배열에 저장
        res = fgets(str, sizeof(str), ifp);
        if( res == NULL ) {
            break;
        }
        str[strlen(str) - 1] = '\0';
        // fputs(문자열, 파일포인터)
        // : 파일에 한 줄씩 문자열을 출력하는 함수
        fputs(str, ofp);
        fputs("\n", ofp);  // 줄바꿈
    }

    // 파일 닫기
    fclose(ifp);
    fclose(ofp);

    return 0;
}