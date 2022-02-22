#include <stdio.h>
#include <string.h>

/* 
    문자열 처리함수
    : 문자열 길이, 문자열 복사/결합/비교 등의 기능을 사용하는 함수
    - string.h 헤더파일에 정의되어 있다.

    * 종류
    strlen(문자열)                  : 문자열의 길이를 반환
    strcpy(str1, str2)              : str2 를 str1 에 복사
    strncpy(str1, str2, count)      : str2 를 str1 에 count개수 만큼 복사

*/
int main(void) {

    char str1[50] = "apple is good";
    char str2[50] = "berry is good";
    char str3[50];

    // 각 문자열의 길이
    printf("str1 의 길이 %d \n", strlen(str1));
    printf("str2 의 길이 %d \n", strlen(str2));

    // str1을 str3 에 복사하기
    strcpy(str3, str1);

    // str1의 내용 중 5글자만 str2 에 복사하기
    strncpy(str2, str1, 5);

    printf("str1 : %s\n", str1);
    printf("str2 : %s\n", str2);
    printf("str3 : %s\n", str3);
    
    return 0;
}