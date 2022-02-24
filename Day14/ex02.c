#include <stdio.h>

int main(void) {
    
    FILE *fp;           // FILE 구조체 포인터 변수 선언
    char str[30];
    int i;              
    
    printf("입력 : ");
    gets(str);          // 문자열 단위 입력 함수

    fp = fopen("output.txt", "w");      // 쓰기 모드로 파일 열기
    if( fp == NULL ) {
        printf("파일 생성 실패!\n");
        return 1;
    }

    i = 0;
    while( str[i] != '\0' ) {
        // fputc(문자, 파일포인터);
        // : 한 문자를 파일로 출력하는 함수
        // - 출력 성공 : 출력된 한 문자를 반환
        // - 출력 실패 : EOF 를 반환
        fputc(str[i], fp);          // 문자를 파일에 출력
        i++;
    }
    fputc('\n', fp);                // 줄바꿈
    fclose(fp);                     // 파일 닫기

    return 0;
}