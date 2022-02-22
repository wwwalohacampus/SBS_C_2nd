#include <stdio.h>
#include <string.h>  
/*
    문자열 처리 함수
    : 문자열의 길이, 문자열 복사/결합/비교 등의 기능을 사용하는 함수

    - string.h 헤더파일에 정의 되어있다.

    *종류
    strcat(str1, str2)              : str2 를 str1 뒤에 연결
    strncat(str1, str2, count)      : str2 를 str1 뒤에 count 개수만큼 연결

    strcmp(str1, str2)              : 두 문자열을 비교하여, 같으면 0, 아니면 0 이 아닌 값
    strncmp(str1, str2, count)      : 두 문자열을 비교하여, 앞에서부터 count 개수 만큼 비교
                                      같으면 0, 아니면 0이 아닌 값
*/

int main(void) {
    
    char str1[50] = "28일 종강";
    char str2[50] = "28일 종강";

    // str1 문자열에 "입니다." 문자여 연결하기
    strcat(str1, "입니다.");
    printf("%s\n", str1);

    // str1 문자열에 "입니다. 즐거운 주말 되세요" 중 
    // 4글자(7byte) 입니다<6byte> + .<1byte> 만 연결
    strncat(str2, "입니다. 즐거운 주말 되세요", 7);
    printf("%s\n", str2);

    // str1 과 str2 문자열 비교
    printf("문자열 비교 결과 1 : %d\n", strcmp(str1, str2));
    printf("문자열 비교 결과 1 : %d\n", strcmp(str1, "고생하셨습니다."));

    return 0;
}